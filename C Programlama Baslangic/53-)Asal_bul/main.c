#include <stdio.h>
#include <stdlib.h>

/*  Kullanýcý 5 elemanlý bir diziye tamsayýlar girdiði ve bu dizinin her elemanýnýn tek sayý mý yoksa çift sayý mý oldugunu ekranda gösteren bir program yazýnýz .
Bu program iki farklý fonsksiyondan oluþmalýdýr. Bul() fonksiyonu çaðrýldýðý yerden bir tamsayi deðeri almalý ve bunun tek veya çift sayi olup olmadýðýna karar verip ekrana yazmalýdýr.
main() fonksiyonu ise kullanýcýdan 5 tamsayi deðeri alýp bunlarý bir dizide saklamalý ve bul() fonksiyonunu kullanarak dizi elemanlarýnýn tek veya çift olduklarýný ekranda göstermelidir.

örnek  1 5 6 8 13
	1 tek sayidir
	5 tek sayidir
	6 çift sayidir
	8 çift sayidir
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
