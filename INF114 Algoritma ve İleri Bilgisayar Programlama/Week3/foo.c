//gcc foo.c -o foo.out
//./foo.out

#include <stdio.h>

int foo(int N){
	if (N == 1){
		printf("\n%d", N);
		return 1;
	}
	else{
		printf("\n%d", N);
		return 1 + foo(N/2);
	}
}

int foo2(int N){
	if (N == 1){
		printf("\n%d", N);
		return 1;
	}
	else{
		printf("\n%d", N);
		return 1 + 2 * foo2(N/2);
	}
}

int foo3(int N){
	if (N == 1){
		printf("\n%d", N);
		return 1;
	}
	else{
		printf("\n%d", N);
		return 1 + foo3(N/2) + foo3(N/2);
	}
}

int main(){

  printf("\n========= 1 + foo(N/2)\n");
  foo(8);
  printf("\n========= 1 + 2 * foo2(N/2)\n");
  foo2(8);
  printf("\n========= 1 + foo3(N/2) + foo3(N/2)\n");
  foo3(8);
  printf("\n=========\n");
  return 0;
}