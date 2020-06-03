#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <sys/time.h>


#define INTERVAL 500
void boringfuncname (int signum) {
		printf("\n Timer went off \n");
	
}

int main() {
	struct itimerval it_val;
	
	if(signal(SIGALRM, (void (*)(int) ) boringfuncname )==SIG_ERR) {
		perror("Unable to catch SIGALARM");
		exit(1);
	}
	it_val.it_value.tv_sec =INTERVAL/1000;
	it_val.it_value.tv_usec =  (INTERVAL*1000)%1000000;
	
	it_val.it_interval = it_val.it_value;
	
	if (setitimer(ITIMER_REAL, &it_val,NULL)==-1){
		perror("Error when setting itimer");		
		exit(1);
		
	}
	for(;;)
		pause();


}

