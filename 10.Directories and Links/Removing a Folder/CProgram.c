#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
	
	char new_file[]="/tmp/Newfolder/new.txt";	
	char new_dir[]="/tmp/Newfolder";
	
	unlink(new_file);
	if ( rmdir(new_dir)!=0 ) {
	 perror("\nRemoval of directory has failed. ERROR!!\n ");
	 
	} 	else {
	
	 printf("\nRemoval of directory has been succesfull. PASS!! \n");
	
	}
	
	
}	
