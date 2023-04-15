#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen NxN tipindeki A matrisinin her bir satýrýndaki en büyük elemanlarýndan B ve her bir sütunundaki en küçük elemanlarýndan C dizisini oluþturup 
bu dizilerin skaler çarpýmýný ekrana yazdýran programý yazýnýz (D=BxC) */

int main(int argc, char *argv[]) {
	int dizi[10][10],i,j,n;
	printf("N degerini giriniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemanini giriniz :",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
		printf("\n");
	}
	int max[10],max_d=0;
	int min_d = sizeof(int),min[10];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(max_d<dizi[i][j]){
				max[i]=dizi[i][j];
				max_d= dizi[i][j];
			}
			if(min_d>dizi[j][i]){
				min[i]=dizi[j][i];
				min_d=dizi[j][i];  		
;			}
		}
		max_d=0;
		min_d = INT_MAX;
	}
	for(i=0;i<n;i++){
		printf("%d. Satir En buyuk = %d\n",i+1,max[i]);
	}
	for(i=0;i<n;i++){
		printf("%d. Sutun en kucuk = %d\n",i+1,min[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	return 0;
}
