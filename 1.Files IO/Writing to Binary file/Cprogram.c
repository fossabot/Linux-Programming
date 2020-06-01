#include <stdio.h>
#include <stdlib.h>

struct threeNumb {

	int num1,num2,num3;
	
};

int main() {
    int num;
    struct threeNumb number ;
    
    
    FILE *fptr;
    fptr=fopen("program.bin","wb");
    
    if(fptr==NULL)
    {
        printf("ERROR !  Could not open file program.bin");
        exit(1);
    }
    
    for (num=1;num<5;++num) {
	
		number.num1=num;
		number.num2=2*num;
		number.num2=3*num+2020;
		fwrite(&num ,sizeof(struct threeNumb),1,fptr);
	
	}
	fclose(fptr);
    
}
