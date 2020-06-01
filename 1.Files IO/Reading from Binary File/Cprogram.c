#include <stdio.h>
#include <stdlib.h>

struct threeNumb {

	int num1,num2,num3;
	
};

int main() {
    int num;
    struct threeNumb number ;
    
    
    FILE *fptr;
    fptr=fopen("program.bin","rb");
    
    if(fptr==NULL)
    {
        printf("ERROR !  Could not open file program.bin");
        exit(1);
    }
    
    for (num=1;num<5;++num) {
	
		
		fread(&number ,sizeof(struct threeNumb),1,fptr);
		printf("n1:%d \t n2:%d \t n3:%d ",number.num1,number.num2,number.num3 );
	}
	fclose(fptr);
    
}
