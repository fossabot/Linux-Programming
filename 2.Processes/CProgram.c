#include <stdio.h>
#include <unistd.h>

int main() {
	
	int proc_id ,par_proc_id;
	proc_id=getpid();
	par_proc_id=getppid();
	printf("\tProcess ID is %d \n \tParent process ID is %d \n",proc_id,par_proc_id);
	 


	
}	
