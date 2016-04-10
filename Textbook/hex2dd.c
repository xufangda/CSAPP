#include <stdio.h>
#include <arpa/inet.h>


int main(int argc,char **argv)
{
	int i=0;
	unsigned int tmp;
	struct in_addr out;
	char* res;
	if(argc==2)
	{
		sscanf(argv[1],"%x",&tmp);
		out.s_addr=htonl(tmp);
		res=inet_ntoa(out);
		printf("%s \n",res);
		//printf("%d.%d.%d.%d",tmp[0],tmp[1],tmp[2],tmp[3]);
	}
	return -1;
}