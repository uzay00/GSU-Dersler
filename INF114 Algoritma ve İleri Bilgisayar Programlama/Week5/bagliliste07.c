//gcc bagliliste07.c -o bagliliste07.out
//./bagliliste07.out

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
//==============
Liste yeni_liste(int degerler[], int N){
	Liste bag = malloc(sizeof(Liste));
	for (int i =0; i<N; i++){
		bag = ekle(bag, degerler[i]);
	}
	return bag;
}
//=============================
struct graph{
	Liste baglar[5];
};
typedef struct graph* Graph;
//=============================//=============================
int main(){
  int a0[3] = {16,8,4};
  int a1[2] = {15,5}; 
  int a2[3] = {9,8,7};

  Graph G = malloc(sizeof(Graph));
  Liste bag = malloc(sizeof(Liste));
  bag = yeni_liste(a0, 3);
  G->baglar[0] = bag;
  
  G->baglar[1] = yeni_liste(a1, 2);
  G->baglar[2] = yeni_liste(a2, 3);

  yazdir(G->baglar[0]);
  yazdir(G->baglar[1]);
  yazdir(G->baglar[2]);


  return 0;
}