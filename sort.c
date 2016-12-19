#include <stdio.h>

#define LIST_SIZE 9

void print_array(int a[], int size);

int main(int argc, char* argv[]){
	int list[LIST_SIZE] = {1, 9, 3, 14, 5, 27, 99, 2, 0};

	printf("Unsorted List:\n");
	/* Print the unsorted list. */
	print_array(list, LIST_SIZE);

	/* Sort the list with INSERTION SORT */
	for (int i = 0; i < LIST_SIZE - 1; i++) {
		for (int j = i + 1; j < LIST_SIZE; j++) {
			if (list[j] < list[i]) { // swap the two numbers
				int tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	}

	/* Print the sorted list. */
	printf("\nSorted List:\n");
	print_array(list, LIST_SIZE);

	return 0;
}

void print_array(int a[], int size) {
	// Print out the list of numbers
	printf("[");
	for (int i = 0; i < size - 1; i++) {
		printf("%d, ", a[i]);
	}
	printf("%d]", a[size - 1]); // in order to fix fence post problem
}
