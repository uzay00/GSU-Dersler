//gcc pointers01.c -o pointers01.out
//./pointers01.out
#include <stdio.h>

int main(){
	int arr[5] = {7,5,6,3,2};

	int* ptr1 = &arr[0];
	int* ptr2 = arr;

	printf("\n\tValue %d is stored in address %p ", *ptr1, ptr1);
	printf("\n\tValue %d is stored in address %p \n\n", *ptr2, ptr2);

	return 0;
}