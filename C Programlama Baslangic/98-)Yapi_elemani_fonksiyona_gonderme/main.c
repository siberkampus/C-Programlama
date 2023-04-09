#include <stdio.h>
#include <stdlib.h>
/* Kullan�c�n�n 4 l�k sistemdeki notunu 100'l�k sisteme �eviren bir program yaz�n�z. Bunun i�in ogrenci struct yapisi olu�turunuz. Ogrenci yapisinda isim,yas,cinsiyet,ve ortalama 
	de�i�kenleri bulunmald�r. cevir() adl� fonksiyon ortamay� 100 l�k sisteme �evirip main() fonksiyonuna d�nd�rmelidir. Main fonskiyonunda ��renci ad� ve 100l�k sistemdeki 
	ortalamas� yazd�r�lmaktad�r
	100'l�k sisteme �evirirken basit oran orant� form�l� kullan�lmald�r
	4 = 100
	3 = 75
	2 = 50
	gibi
 */
struct ogrenci{
	char isim[15];
	int yas;
	float ortalama;
	char cinsiyet;
};

double fonksiyon(double x){
	double ortalama_yuzluk = (100*x)/4.0;
	return ortalama_yuzluk;
	
}

int main(int argc, char *argv[]) {
	struct ogrenci kisi={"Muhammed",20,2.89,'E'};
	kisi.ortalama=fonksiyon(kisi.ortalama);
	printf("%s adli ogrencinin ortalamasi = %2.lf",kisi.isim,kisi.ortalama);
	return 0;
}
