#include <stdio.h>
#include <stdlib.h>

/*
	Bir okul i�in yap� tasarlay�n�z ve bu yap�y� a�a��daki i�lemlerde kullan�n�z
	1-) okul_yapisi adl� yap�n�n isim(dizgi), ogrenci_sayi(tamsayi),ogretmen_sayi(tamsayi),sehir(dizgi) elemanlar�n� olusturunuz
	2-) struct okul_yapisi ismine typedef kullanarak Okul ismini veriniz.
	3-) Okul yap�s�nda a de�i�keni ,b g�stergesi ve c adl� 10'luk bir dizi yapisi tan�mlay�n�z.
	4-)Yukar�da tan�mlanan a ve c de�i�kenlerine bilgileri okuyunuz.
	5-) b g�stergesinin a yap�s�n� g�stermesini sa�lay�n�z
	6-) b'nin g�sterdi�i yap�daki ve c dizisindeki bilgileri yazd�r�n�z
*/

struct okul_yapisi{
	char isim[15];
	int ogrenci_sayi;
	int ogretmen_sayi;
	char sehir[15];
	
};
typedef struct okul_yapisi Okul;
int main(int argc, char *argv[]) {
	Okul a;
	Okul *b;
	Okul c[3];
	
	printf("A icin isim: ");
	scanf("%s",&a.isim);
	printf("A icin ogrenci sayisi: ");
	scanf("%d",&a.ogrenci_sayi);
	printf("A icin ogretmen sayisi: ");
	scanf("%d",&a.ogretmen_sayi);
	printf("A icin sehir: ");
	scanf("%s",&a.sehir);
	int i;
	for(i=0;i<3;i++){
		printf("C[%d] icin isim: ",i+1);
		scanf("%s",&c[i].isim);
		printf("C[%d] icin ogrenci sayisi: ",i+1);
		scanf("%d",&c[i].ogrenci_sayi);
		printf("C[%d] icin ogretmen sayisi: ",i+1);
		scanf("%d",&c[i].ogretmen_sayi);
		printf("C[%d] icin sehir: ",i+1);
		scanf("%s",&c[i].sehir);
	}
	b=&a;
	printf("A isim: %s\n",b->isim);	
	printf("A ogrenci_sayisi: %d\n",b->ogrenci_sayi);
	printf("A ogretmen sayisi: %d\n",b->ogretmen_sayi);
	printf("A sehir: %s\n",b->sehir);
	
	for(i=0;i<3;i++){
		printf("C[%d] icin isim: %s\n",i+1,c[i].isim);
		printf("C[%d] icin ogrenci sayisi: %d\n",i+1,c[i].ogrenci_sayi);
		printf("C[%d] icin ogretmen sayisi:%d\n",i+1,c[i].ogretmen_sayi);
		printf("C[%d] icin sehir:%s\n",i+1,c[i].sehir);
	}
	
	return 0;
}
