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
Liste cikar(Liste l){
	//sondan cikarma yapar
	// bos liste
	if (l->son == NULL){
		return l;
	}
	Dugum ix = l->bas;
	while (ix->ileri != l->son){
		ix = ix->ileri;
	}
	l->son = ix;
	ix->ileri = NULL;
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

  bag = ekle(bag, 16);
  bag = ekle(bag, 8);
  bag = ekle(bag, 4);
  yazdir(bag);
  printf("\n//=============================\n");
  bag = cikar(bag);
  yazdir(bag);

  return 0;
}