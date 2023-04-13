#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen n elemanlý A dizisinin en buyuk ve en kucuk elemanlarýný ve bu elemanlarýn kaçýncý sýrada olduklarýný bulan programý yazýnýz */
#define		SIZE 	15
int main(int argc, char *argv[]) {
	int dizi[SIZE];
	int n,i;
	printf("Kac elemanli dizi gireceksiniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Elemani giriniz :");
		scanf("%d",&dizi[i]);
	}
	int buyuk=dizi[0],kucuk=dizi[0],index_k,index_b;
	for(i=0;i<n;i++){
		if(buyuk<dizi[i]){
			buyuk=dizi[i];
			index_b=i;
		}
		if(kucuk>dizi[i]){
			kucuk=dizi[i];
			index_k=i;
		}
	}
	printf("En buyuk sayi = %d ve %d siradadir\n",buyuk,index_b+1);
	printf("En kucuk sayi = %d ve %d siradadir\n",kucuk,index_k+1);
	return 0;
}
