// gcc dataanalysis1.c -o dataanalysis1.out
// ./dataanalysis1.out
#include <stdio.h>
#include <stdlib.h>
#define N 1000

int zarat(){
	return 1 + rand()%6;
}

float mean(int A[]){
	float sum = 0.0;
	for (int i = 0; i < N; i++)
		sum = sum + A[i];
	return sum/N;
}

int main(){
	int A[N] = {0};
	for (int i = 0; i < N; i++)
		A[i] = zarat();
	printf("\n\t%.2f\n", mean(A));
	
	return 0;
}