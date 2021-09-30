#include <stdio.h>

int main() {
	// 1 - make variables
	char myChar = 'a';
	int myInt = 1234;
	long myLong = 1234567890;

	// 2 - print addresse in hex and bin
	printf("Address of myChar: %p\n", &myChar);
	printf("Address of myChar: %lu\n", &myChar);
	printf("Address of myInt: %p\n", &myInt);
	printf("Address of myInt: %lu\n", &myInt);
	printf("Address of myLong: %p\n", &myLong);
	printf("Address of myLong: %lu\n", &myLong);

	printf("\n");

	// 3 - pointers for the variables
	char *ptrChar = &myChar;
	int *ptrInt = &myInt;
	long *ptrLong = &myLong;

	// 4 - print values of pointers
	printf("Value of pointer of myChar: %p\n", ptrChar);
	printf("Value of pointer of myInt: %p\n", ptrInt);
	printf("Value of pointer of myLong: %p\n", ptrLong);

	printf("\n");

	// 5 - use pointers to modify variables & print new values
	*ptrChar = 'b';
	*ptrInt = 4321;
	*ptrLong = 987654321;

	printf("Value of myChar: %c\n", myChar);
	printf("Value of myInt: %d\n", myInt);
	printf("Value of myLong: %ld\n", myLong);

	printf("\n");

	// 6 - unsigned int and two pointers to it
	unsigned int myUnsignedInt = 123456789;
	int *ptrUnsignedIntInt = &myUnsignedInt;
	char *ptrUnsignedIntChar = &myUnsignedInt;

	// 7 - print values of each pointer and the values that it points to
	printf("ptrUnsignedIntInt: %p points to: %d\n", ptrUnsignedIntInt, *ptrUnsignedIntInt);
	printf("ptrUnsignedIntChar: %p points to: %d\n", ptrUnsignedIntChar, *ptrUnsignedIntChar);  //maybe works

	printf("\n");

	// 8 - print the unsigned int in bin and hex
	printf("Unsigned Int (hex): %x\n", myUnsignedInt);
	printf("Unsigned Int (bin): %u\n", myUnsignedInt);

	printf("\n");

	// 9 - print each byte of the unsigned int
	int i;
	for (i = 0; i < 4; i++) {
		printf("Byte %d of the unsigned int (bin): %hhu\n", i, *(ptrUnsignedIntChar + i));
		printf("Byte %d of the unsigned int (hex): %hhx\n\n", i, *(ptrUnsignedIntChar + i));
	}

	printf("\n");

	// 10 - increment each byte of the unsigned int
	for (i = 0; i < 4; i++) {
		printf("Modifying byte %d of the unsigned int...\n", i);
		
		*(ptrUnsignedIntChar + i) += 1;

		printf("New byte %d of the unsigned int (bin): %hhu\n", i, *(ptrUnsignedIntChar + i));
		printf("New byte %d of the unsigned int (hex): %hhx\n\n", i, *(ptrUnsignedIntChar + i));
	}

	printf("\n");

	//11 - 10, but with 16
	for (i = 0; i < 4; i++) {
		printf("Modifying byte %d of the unsigned int...\n", i);
		
		*(ptrUnsignedIntChar + i) += 16;

		printf("New byte %d of the unsigned int (bin): %hhu\n", i, *(ptrUnsignedIntChar + i));
		printf("New byte %d of the unsigned int (hex): %hhx\n\n", i, *(ptrUnsignedIntChar + i));
	}

	return 0;
}

