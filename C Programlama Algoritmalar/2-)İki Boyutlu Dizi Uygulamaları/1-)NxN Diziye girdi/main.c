#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen NxN tipinden bir matrise verilerin yerle�tirilmesi ve ekrana yazd�r�lmas�*/

int main(int argc, char *argv[]) {
	int dizi[10][10],n;
	printf("N degerini giriniz N<10:");
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemani giriniz :",i+1,j+1);
			scanf("%d",&dizi[i][j]); //Matris elemanlar�n�n okunmas�
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",dizi[i][j]); //Matris ekrana yazd�rma i�lemi
			
		}
		printf("\n");
	}
	
	return 0;
}
