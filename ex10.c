#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i = 0;
	
	//go through each string in argv.
	//I skip argv[0] becuase that is the path of the file.
	for(i = 1; i < argc; i++) {
		printf("arg %d: %s.\n", i, argv[i]);
	}
	
	//let's make our own array of strings here.
	//char *another = "string here";  so char *another[] 
	//means an array of strings not chars!.
	
	char *states[] = {
			"California", "Texas",
			"Michigan", "Mississippi"};
	
	int numStates = 4;
	
	for(i = 0; i < numStates; i++) {
		printf("State %d: %s.\n", i, states[i]);
	}
	
	return 0;

}
