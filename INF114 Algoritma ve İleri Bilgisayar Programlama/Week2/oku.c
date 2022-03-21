//gcc oku.c -o oku.out
//./oku.out

#include <stdio.h>

int main(){

  FILE *dosya = fopen("girdi.txt", "r");
  

  while(! feof(dosya) ){
    putchar(fgetc(dosya));
  }

  fclose(dosya);

  return 0;
}