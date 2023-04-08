#include <stdio.h>
#include <stdlib.h>

/*  Kullan�c� 5 elemanl� bir diziye tamsay�lar girdi�i ve bu dizinin her eleman�n�n tek say� m� yoksa �ift say� m� oldugunu ekranda g�steren bir program yaz�n�z .
Bu program iki farkl� fonsksiyondan olu�mal�d�r. Bul() fonksiyonu �a�r�ld��� yerden bir tamsayi de�eri almal� ve bunun tek veya �ift sayi olup olmad���na karar verip ekrana yazmal�d�r.
main() fonksiyonu ise kullan�c�dan 5 tamsayi de�eri al�p bunlar� bir dizide saklamal� ve bul() fonksiyonunu kullanarak dizi elemanlar�n�n tek veya �ift olduklar�n� ekranda g�stermelidir.

�rnek  1 5 6 8 13
	1 tek sayidir
	5 tek sayidir
	6 �ift sayidir
	8 �ift sayidir
	13 tek sayidir
*/

void bul(int *a);
int main(int argc, char *argv[]) {
	int sayilar[5],i;
	for(i=0;i<5;i++){
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&sayilar[i]);
	}
	bul(sayilar);
	
	return 0;
}

void bul(int a[]){
	int i;
	for(i=0;i<5;i++){
		if((a[i]%2)==0){
			printf("%d cift sayidir\n",a[i]);
		}
		if((a[i]%2)!=0){
			printf("%d tek sayidir\n",a[i]);
		}
	}
}
