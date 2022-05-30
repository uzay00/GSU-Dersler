//gcc hizli-siralama2.c -o hizli-siralama2.out
//./hizli-siralama2.out

#include <stdio.h>
#include <stdlib.h>

void bas(int A[], int N){
  for (int i = 0; i < N ; i++){
    printf(" %d", A[i]);
  }
  printf("\n");
}

int partition(int number[25],int first,int last){
  int i, j, pivot, temp;

  pivot=first;
  i=first;
  j=last;

  while(i<j){
     while(number[i]<=number[pivot]&&i<last)
        i++;
     while(number[j]>number[pivot])
        j--;
     if(i<j){
        temp=number[i];
        number[i]=number[j];
        number[j]=temp;
     }
  }

  temp=number[pivot];
  number[pivot]=number[j];
  number[j]=temp;

  return j;
}

void quicksort(int number[25],int first,int last){
   int pivot;

   if(first<last){
      pivot= partition(number,first,last);
      quicksort(number,first,pivot-1);
      quicksort(number,pivot+1,last);
   }
}

void shuffle(int number[25], int n) {
  int i, temp, r;
  for(i=0;i<n-1;i++){
    r = rand() % (n-1-i);
    printf("%d\n", r);
    temp=number[i];
    number[i]=number[r];
    number[r]=temp;
  }
}

int main(){
   int i, count, number[25];

   printf("How many elements are u going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);
   printf("\n\n");
   shuffle(number, count);
   for(i=0;i<count;i++)
        printf(" %d",number[i]);
   printf("\n\n");

   quicksort(number,0,count-1);

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   printf("\n\n"); 

   return 0;
}