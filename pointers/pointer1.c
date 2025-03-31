#include <stdio.h>




int main(){

	int a = 2;   // Normal int
	int* b;      // Declare int pointer

	b = &a;      // b points to address of a

	printf("B: %d\n", *b);  // print value of the address b is pointing to
	printf("A: %d\n", a);   // print value of a
	printf("BMEMORY %p\n", b);   // print address that b is pointing to
	printf("AMEMORY %p\n", &a);  // print address of a

	return 0;
}
