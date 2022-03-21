//gcc bagliliste01.c -o bagliliste01.out
//./bagliliste01.out

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
//==============
Liste ekle(Liste l, int deger){
	//basa ekleme yapar
	Dugum node = yeni_dugum(deger);
	// bos liste
	if (l->son == NULL){
		l->son = node;
	}
	node->ileri = l->bas;
	l->bas = node;
	return l;
}
//==============
void yazdir(Liste l){
	Dugum ix = l->bas;
	while (ix != NULL){
		printf("\n\t%p - %d\n", ix, ix->data);
		ix = ix->ileri;
	}
}
//=============================//=============================
int main(){
  Liste bag = malloc(sizeof(Liste));

  for(int i = 1; i < 5; i++)
  	bag = ekle(bag, i);
  yazdir(bag);

  return 0;
}