//gcc pointers01.c -o pointers01.out
//./pointers01.out
#include <stdio.h>

int main(){
	int arr[5] = {7,5,6,3,2};

	int* ptr = arr;

	for (int i = 0; i <5; i++){
		printf("\n\tValue %d is stored", *(ptr + i));
		printf("in address %p ", (ptr + i));
	}
	return 0;
}