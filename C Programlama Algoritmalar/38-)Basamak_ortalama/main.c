#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen �� basamakl� pazitif tamsay�n�n rakamlar�n�n (basamaklar�n�n) aritmetik ortalamas�n� hesaplay�p ekrana yazd�ran program� yaz�n�z*/

int main(int argc, char *argv[]) {
	int sayi,i;
	printf("Bir sayi giriniz :");
	scanf("%d",&sayi);
	int toplam=0,kalan=0;
	while(sayi){
		kalan+=sayi%10;
		sayi=sayi/10;
	}
	printf("Ortalama = %lf",kalan/3.0);
	return 0;
}
