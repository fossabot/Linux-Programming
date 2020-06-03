#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>



int main() {
	pid_t cpid;
	if(fork()==0) {
		exit(0);
	
	} else {
		cpid=wait(NULL);
	}
	printf("\nParent process id: %d\n",getpid());
	
	printf("\nChild process id: %d\n",cpid);
	
	
	
}

