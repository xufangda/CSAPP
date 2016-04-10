#include <stdio.h>
#include <arpa/inet.h>


int main(int argc,char **argv)
{
	int i=0;
	char tmp[15];
	struct in_addr out;
	char* res;
	if(argc==2)
	{
		sscanf(argv[1],"%s",tmp);
		inet_aton(tmp,&out);
		printf("%x \n",ntohl(out.s_addr));
		//printf("%d.%d.%d.%d",tmp[0],tmp[1],tmp[2],tmp[3]);
	}
	return -1;
}