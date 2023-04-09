#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci{  //Ogrenci adýnda bir  veri türü tanýmladýk
	char isim[15];
	int yas;
	float ortalama;
	char cinsiyet;
};

struct ogrenci fonksiyon(void); //Yapý deðeri döndüren bir fonksiyon tanýmladýk

int main(int argc, char *argv[]) {
	struct ogrenci kisi;
	kisi=fonksiyon(); //Fonksiyonun döndürdüðü deðeri ogrenci veri türündeki kiþi deðiþkenine yazdýk
	printf("%s %d yasindadir",kisi.isim,kisi.yas);
	return 0;
}

struct ogrenci fonksiyon(void){
	struct ogrenci a;
	strcpy(a.isim,"Muhammed");
	a.yas=20;
	a.ortalama=2.67;
	a.cinsiyet='E';
	return a;  // ogrenci veri türündeki a deðiþkenini döndürdük
}
