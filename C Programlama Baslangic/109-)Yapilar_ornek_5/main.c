#include <stdio.h>
#include <stdlib.h>

/* Sokak,apartman adi, daire numarasi,mahalle,ve þehir elemanlarýndan oluþan adres yapýsýný tanýmlayýnýz
	adres yapýsýný kullarak isim kimlikno ve adres elemanlarýndan oluþan insan yapýsý tanýmlayýnýz
	Bu yapýda tanýmlanan bir deðiþkene tüm bilgileri okutunuz
	Bir zarfýn üstüne basýldýðý gibi isim ve adresi bastýrýnýz 
 */
struct adres{
	char sokak[20];
	char apartman_adi[20];
	int daire_no;
	char mahalle[30];
	char sehir[15];
};

struct insan{
	char isim[20];
	int kimlik_no;
	struct adres adr; 
};

int main(int argc, char *argv[]) {
	struct insan kisi;

	printf("Adi : ");
	scanf("%s",&kisi.isim);
	printf("Kimlik no : ");
	scanf("%d",&kisi.kimlik_no);
	printf("Sokak : ");
	scanf("%s",&kisi.adr.sokak);
	printf("Apartman adi : ");
	scanf("%s",&kisi.adr.apartman_adi);
	printf("Daire no : ");
	scanf("%d",&kisi.adr.daire_no);
	printf("Mahalle : ");
	scanf("%s",&kisi.adr.mahalle);
	printf("Sehir : ");
	scanf("%s",&kisi.adr.sehir);  
	
	printf("%s %d \n%s mahallesi %s sokak %s apartmani no:%d %s",kisi.isim,kisi.kimlik_no,kisi.adr.mahalle,kisi.adr.sokak,kisi.adr.apartman_adi,kisi.adr.daire_no,kisi.adr.sehir);
	return 0;
}
