#include <stdio.h>
#include <stdlib.h>

/* NxN matrisinin sutunlarýný büyükten küçüðe sýralayan ve sutunlardaki en küçük elemaný yazdýran programý yazýnýz*/

int main(int argc, char *argv[]) {
	int dizi[10][10],i,j,n,k;
	printf("N degerini giriniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemanini giriniz :",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=1;k<n;k++){
				if(dizi[k][i]>dizi[k-1][i]){
					int tmp = dizi[k][i];
					dizi[k][i]=dizi[k-1][i];
					dizi[k-1][i]=tmp;
				}
			}	
		}
		printf("%d. sutun en buyuk eleman = %d\n",i+1,dizi[0][i]);	
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d	",dizi[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
