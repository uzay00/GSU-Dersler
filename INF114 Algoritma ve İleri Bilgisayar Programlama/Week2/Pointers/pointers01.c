//gcc pointers01.c -o pointers01.out
//./pointers01.out
#include <stdio.h>

int main(){
	int a = 7;
	int* ptr = &a;
	printf("\n\tValue %d is stored in address %p \n\n", *ptr, ptr);
	return 0;
}