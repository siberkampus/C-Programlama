#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci{  //Ogrenci ad�nda bir  veri t�r� tan�mlad�k
	char isim[15];
	int yas;
	float ortalama;
	char cinsiyet;
};

struct ogrenci fonksiyon(void); //Yap� de�eri d�nd�ren bir fonksiyon tan�mlad�k

int main(int argc, char *argv[]) {
	struct ogrenci kisi;
	kisi=fonksiyon(); //Fonksiyonun d�nd�rd��� de�eri ogrenci veri t�r�ndeki ki�i de�i�kenine yazd�k
	printf("%s %d yasindadir",kisi.isim,kisi.yas);
	return 0;
}

struct ogrenci fonksiyon(void){
	struct ogrenci a;
	strcpy(a.isim,"Muhammed");
	a.yas=20;
	a.ortalama=2.67;
	a.cinsiyet='E';
	return a;  // ogrenci veri t�r�ndeki a de�i�kenini d�nd�rd�k
}
