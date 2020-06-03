#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
	
	int res=mkdir("/tmp/Newfolder/",0777);
	
	if (res==-1) {
	 printf("Creation of directory has failed. ERROR!! ");
	} 	else {
	
	 printf("Creation of directory has been succesfull. PASS!! ");
	
	}
	
	
}	
