#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/utsname.h>

int main() {
	struct utsname buff;
	
	errno=0;
	
	if( uname(&buff)!= 0 ) {
		perror("\nUname doesnt return 0, so there is an error\n");
		exit(EXIT_FAILURE);
	}
	printf("\nSystem Name=%s ", buff.sysname);
	
	
	printf("\nNode Name=%s ", buff.nodename);	
	
	printf("\nRelease=%s ", buff.release);
	
	printf("\nVersion%s ", buff.version);
		
	printf("\nMachine Name=%s \n\n ", buff.machine);
	
	
	
	
	
	
}	
