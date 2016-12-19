#include <stdio.h>

#define LIST_SIZE 8

int main(int argc, char* argv[]){
	int list[LIST_SIZE] = {1, 9, 3, 14, 5, 27, 99, 2};

	// Print out the list of numbers
	printf("[");
	for (int i = 0; i < LIST_SIZE - 1; i++) {
		printf("%d, ", list[i]);
	}
	printf("%d]", list[LIST_SIZE - 1]); // in order to fix fence post problem

	return 0;
}
