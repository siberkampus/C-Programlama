#include <stdio.h>
#include <stdlib.h>
/* Kullanýcýnýn 4 lük sistemdeki notunu 100'lük sisteme çeviren bir program yazýnýz. Bunun için ogrenci struct yapisi oluþturunuz. Ogrenci yapisinda isim,yas,cinsiyet,ve ortalama 
	deðiþkenleri bulunmaldýr. cevir() adlý fonksiyon ortamayý 100 lük sisteme çevirip main() fonksiyonuna döndürmelidir. Main fonskiyonunda öðrenci adý ve 100lük sistemdeki 
	ortalamasý yazdýrýlmaktadýr
	100'lük sisteme çevirirken basit oran orantý formülü kullanýlmaldýr
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
