#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen N degerine g�re NxN birim matris olu�turan program� yaz�n�z
Birim matris t�m elemanlar� 1'den olu�an matrise denir */

int main(int argc, char *argv[]) {
	int dizi[10][10],n,j,i;
	printf("N degeriniz giriniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			dizi[i][j]=1;
			
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
