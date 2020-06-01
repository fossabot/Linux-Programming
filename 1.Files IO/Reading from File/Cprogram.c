#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;
    fptr=fopen("file1.txt","r");
    
    if(fptr==NULL)
    {
        printf("ERROR !  No file exists ");
        exit(1);
    }
    
    fscanf(fptr ,"%d",&num);    
    printf("Value of n=%d",num);
    fclose(fptr);
}
