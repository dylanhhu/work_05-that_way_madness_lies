#include <stdio.h>

int main() {
	// 1
	char myChar = 'a';
	int myInt = 1234;
	long myLong = 1234567890;

	// 2
	printf("Address of myChar: %p\n", &myChar);
	printf("Address of myChar: %lu\n", &myChar);
	printf("Address of myInt: %p\n", &myInt);
	printf("Address of myInt: %lu\n", &myInt);
	printf("Address of myLong: %p\n", &myLong);
	printf("Address of myLong: %lu\n", &myLong);

	printf("\n");

	// 3
	char *ptrChar = &myChar;
	int *ptrInt = &myInt;
	long *ptrLong = &myLong;

	// 4
	printf("Value of pointer of myChar: %p\n", ptrChar);
	printf("Value of pointer of myInt: %p\n", ptrInt);
	printf("Value of pointer of myLong: %p\n", ptrLong);

	printf("\n");

	// 5
	*ptrChar = 'b';
	*ptrInt = 4321;
	*ptrLong = 987654321;

	printf("Value of myChar: %c\n", myChar);
	printf("Value of myInt: %d\n", myInt);
	printf("Value of myLong: %ld\n", myLong);

	printf("\n");

	// 6
	unsigned int myUnsignedInt = 111111;
	int *ptrUnsignedIntInt = &myUnsignedInt;
	char *ptrUnsignedIntChar = &myUnsignedInt;

	// 7
	printf("ptrUnsignedIntInt: %p points to: %d\n", ptrUnsignedIntInt, *ptrUnsignedIntInt);
	printf("ptrUnsignedIntChar: %p points to: %c\n", ptrUnsignedIntChar, *ptrUnsignedIntChar);  //not working

	printf("\n");

	// 8
	printf("Unsigned Int: %x\n", myUnsignedInt);
	printf("Unsigned Int: %u\n", myUnsignedInt);

	return 0;
}

