#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen NxN tipindeki A matrisinin her bir satýr elemanlarýný kendi aralarýnda küçükten buyuge doðru sýralayan programý yazýnýz*/


int main(int argc, char *argv[]) {
	int dizi[10][10],i,j,n;
	printf("N sayisini giriniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemanini giriniz :",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	int k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=1;k<n;k++){
			
			if(dizi[j][k]<dizi[j][k-1]){
				int tmp = dizi[j][k];
				dizi[j][k]=dizi[j][k-1];
				dizi[j][k-1] =tmp;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d 	",dizi[i][j]);
		}
		printf("\n");
	}
	return 0;
}
