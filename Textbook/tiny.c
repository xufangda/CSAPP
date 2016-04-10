#include "csapp.h"

void doit(int fd);
void read_requesthdrs(rio_t *rp);
int  parse_uri(char *url, char *filename, char *cgiargs);
void serve_static(int fd, char *filename, int filesize);
void get_filtype(char *filename , char *filetype);
void serve_dynamic(int fd, char *filename, char *cgiargs);
void clienterror(int fd, char *cause, char *errnum, char *shortmsg, char *longmsg);

int main(int argc, char** argv)
{
	int listenfd, connfd, port, clientlen;
	struct sockaddr_in clientaddr;

	if(argc!=2){
		fprintf(stderr, "usage: %s <port>\n",argv[0]);
		exit(1);
	}
	port = atoi(argv[1]);

	listenfd= Open_listenfd(port);
	while(1)
	{
		clientlen = sizeof(clientaddr);
		connfd= Accept(listenfd, (SA*)&clientaddr, &clientlen);
		doir(connfd);
		Close(connfd);
	}
	exit(0);

} 
