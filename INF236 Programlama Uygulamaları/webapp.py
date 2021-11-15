import streamlit as st

st.title('--INF 236--')
st.text('Uzay says: Welcome to INF 236')


pw = st.text_input('Enter your password')
if st.button('Click'):
	st.text('You have entered: ' + pw)

slv = 0
slv = st.slider('What is your Python level', 0,40, 15)
st.write('slider value ',  slv)

age = st.slider('How old are you?', 0, 130, 25)
st.write("I'm ", age, 'years old')


st.image('https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSYEfTygIS8UCA-cy32F7hThYUUdc6KvE1gxw&usqp=CAU')