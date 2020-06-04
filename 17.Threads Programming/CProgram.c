#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void *ThreadFunc(void *vargp ) {
	sleep(3);
	printf("\nJarvis is threading...\n");
	return NULL;
}
	

int main() {
	
	pthread_t thread_id;
	printf("\nStart of main\n");
	
	pthread_create(&thread_id, NULL,ThreadFunc,NULL);
	pthread_join(thread_id,NULL);
	
	printf("\nIn Main, After threading\n");
	
	 
	
}

