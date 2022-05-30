// Kaynak :  Hash Table Kodlaması (C ile) Veri Yapıları 24. Video
//           https://www.youtube.com/watch?v=bpmGANQ8N0A&ab_channel=BilgisayarKavramlari

//gcc hashtable.c -o hashtable.out
//./hashtable.out

#include <stdio.h>
typedef struct st{
	int k,v;
}veri;
veri a[27];

int h(int x){
	return x%27; //8*x + 5 mod 27;
}
//hash tablosuna veri koyan fonksiyon
int put (veri data){
	if(a[h(data.k)].k == -1){
		a[h(data.k)] = data;
		return 1;
	}
	else {
		int donusSayisi =0;
		int indis = h(data.k);
		while(a[indis].k != data.k && a[indis].k!=-1){
		//printf("%d %d %d \n",a[indis].k, data.k, indis);
			indis ++;
			if(indis>=27){
				if(donusSayisi>=1){
					printf("hashtable dolu");
					return -1;
				}
				indis = indis %27;
				donusSayisi++;
			}
		}
		
		a[indis].v= data.v;
		a[indis].k = data.k;
		
	}
	return 1;
}
void bastir(){
	for(int i = 0;i<27;i++){
		printf("[k:%d v:%d]-",a[i].k,a[i].v);
	}
	printf("\n");
}
int get(int k){
	if(a[h(k)].k == k){
		return a[h(k)].v;
	}
	else {
		int donusSayisi =0;
		int indis = h(k);
		while(a[indis].k != k && a[indis].k!=k){
		//printf("%d %d %d \n",a[indis].k, data.k, indis);
			indis ++;
			if(indis>=27){
				if(donusSayisi>=1){
					printf("hashtable'da kayit yok");
					return -1;
				}
				indis = indis %27;
				donusSayisi++;
			}
		}
		
		return a[indis].v;
		
	}
}

int main(){
	for(int i = 0;i<27;i++){
		a[i].k = -1;
	}
	veri data;
	for(int i = 0;i<30;i++){
	data.k=i;data.v=i*23;
	put(data);
	}
	data.k=1;data.v=66666;
	put(data);
	data.k=100;data.v=77777;
	put(data);
	data.k=28;data.v=99999;
	put(data);
	data.k=28;data.v=42342;
	put(data);

	printf("%d \n",get(10));
	printf("%d \n",get(1));
	printf("%d \n",get(28));
	printf("%d \n",get(100));
	printf("%d \n",get(3424));
	printf("%d \n",get(2));
	bastir();
}