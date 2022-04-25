//gcc okuyaz2.c -o okuyaz2.out
//./okuyaz2.out

#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){

  FILE *oku;
  float *K;

  if ((oku = fopen("girdi.txt", "r")) == NULL){
  	printf("Error: Dosya girdi.txt acilamadi");
  	exit(1);
  }

  K = (float *) malloc(sizeof(float) * N);
  for (int i = 0; i< N; i++){
  	fscanf(oku, "%f", (K+i));
  }

  for (int i = 0; i< N; i++){
    printf("%f\t", *(K+i));
  }
  printf("\n");

  fclose(oku);

  return 0;
}