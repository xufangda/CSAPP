all: echo echoserv

echo: echo.c csapp.o
	gcc -o client echo.c csapp.c -I. 
echoserv: echoserv.c csapp.o
	gcc -o serv echoserv.c csapp.c -I.