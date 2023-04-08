#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci{
	char isim[15];
	int yas;
	float ortalama;
	char cinsiyet;
};

int main(int argc, char *argv[]) {
	struct ogrenci kisi;
	strcpy(kisi.isim,"Muhammed");
	kisi.yas=23;
	kisi.ortalama=2.86;
	kisi.cinsiyet='E';
	printf("Adi : %s\n",kisi.isim);
	printf("Yasi : %d\n",kisi.yas);
	printf("Ortalama : %.2f\n",kisi.ortalama);
	printf("Cinsiyet : %c\n",kisi.cinsiyet);
	return 0;
}
