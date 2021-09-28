#include <stdio.h>

int main() {
	char myChar = 'a';
	int myInt = 1234;
	long myLong = 1234567890;

	printf("myChar: %p\n", &myChar);
	printf("myChar: %lu\n", &myChar);
	printf("myInt: %p\n", myInt);
	printf("myInt: %lu\n", myInt);
	printf("myLong: %p\n", myLong);
	printf("myLong: %lu\n", myLong);

	return 0;
}

