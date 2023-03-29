#include <stdio.h>
#define LENGTH 6

int main() {
	int course_number[LENGTH] = {2, 3, 4, 1, 2, 4};
	for(int i = 0; i < LENGTH; i++) {
		printf("%d", course_number[i]);
	}
	printf("\n");
	return 0;
}
