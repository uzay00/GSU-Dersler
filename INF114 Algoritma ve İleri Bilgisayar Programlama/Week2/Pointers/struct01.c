#include <stdio.h> 
#include <stdlib.h>
//--------------------------------//-----------// 
struct DUGUM{
	int veri;
	struct DUGUM* sonraki; 
};
//--------------------------------
struct DUGUM* yeniDugum(int v){ 
	struct DUGUM* pD;
	pD = malloc(sizeof(struct DUGUM)); 
	pD->sonraki = NULL;
	pD->veri = v;
	return pD;
}
//--------------------------------//-----------//
struct Liste{
	struct DUGUM* bas;
};
//--------------------------------
struct Liste* yeniListe(){
	struct Liste* pL;
	pL = malloc(sizeof(struct Liste)); pL->bas = NULL;
	return pL;
}
//--------------------------------
void listeBasinaEkle(struct Liste* pL, struct DUGUM* pD){ 
	pD->sonraki = pL->bas;
	pL->bas = pD;
}
//--------------------------------
void listeBasiniSil(struct Liste* pL){ 
	if(pL->bas != NULL)
		pL->bas = pL->bas->sonraki; 
}
//--------------------------------
void listele(struct Liste* pL){ 
	printf("\n\n");
	struct DUGUM* konum = pL->bas; 
	while(konum != NULL){
		printf("\t %d",konum ->veri);
		konum = konum ->sonraki; 
	}
}
//--------------------------------//-----------//

int main() {
	struct DUGUM* pD1 = yeniDugum(1); 
	struct DUGUM* pD2 = yeniDugum(3); 
	struct DUGUM* pD3 = yeniDugum(5); 
	struct DUGUM* pD4 = yeniDugum(7);
	struct Liste* pL = yeniListe(); 
	listeBasinaEkle(pL,pD1); 
	listeBasinaEkle(pL,pD2); 
	listeBasinaEkle(pL,pD3); 
	listeBasinaEkle(pL,pD4);
	listele(pL); 
	listeBasiniSil(pL);
	listele(pL); 
	listeBasinaEkle(pL,yeniDugum(9));
	listele(pL); 
	return 0;
}