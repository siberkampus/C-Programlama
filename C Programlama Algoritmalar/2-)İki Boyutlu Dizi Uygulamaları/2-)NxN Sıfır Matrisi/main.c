#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen N de�erine g�re NxN matrisi olu�turup t�m elemanlara 0 de�eri veren ve ekrana yazd�ran program� yaz�n�z*/

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
