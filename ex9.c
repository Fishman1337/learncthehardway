#include <stdio.h>

int main(int argc, char *argv[]) {

	int numbers[4] = {0};
	char name[4] = {'a'};
	
	//Print out the raw array entries.
	printf("numbers: %d, %d, %d, %d.\n",
			numbers[0], numbers[1], 
			numbers[2], numbers[3]);
			
	printf("name: %c, %c, %c, %c.\n",
			name[0], name[1], name[2], name[3]);
	
	printf("name: %s.\n", name);
	
	//Assign numbers to numbers array.
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	
	//Assign letters to name array.
	name[0] = 'S';
	name[1] = 'a';
	name[2] = 'm';
	name[3] = '\0';
	
	//print them out initialised.
	printf("numbers: %d %d %d %d.\n",
			numbers[0], numbers[1],
			numbers[2], numbers[3]);
			
	printf("name letters: %c %c %c %c.\n",
			name[0], name[1], name[2], name[3]);
	
	//print name as string.
	printf("name: %s.\n", name);
	
	//another way to assign letters.
	char *another = "Sam";
	
	printf("another: %s.\n", another);
	
	printf("another letters: %c %c %c %c.\n",
			another[0], another[1],
			another[2], another[3]);
	
	return 0;

}

