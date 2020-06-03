#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void sighandler(int signum) {
	
		printf("\nWe have caught the signal %d and now Jarvis is up \n",signum) ;
		exit(1);
}

int main() {
	
		signal(SIGINT,sighandler);
		
		printf("\nJarvis is Sleeping Sir!  ");
		for (;;) {
		
			printf("\nSleeping...  ");
			sleep(3);	
			
		}
		
}	

