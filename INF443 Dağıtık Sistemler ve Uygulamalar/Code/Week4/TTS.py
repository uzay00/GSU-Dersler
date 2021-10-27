import random
import math
import time
from multiprocessing import Process, current_process
import speech_recognition as sr
import os

####################################################################
###                     Speech Recognition                       ###
####################################################################

def recognize_speech_from_mic(recognizer, microphone):
    """Transcribe speech from recorded from `microphone`.

    Returns a dictionary with three keys:
    "success": a boolean indicating whether or not the API request was
               successful
    "error":   `None` if no error occured, otherwise a string containing
               an error message if the API could not be reached or
               speech was unrecognizable
    "transcription": `None` if speech could not be transcribed,
               otherwise a string containing the transcribed text
    """
    # check that recognizer and microphone arguments are appropriate type
    if not isinstance(recognizer, sr.Recognizer):
        raise TypeError("`recognizer` must be `Recognizer` instance")

    if not isinstance(microphone, sr.Microphone):
        raise TypeError("`microphone` must be `Microphone` instance")

    # adjust the recognizer sensitivity to ambient noise and record audio
    # from the microphone
    with microphone as source:
        recognizer.adjust_for_ambient_noise(source)
        print('recording.. please start speaking')
        audio = recognizer.listen(source)

    # set up the response object
    response = {
        "success": True,
        "error": None,
        "transcription": None
    }

    # try recognizing the speech in the recording
    # if a RequestError or UnknownValueError exception is caught,
    #     update the response object accordingly
    try:
        response["transcription"] = recognizer.recognize_google(audio, language='tr-tr')
    except sr.RequestError:
        # API was unreachable or unresponsive
        response["success"] = False
        response["error"] = "API unavailable"
    except sr.UnknownValueError:
        # speech was unintelligible
        response["error"] = "Unable to recognize speech"

    return response


def baskonus():
    mic = sr.Microphone()
    r = sr.Recognizer()
    name = current_process().name
    print(name, 'Starting')
    print('parent process id:', os.getppid())
    print('process id:', os.getpid())
    
    devam = ''
    while devam != 'H':
        guess = recognize_speech_from_mic(r, mic)
        print(guess['transcription'])
        devam = input('Bas Konus? (E/H): ')
    if not guess['transcription']: return ''
    kelimeler = guess['transcription'].split()
    return kelimeler

def ariza(kelimeler):
    name = current_process().name
    print(name, 'Starting')
    print('parent process id:', os.getppid())
    print('process id:', os.getpid())
    
    return 'arıza' in kelimeler

def smap(f):
    return f()

if __name__ == '__main__':
    p = Process(target=smap, args=(baskonus, ))
    p.start()
    p.join()