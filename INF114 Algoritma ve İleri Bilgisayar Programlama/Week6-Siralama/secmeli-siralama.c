//gcc secmeli-siralama.c -o secmeli-siralama.out
//./secmeli-siralama.out

#include <stdio.h>

void swap(int *x, int *y){
	// Pass by Reference 
  int temp = *y;
	*y = *x;
  *x = temp;
}

int* findSmallest(int A[], int i, int N){
  // findSmallest after ındex i in array A
  int s_ix = i;
  for (int j =i+1; j < N; j++){
    if (A[s_ix] > A[j]){
      s_ix = j;
    }
  }
  return &A[s_ix];
}

void selectionSort(int A[], int N){
  for (int i = 0; i < N ; i++)
    swap(&A[i], findSmallest(A, i, N));
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
    s = findSmallest(A, i, 5);
    swap(&A[i], s);
    bas(A, 5);
  }
  bas(A, 5);

  printf("\n\t\t-----\n");
  int B[5]  = {4,3,2,5,1};
  selectionSort(B,5);
  bas(B, 5);
  return 0;
}