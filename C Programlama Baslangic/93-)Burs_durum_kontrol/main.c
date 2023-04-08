#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Bir öðrenci tanýmlayýnýz.Ortalamasý eðer 2.5 veya büyükse ekrana Burs almaya hak kazandýnýz çýktýsýný yazdýran ,eðer 
küçükse maalesef bur almaya hak kazanamadýnýz çýktýsý yazdýran program yazýnýz*/

struct ogrenci{
	char isim[15];
	char soyisim[15];
	float ortalama;
};
int main(int argc, char *argv[]) {
	struct ogrenci kisi;
	strcpy(kisi.isim,"Muhammed");
	strcpy(kisi.soyisim,"Celik");
	kisi.ortalama=2.43;
	
	if(kisi.ortalama>=2.5){
		printf("Tebrikler  %s burs almaya hak kazandin ",kisi.isim);
	}
	else{
		printf("Uzgunum. Burs almaya hak kazanamadiniz");
	}
	return 0;
}
