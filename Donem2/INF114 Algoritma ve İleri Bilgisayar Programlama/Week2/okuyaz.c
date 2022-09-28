//gcc okuyaz.c -o okuyaz.out
//./okuyaz.out

#include <stdio.h>
#include <stdlib.h>

int main(){

  FILE *oku, *yaz;
  float k;

  if ((oku = fopen("girdi.txt", "r")) == NULL){
  	printf("Error: Dosya girdi.txt acilamadi");
  	exit(1);
  }
  if ((yaz = fopen("cikti.txt", "a+")) == NULL){
  	printf("Error: Dosya cikti.txt acilamadi");
  	exit(1);
  } 

  for (int i = 0; i< 10; i++){
  	fscanf(oku, "%f", &k);
  	fprintf(yaz, "%8.2f\n", (k - 1));
  }

  fclose(oku);
  fclose(yaz);

  return 0;
}