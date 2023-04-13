#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen N elemanlý A dizisinin elamanlarýný, baþka bir dizi kullanmadan tersten yerleþtiren programý yazýnýz*/

int main(int argc, char *argv[]) {
	int n,i;
	printf("Kac eleman gireceksiniz : ");
	scanf("%d",&n);
	int dizi[20];
	for(i=0;i<n;i++){
		printf("Elemani giriniz : ");
		scanf("%d",&dizi[i]);
	}
	int tmp;
	for(i=0;i<n/2;i++){
		tmp=dizi[i];
		dizi[i]=dizi[n-(i+1)];
		dizi[n-(i+1)]=tmp;
	}
	for(i=0;i<n;i++){
		printf("%d\n",dizi[i]);
	}
	return 0;
}
