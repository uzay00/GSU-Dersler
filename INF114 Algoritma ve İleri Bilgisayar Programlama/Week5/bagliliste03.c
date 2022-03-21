//gcc bagliliste03.c -o bagliliste03.out
//./bagliliste03.out

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
//==============
int uzunluk(Dugum node){
	if (node == NULL){
		return 0;
	}
	else{
		return 1  + uzunluk(node->ileri);
	}

}
int elemansayisi(Liste l){
	return uzunluk(l->bas);
}
//=============================//=============================
int main(){
  Liste bag = malloc(sizeof(Liste));

  bag = ekle(bag, 16);
  bag = ekle(bag, 8);
  bag = ekle(bag, 4);
  yazdir(bag);
  printf("\n elemansayisi(bag) = %d\n", elemansayisi(bag));
  printf("\n//=============================\n");
  bag = cikar(bag);
  yazdir(bag);
  printf("\n elemansayisi(bag) = %d\n", elemansayisi(bag));

  return 0;
}