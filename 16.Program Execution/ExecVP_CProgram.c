#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main() {
	
	printf("\nStarting in ExecVP Program\n");
	char *args[]={"./execvp_tst",NULL};
	execvp(args[0],args);
	
	printf("\nBack in ExecVP Program\n");
	
	
	
}

