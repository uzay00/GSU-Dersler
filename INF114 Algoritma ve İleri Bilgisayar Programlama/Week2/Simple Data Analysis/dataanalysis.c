// gcc dataanalysis.c -o dataanalysis.out
// ./dataanalysis.out
#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main(){
	int A[N] = {0};

	A[0]  =  1 + rand()%6;
	for (int i = 0; i < N; i++){
		printf("\t%d", A[i]);
	}

	return 0;
}