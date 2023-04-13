#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen N deðerine göre NxN matrisi oluþturup tüm elemanlara 0 deðeri veren ve ekrana yazdýran programý yazýnýz*/

int main(int argc, char *argv[]) {
	int dizi[10][10],i,j,n;
	printf("N degerini giriniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			dizi[i][j]=0;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	return 0;
}
