#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Kullan�c�n�n girmi� oldu�u 10 adet say�dan pozitif olanlar�n toplam�n� yazd�ran program */
	int toplam,sayi,counter=0;
	while(counter<10){
		printf("Bir sayi giriniz : ");
		scanf("%d",&sayi);
		if(sayi>0){
			toplam+=sayi;
		}
		counter++;
	}
	printf("Pozitif tam sayilarin toplami :%d",toplam);
	return 0;
}
