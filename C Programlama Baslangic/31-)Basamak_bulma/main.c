#include <stdio.h>
#include <stdlib.h>

/*Kullan�c�dan al�nan pozitif tamsayinin ka� basamakl� oldu�unu bulan program� yaz�n�z*/
/*Sonucu bulabilmek i�im bul() isimli bir fonksiyon kullan�n�z. Tamsay� de�eri alan ve tamsayi de�er d�nd�ren bir fonksiyon olmal�d�r*/
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
