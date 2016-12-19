#include <stdio.h>

typedef enum DIRECTION {
	NORTH = 1,
	EAST,
	SOUTH,
	WEST
} Direction;
// long version of typedef
// typedef enum DIRECTION Direction;

void print_direction(Direction x);

int main(int argc, char* argv[]) {
	Direction my_direction = SOUTH;
	my_direction++;
	print_direction(my_direction);
	print_direction(1);
	return 0;
}

void print_direction(Direction x) {
	// if (x == NORTH) {
	// 	printf("NORTH\n");
	// } else if (x == EAST) {
	// 	printf("EAST\n");
	// } else if (x == SOUTH) {
	// 	printf("SOUTH\n");
	// } else if (x == WEST) {
	// 	printf("WEST\n");
	// }

/* It's better to use switch statements when you have a finite number of
* possible values */
	switch (x) {
	case NORTH:
		printf("NORTH\n");
		break;
	case EAST:
		printf("EAST\n");
		break;
	case SOUTH:
		printf("SOUTH\n");
		break;
	case WEST:
		printf("WEST\n");
		break;
	default:
		printf("Invalid Direction.\n");
		break;
	}
}
