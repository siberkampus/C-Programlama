#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen NxN matrisin elemanlarý toplamý bulan programý yazýnýz */


int main(int argc, char *argv[]) {
	int dizi[10][10],i,j,n,toplam=0;
	printf("N sayisini giriniz:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d eleman =",i+1,j+1);
			scanf("%d",&dizi[i][j]);
			toplam+=dizi[i][j];
		}
		printf("\n");
	}
	printf("Matrisin eleman toplami = %d",toplam);
	
	return 0;
}
