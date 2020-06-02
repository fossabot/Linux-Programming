#include <stdio.h>
#include <sys/statvfs.h>

int main() {
	struct statvfs buf;
	
	if(statvfs(".",&buf)==-1) {
		perror("\n Error Occurred !!! ");
	} else {
		printf("\n Each block has a size of  %ld bytes  ", buf.f_frsize);
		
		printf("\nThere are %ld blocks available out of %ld\n", buf.f_bavail,buf.f_blocks);
		 
	}	
	
	
}	
