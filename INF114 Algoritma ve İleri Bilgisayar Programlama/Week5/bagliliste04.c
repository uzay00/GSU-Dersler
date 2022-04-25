//gcc bagliliste04.c -o bagliliste04.out
//./bagliliste04.out

#include <stdio.h>
#include <stdlib.h>
//=============================//=============================
struct dugum{
	//ax^kuvvet
	int katsayi;
	int kuvvet;
	struct dugum* ileri;
};
typedef struct dugum* Dugum;
//==============
Dugum yeni_dugum(int a, int k){
	Dugum yeni = malloc(sizeof(Dugum));
	yeni->katsayi = a;
	yeni->kuvvet = k;
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
Liste ekle(Liste l, int a, int k){
	//basa ekleme yapar
	Dugum node = yeni_dugum(a,k);
	// bos liste
	if (l->son == NULL){
		l->son = node;
	}
	node->ileri = l->bas;
	l->bas = node;
	printf("a=%d k=%d eklendi \n",a,k);
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
		printf("\n\t%p - %d x^ %d\n", ix, ix->katsayi, ix->kuvvet);
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
  bag = ekle(bag, 1, 3); # 1 : katsayi, 3: kuvvet
  bag = ekle(bag, 1, 2);
  bag = ekle(bag, 1, 1);
  yazdir(bag);
  printf("\n elemansayisi(bag) = %d\n", elemansayisi(bag));
  printf("\n//=============================\n");
  bag = cikar(bag);
  yazdir(bag);
  printf("\n elemansayisi(bag) = %d\n", elemansayisi(bag));

  return 0;
}