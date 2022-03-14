//gcc referans.c -o referans.out
//./referans.out

#include <stdio.h>

void artibir(int x){
	// Pass by Value
	x = x +1;
}

void eksibir(int *x){
	// Pass by Reference 
	*x = *x - 1;
}

int main(){

  int a = 0;
  printf("%d\n", a);
  artibir(a);
  printf("Pass by Value sonrasi %d\n", a);
  eksibir(&a);
  eksibir(&a);
  eksibir(&a);
  printf("(3 kez) Pass by Reference sonrasi %d\n", a);
  return 0;
}