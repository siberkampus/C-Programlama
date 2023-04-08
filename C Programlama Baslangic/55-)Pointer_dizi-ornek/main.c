#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void yazdir(int *aptr);
int main(int argc, char *argv[]) {
	int dizi[5],i;
	for(i=0;i<5;i++){
		printf("%d. elemani giriniz : ",i+1);
		scanf("%d",&dizi[i]);
	}
	yazdir(dizi);
	return 0;
}

void yazdir(int *aptr){ //Bir dizi yerine diziyi iþaret eden pointer alýyoruz
	int i =0;
	for(i;i<5;i++){
		printf("%d\n",*(aptr+i)); //pointerýn deðerini 1 arttýrarak dizinin diðer elemanlarýný yazdýrabiliriz
	}
}
