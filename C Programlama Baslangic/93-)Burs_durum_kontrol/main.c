#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Bir ��renci tan�mlay�n�z.Ortalamas� e�er 2.5 veya b�y�kse ekrana Burs almaya hak kazand�n�z ��kt�s�n� yazd�ran ,e�er 
k���kse maalesef bur almaya hak kazanamad�n�z ��kt�s� yazd�ran program yaz�n�z*/

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
