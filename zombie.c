#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int pid = fork();

	if (pid > 0) {
		printf("pai.\n");
		sleep(25);
         }
         
	else if (pid == 0) {
		printf("filho\n");
		exit(0);
 }
  return 0;
}

