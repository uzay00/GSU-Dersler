//gcc bagliliste.c -o bagliliste.out
//./bagliliste.out

#include <stdio.h>
#include <stdlib.h>
//=============================//=============================
struct dugum{
	int data;
	struct dugum* ileri;
};
typedef struct dugum* Dugum;
//==============
Dugum yeni_dugum(int deger){
	Dugum yeni = malloc(sizeof(Dugum));
	yeni->data = deger;
	yeni->ileri = NULL;
	return yeni;
}
//=============================
struct liste{
	Dugum bas;
	Dugum son;
};
typedef struct liste* Liste;
//=============================//=============================
int main(){
  Liste bag = malloc(sizeof(Liste));
  Dugum node = yeni_dugum(1);

  bag->bas = node;
  bag->son = node;

  printf("%p - %p -%p - %d - \n", bag->bas, bag->son, node, node->data );

  return 0;
}