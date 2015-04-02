#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {

	//Defines a struct with 4 entries, a  char string and 3 ints.
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) {
	
	//Malloc returns a pointer to memory with a size of the size of the struct. 
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);
	
	//strdup returns a pointer to a new duplicate string from memory siezed with malloc.
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;
	//Returns the block of memory.
	return who;
}

void Person_destroy(struct Person *who) {
	
	assert(who != NULL);
	
	//free frees the memory allocated with strdup.
	free(who->name);
	//and here frees memory from malloc.
	free(who);	
}

void Person_print(struct Person *who) {
	
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[]) {
	
	//Create Frank and I as structs.
	struct Person *sam = Person_create(
			"Sam Scott-Hake", 23, 72, 150);
	
	struct Person *frank = Person_create(
			"Frank Underwood", 56, 70, 160);
	
	//Print their contents and memory location.
	printf("Sam is at memory location: %p.\n", sam);
	Person_print(sam);
	
	printf("Frank is at memory location: %p.\n", frank);
	Person_print(frank);
	
	//Make us both 20 years old and re-print.
	sam->age -= 3;
	sam->height -= 3;
	sam->weight -= 10;
	Person_print(sam);
	
	frank->age -= 36;
	frank->height += 5;
	frank->weight -= 25;
	Person_print(frank);
	
	//Destroy both structs to empty memory.
	Person_destroy(sam);
	Person_destroy(frank);
	
	return 0;
	
}

	
	
