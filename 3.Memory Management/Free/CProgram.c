#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int* ptr;
	int num,sum=0;
	num=8;
	printf("\nWe have %d elements to allocate memory to\n",num);
	
	ptr=(int*)malloc(sizeof(int));
	if (ptr==NULL){
			printf("Error! Could not Allocate Memory !!");
			exit(0);
	}
	printf("\nMemory allocation has been succesfull");
	
	
	printf("\nFreeing up the memory allocated\n");
	free(ptr);
	
}	
