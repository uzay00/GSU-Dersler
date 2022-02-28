// gcc dataanalysis2.c -o dataanalysis2.out
// ./dataanalysis2.out
#include <stdio.h>
#include <stdlib.h>
#define N 10

int zarat(){
	return 1 + rand()%6;
}

float mean(int A[]){
	float sum = 0.0;
	for (int i = 0; i < N; i++)
		sum = sum + A[i];
	return sum/N;
}

void frequency(int A[]){
	int fre[6] = {0,0,0,0,0,0};

	for (int i = 0; i < N; i++){
		fre[A[i] - 1 ] = fre[A[i]-1] + 1;
	}
	printf("=====\n\n");
	for (int i = 0; i < 6; i++)
		printf("\n fre(%d): %d", (i + 1), fre[i]);
	
}

int main(){
	int A[N] = {0};
	for (int i = 0; i < N; i++){
		A[i] = zarat();
		printf("\n%d",A[i]);
	}
	printf("\n\t%.2f\n", mean(A));
	
	frequency(A);

	return 0;
}