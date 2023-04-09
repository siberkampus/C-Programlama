#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct tarih{
	int yil;
	char ay[15];
	int gun;
};

struct ogrenci{
	char adi[20];
	char soyadi[20];
	float ortalama;
	struct tarih dogum_tarihi;
};


int main(int argc, char *argv[]) {
	struct ogrenci kisi={"Muhammed","Celik",3.13,{1999,"Agustos",16}};

	printf("%s %s %d %s %d tarihinde dogmustur",kisi.adi , kisi.soyadi,  kisi.dogum_tarihi.gun,  kisi.dogum_tarihi.ay,  kisi.dogum_tarihi.yil);
	return 0;
}
