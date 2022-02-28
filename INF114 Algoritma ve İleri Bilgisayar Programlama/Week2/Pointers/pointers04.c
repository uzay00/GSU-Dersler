//gcc pointers01.c -o pointers01.out
//./pointers01.out
#include <stdio.h>


int main(){
	int arr[4][3] = {{7,1,5}, {6,1,3},{2,1,0}, {0,1,0}};

	int* ptr = arr[0];

	printf("\n\tValue %p is stored", &arr);
	printf("\n\tValue %p is stored", ptr);
	printf("\nsizeof(int) %lu", sizeof(int));

	for (int i = 0 ; i < 4; i++){
		for (int j = 0 ; j < 3; j++){
			printf("\n\t %d - %d is at %p", i, arr[i][j], &arr[i][j]);
		}
	}

	printf("\n----\n");
	for (int i = 0 ; i < 4; i++){
		printf("\n\t %d - %d is at %p", i, arr[i][1], &arr[i][1]);
	}
	return 0;

}