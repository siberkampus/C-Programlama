#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci{
	char isim[15];
	int yas;
	float ortalama;
	char cinsiyet;
};

void deger_atama(struct ogrenci *kisi){
	strcpy(kisi->isim,"Muhammed"); // kisi->isim   *kisi.isim ile ayný þeyi ifade etmektedir. Bu gösterim ile daha kolay ifade edebiliriz.
	kisi->yas=19;
	kisi->ortalama=3.21;
	kisi->cinsiyet='E';
	
}

int main(int argc, char *argv[]) {
	struct ogrenci kisi;
	deger_atama(&kisi);
	printf("Ogrencinin adi:%s \nOgrencinin yasi: %d \nOgrencinin ortalamasi:%.2lf \nOgrencinin cinsiyeti:%c",kisi.isim, kisi.yas, kisi.ortalama, kisi.cinsiyet);
	return 0;
}
