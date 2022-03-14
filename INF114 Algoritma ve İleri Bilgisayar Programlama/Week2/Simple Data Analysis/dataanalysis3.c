// gcc dataanalysis3.c -o dataanalysis3.out
// ./dataanalysis3.out
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


float meanrec(int A[], int n){
	if (n == 1){
		return (float) A[0];
	}
	else {
		return (meanrec(A, n-1) * (n-1) + A[n-1])/n;
	}
}

int mod(int fre[], int n){
	int ix = 0;
	for (int i = 1; i < n; i++){
		if (fre[i] > fre[ix]){
			ix = i;
		}
	}
	return 1 + ix;
}


void frequency(int A[]){
	int fre[6] = {0,0,0,0,0,0};

	for (int i = 0; i < N; i++){
		fre[A[i] - 1 ] = fre[A[i]-1] + 1;
	}
	printf("=====\n\n");
	for (int i = 0; i < 6; i++)
		printf("\n fre(%d): %d", (i + 1), fre[i]);
	printf("\n=====\n");

	printf("\n\tMod: %d\n", mod(fre, 6));
	
}

int main(){
	int A[N] = {0};
	for (int i = 0; i < N; i++){
		A[i] = zarat();
		printf("\n%d",A[i]);
	}
	printf("\n\t Mean: %.2f\n", mean(A));
	printf("\n\t Meanrec: %.2f\n", meanrec(A, N));


	frequency(A);

	return 0;
}