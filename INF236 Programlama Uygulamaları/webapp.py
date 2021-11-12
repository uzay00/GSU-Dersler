import streamlit as st

st.title('INF 236')
st.text('Uzay says: Welcome to INF 236')


pw = st.text_input('Enter your password')
if st.button('Click'):
	st.text('You have entered: ' + pw)


st.slider('What is your Python level', 0,40, step = 5)
