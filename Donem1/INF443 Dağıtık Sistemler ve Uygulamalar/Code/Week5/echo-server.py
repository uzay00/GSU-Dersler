#!/usr/bin/env python3

import socket

HOST = '127.0.0.1'  # Standard loopback interface address (localhost)
PORT = 65432        # Port to listen on (non-privileged ports are > 1023)

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    # bind() is used to associate the socket with a specific network interface and port number:
    s.bind((HOST, PORT))
    # listen() enables a server to accept() connections. It makes it a “listening” socket:
    s.listen()
    # accept() blocks and waits for an incoming connection. 
    # When a client connects, it returns a new socket object representing 
    #       the connection and a tuple holding the address of the client.
    conn, addr = s.accept()
    with conn:
        print('Connected by', addr)
        while True:
            data = conn.recv(1024)
            if not data:
                break
            reply = 'Server Says: ' + data.decode('utf-8')
            conn.sendall(str.encode(reply))

    # If conn.recv() returns an empty bytes object, b'', 
    # then the client closed the connection and the loop is terminated. 

    #The with statement is used with conn to automatically close the socket at the end of the block.