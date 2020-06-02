#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int* ptr;
	int num,sum=0;
	num=8;
	printf("We have %d elements to allocate memory to\n",num);
	
	ptr=(int*)malloc(num*sizeof(int));
	if (ptr==NULL){
			printf("Error! Could not Allocate Memory !!");
			exit(0);
	}
	printf("Memory allocation has been succesfull");
	
	
	
	
	for (int i=0 ; i<num ; ++i){
			ptr[i]=i+1;
	}
	printf("\nInserted %d elements in the block before realloc as follows:\n", num);
	
	for (int i=0 ;i<num ; ++i) {
	
		printf("\nPointer location: %d",&ptr[i]);		
		printf("\nPointer Value: %d\n", ptr[i]);
	}
	
	ptr=realloc( ptr, 16*sizeof(int));
	/*
	printf("\nInserted %d elements in the block after realloc as follows:\n", num);
	for (int i=0 ;i<num ; ++i) {
	
		printf("\nPointer location: %d",&ptr[i]);		
		printf("\nPointer Value: %d\n", ptr[i]);
	}
	*/
	
	
}	
