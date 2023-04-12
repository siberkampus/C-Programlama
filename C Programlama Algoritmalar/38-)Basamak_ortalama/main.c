#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen üç basamaklý pazitif tamsayýnýn rakamlarýnýn (basamaklarýnýn) aritmetik ortalamasýný hesaplayýp ekrana yazdýran programý yazýnýz*/

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
