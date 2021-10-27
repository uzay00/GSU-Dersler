# INF443 Dağıtık Sistemler ve Uygulamalar

## Week 1: Introduction to Distributed Systems

## Week 2: Concurrency vs Parallelism
 - [Concurrency](https://github.com/uzay00/GSU-Dersler/blob/main/INF443%20Da%C4%9F%C4%B1t%C4%B1k%20Sistemler%20ve%20Uygulamalar/Code/Week2/Threads.ipynb)
 - [Parallelism](https://github.com/uzay00/GSU-Dersler/blob/main/INF443%20Da%C4%9F%C4%B1t%C4%B1k%20Sistemler%20ve%20Uygulamalar/Code/Week2/MultiProcessing.ipynb)


## Week 3: Concurrency vs Parallelism II
### Compute pi emprically
Multiprocessing monte carlo simulation for calculating pi
![](compute_pi.JPG)

Answer: [ComputePi.ipynb](https://github.com/uzay00/GSU-Dersler/blob/main/INF443%20Da%C4%9F%C4%B1t%C4%B1k%20Sistemler%20ve%20Uygulamalar/Code/Week2/ComputePi.ipynb) you need [multi_process_example.py](https://github.com/uzay00/GSU-Dersler/blob/main/INF443%20Da%C4%9F%C4%B1t%C4%B1k%20Sistemler%20ve%20Uygulamalar/Code/Week2/multi_process_example.py) python file.

 - Mustafa Batuhan CEYLAN's [Answer](https://gist.github.com/Frozander/9ae59942f8126a6bf7ebc86ebec07cbb)
 - Muhammed Nurullah GÜMÜŞ's [Answer](https://gist.github.com/silverdevelopper/bfca3910de39d9e3822d989794c6c2dc)

Example
 - [speech recognition](https://github.com/uzay00/GSU-Dersler/blob/main/INF443%20Da%C4%9F%C4%B1t%C4%B1k%20Sistemler%20ve%20Uygulamalar/Code/Week3/Ses%20Tanima.ipynb)


# Client-Server architecture for speech analysis
 
Client-Server architecture 
 - Socket Programming [Lecture](https://github.com/uzay00/GSU-Dersler/blob/main/INF443%20Da%C4%9F%C4%B1t%C4%B1k%20Sistemler%20ve%20Uygulamalar/Code/Week5/Socket%20Programming.ipynb)
 - Client [Code](https://github.com/uzay00/GSU-Dersler/blob/main/INF443%20Da%C4%9F%C4%B1t%C4%B1k%20Sistemler%20ve%20Uygulamalar/Code/Week5/echo-client.py) and 
Server [Code](https://github.com/uzay00/GSU-Dersler/blob/main/INF443%20Da%C4%9F%C4%B1t%C4%B1k%20Sistemler%20ve%20Uygulamalar/Code/Week5/echo-server.py)


Combination of speech recognition and text mining
 - Simple Speech Analysis [Code](https://github.com/uzay00/GSU-Dersler/blob/main/INF236%20Programlama%20Uygulamalar%C4%B1/Ses%20Tanima.ipynb)


- ![](SpeechAnalysis.jpg)

### Homework2 - Speech Analysis with Client-Server Arc.
Using socket programming build 
- a client that can connect to `Google` for speech-to-text
- a multi-threading server that can connect to `Summarify` for sentiment analysis
and let them communicate through internet with TCP

![](mt-speech-analysis.JPG)
