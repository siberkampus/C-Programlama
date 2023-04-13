#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen N elemanlý bir dizide her bir elemandan kaç tane olduðunu bulan programý yazýnýz */

int main(int argc, char *argv[]) {
	int dizi[100],adet,i,j;
	printf("Kac adet sayi gireceksiniz :"),scanf("%d",&adet);
	for(i=0;i<adet;i++){
		printf("Sayiyi giriniz : ");
		scanf("%d",&dizi[i]);
	}
	//Ýlk olarak diziyi sýralýyoruz. Farklý algoritmalar da kullanýlabilir.
	for(i=1;i<adet;i++){
		for(j=0;j<i;j++){
			if(dizi[i]<dizi[j]){
				int tmp = dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=tmp;
			}
		}
	}
	int sayac=1;
	for(i=0;i<adet;i++){
		if(dizi[i]==dizi[i+1]){
			sayac++;
		}
		else{
			printf("%d den %d adet vardir.\n",dizi[i],sayac);
			sayac=1;
		}
	}
	for(i=0;i<adet;i++){
		printf("%d  ",dizi[i]);
	}
	return 0;
}
