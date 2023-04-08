#include <stdio.h>
#include <stdlib.h>

/*Bir dizi elamanlar�n�n maksimum degerini ekranda g�steren bir program yazal�m*/
/*Bunun i�in kullan�c� dizi elemanlar�n� girdikten sonra maksimum() fonksiyonuna yollamal�d�r.
maksimum() fonksiyonu ise ekranda bu dizinin maksimum degerini g�stermelidir.
*/

void maksimum(int dizi[],int *maks);

int main(int argc, char *argv[]) {
	int k[5],i,maks=0;
	for(i=0;i<5;i++){
		printf("%d. sayiyi giriniz: ",i+1);
		scanf("%d",&k[i]);
	}
	maksimum(k,&maks);
	printf("Girilen dizinin en buyuk elemani =%d",maks);
	return 0;
}


void maksimum(int dizi[],int *maks){
	int i;
	*maks=dizi[0];
	for(i=0;i<5;i++){
		if(dizi[i]>*maks){
			*maks=dizi[i];
		}
	}
}
