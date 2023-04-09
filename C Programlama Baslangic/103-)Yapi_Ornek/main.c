#include <stdio.h>
#include <stdlib.h>

/* 10 kiþilik sýnýf bilgilerini fonksiyon kullanarak okuyalým ve en yüksek ortalamalý öðrenciyi bulup ismini ve not ortalamasýný yazdýralým */

struct ogrenci{
	char isim[15];
	int not_1;
	int not_2;
	double ortalama;
};
double ortalama(int a,int b){
	double ortalama= (double)a+b;
	return ortalama/2.0;	
	
}


void okuma(struct ogrenci kisi[]){
	int i;
	for(i=0;i<10;i++){
	
		printf("%d. ogrencinin adi: ",i+1);
		scanf("%s",kisi[i].isim);
		printf("  %d. ogrencinin 1. notu:",i+1);
		scanf("%d",&kisi[i].not_1);
		printf("  %d. ogrencinin 2. notu:",i+1);
		scanf("%d",&kisi[i].not_2);
		kisi[i].ortalama=ortalama(kisi[i].not_1,kisi[i].not_2);
	}
}
void max_ort(struct ogrenci kisi[]){
	double maks=0.0;
	int i,ogrenci;
	for(i=0;i<10;i++){
		if(kisi[i].ortalama>maks){
			maks=kisi[i].ortalama;
			ogrenci=i;
		}
	}
	printf("En yuksek ortalama %s ogrencisine %.2lf ort ile ait",kisi[ogrenci].isim,maks);
}



int main(int argc, char *argv[]) {
	struct ogrenci sinif[10];
	okuma(sinif);
	max_ort(sinif);
	return 0;
}
