//gcc eklemeli-siralama.c -o eklemeli-siralama.out
//./eklemeli-siralama.out

#include <stdio.h>

void swap(int *x, int *y){
	// Pass by Reference 
  int temp = *y;
	*y = *x;
  *x = temp;
}

void compareToLeft(int A[], int i, int N){
  // findSmallest after ındex i in array A
  for (int j =i; j > 0; j--)
    if (A[j] < A[j-1])
      swap(&A[j], &A[j-1]);
    else
      break;
}

void insertionSort(int A[], int N){
  for (int i = 1; i < N ; i++)
    compareToLeft(A, i, N);
}

void bas(int A[], int N){
  for (int i = 0; i < N ; i++){
    printf("\t %d", A[i]);
  }
  printf("\n");
}



//======================
int main(){

  int A[5]  = {3,7,2,5, 1};
  int* s ;


  bas(A, 5);
  for (int i = 0; i < 5 ; i++){
    compareToLeft(A, i, 5);
    bas(A, 5);
  }
  bas(A, 5);

  printf("\n\t\t-----\n");
  int B[5]  = {4,3,2,5,1};
  insertionSort(B,5);
  bas(B, 5);
  return 0;
}