//gcc birlestirmeli-siralama.c -o birlestirmeli-siralama.out
//./birlestirmeli-siralama.out

#include <stdio.h>
void bas(int A[], int N){
  for (int i = 0; i < N ; i++){
    printf(" %d", A[i]);
  }
  printf("\n");
}


void merge(int A[], int C[], int low, int mid, int high){
  // Copy
  for (int k = low; k <= high; k++)
    C[k] = A[k];
  //bas(C, 6);
  //printf("\n\t\t========\n");

  int i = low;
  int j = mid +1;
  for (int k = low; k <= high; k++){
    if (i > mid) 
      A[k] = C[j++];
    else if (j > high) 
      A[k] = C[i++];
    else if (C[j] < C[i])
      A[k] = C[j++];
    else 
      A[k] = C[i++];
    bas(A, 6);
  }
}

void sort(int A[], int C[], int low, int high){
  if (high <= low) return;
  int mid = low + (high - low)/2;
  sort(A, C, low, mid);
  sort(A, C, mid+1, high);
  merge(A, C, low, mid, high);
} 


void mergesort(int A[], int N){
  int C[N];
  sort(A, C, 0, N-1);
}






//======================
int main(){

  int A[6]  = {2, 3,7,1, 5, 6};
  int C[6];

  bas(A, 6);
  printf("\n\t\t========\n");
  merge(A, C, 0, 2, 5);
  //bas(A, 6);

  //int A1[7]  = {9,8,7,6,5,4,3};
  //int C1[7];
  //bas(A1, 7);
  //sort(A1, C1, 0, 6);
  //bas(A1, 7);

  //printf("\n\t\t========\n");
  //int A2[8]  = {5,8,7,6,5,5,5,5};
  //bas(A2, 8);
  //mergesort(A2, 8);
  //bas(A2, 8);
  

  return 0;
}