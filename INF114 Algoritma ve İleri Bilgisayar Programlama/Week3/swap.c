//gcc swap.c -o swap.out
//./swap.out

#include <stdio.h>

void swap(int *x, int *y){
	// Pass by Reference 
  printf("\tx:%d - y:%d\n", *x, *y);
  int temp = *y;
	*y = *x;
  printf("\tx:%d - y:%d\n", *x, *y);
  *x = temp;
  printf("\tx:%d - y:%d\n", *x, *y);
}

int findSmallest(int A[], i, N){
  int s_ix = i;
  for (int j =i+1; j < N; j++){
    if (A[s_ix] > A[j]){
      s_ix = j;
    }
  }
  return s_ix;
}

int main(){

  int a = 5;
  int b = 7;
  printf("a:%d - b:%d\n", a, b);
  swap(&a, &b);
  printf("Pass by Reference-Swap sonrasi\n");
  printf("a:%d - b:%d\n", a, b);
  return 0;
}