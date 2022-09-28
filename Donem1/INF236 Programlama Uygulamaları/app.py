import streamlit as st

st.title('Welcome to INF236')

st.text('Welcome to Jungle')

value = st.text_input('Enter some text')

if st.button('Hit me'):
	st.text('You have entered ' + value)


slide_val = st.slider('Slide me', min_value=0, max_value=10)

st.image('https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSYEfTygIS8UCA-cy32F7hThYUUdc6KvE1gxw&usqp=CAU')
