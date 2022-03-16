#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	
	execl("/home/trezen/Desktop/Linux/Linux Internals/assignment/test2", "./test2", "test", "file", 0) ;
	
	printf("\n");
	
return 0;
}
