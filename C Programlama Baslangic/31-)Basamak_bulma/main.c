#include <stdio.h>
#include <stdlib.h>

/*Kullanýcýdan alýnan pozitif tamsayinin kaç basamaklý olduðunu bulan programý yazýnýz*/
/*Sonucu bulabilmek içim bul() isimli bir fonksiyon kullanýnýz. Tamsayý deðeri alan ve tamsayi deðer döndüren bir fonksiyon olmalýdýr*/
int bul(int a);

int main(int argc, char *argv[]) {
	int sayi,sonuc;
	printf("Tamsayi giriniz: ");
	scanf("%d",&sayi);
	if(sayi<0){
		printf("Negatif sayi girdiniz!!!");
		return 0;
	}
	sonuc=bul(sayi);
	printf("%d sayisi %d basamaklidir",sayi,sonuc);
	
	return 0;
}
int bul(int a){
	int kalan=0,bolum=0,sonuc=0;
	while(a){
		a = a/10;
		sonuc++;
	}
	return sonuc;
	
}
