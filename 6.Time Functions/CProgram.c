#include <stdio.h>
#include <time.h>


void func_name() { 
	printf("\nFunction Starts\n");
	printf("\nPress Enter/Return key to stop the function\n");
	for(;;){
		if(getchar())
		{
			break;
		}
	}
	printf("\nFunction terminated\n");
	
}
int main() {
	
	clock_t t;
	t=clock();
	func_name();
	t=clock()-t;
	
	double time_taken_by_func=( (double)t )/CLOCKS_PER_SEC;
	printf("\n Processing time of function is:  %f", time_taken_by_func);
	  
	
}	
