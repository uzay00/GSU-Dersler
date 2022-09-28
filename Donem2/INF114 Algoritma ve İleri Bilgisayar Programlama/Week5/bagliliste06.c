//gcc bagliliste06.c -o bagliliste06.out
//./bagliliste06.out

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
	if (l->bas != NULL){
		Dugum ix = l->bas;
		printf("\n");
		while (ix != NULL){
			printf("\t%d", ix->data);
			ix = ix->ileri;
		}
		printf("\n");
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
//=============================
struct graph{
	Liste baglar[5];
};
typedef struct graph* Graph;
//=============================//=============================
int main(){
  Liste bag = malloc(sizeof(Liste));
  int degerler[3] = {16,8,4};
  for (int i =0; i<3; i++){
  	bag = ekle(bag, degerler[i]);
  }

  Liste bag2 = malloc(sizeof(Liste));
  bag2 = ekle(bag2, 15);
  bag2 = ekle(bag2, 10);

  Graph G = malloc(sizeof(Graph));
  G->baglar[0] = bag;
  G->baglar[1] = bag2;
  yazdir(G->baglar[0]);
  yazdir(G->baglar[1]);
  yazdir(G->baglar[2]);


  return 0;
}