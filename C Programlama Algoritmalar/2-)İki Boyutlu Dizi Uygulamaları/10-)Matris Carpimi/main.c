#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen NxN tipindeki A ve B matrislerinin çarpýmýný hesaplayan programý yazýnýz (C=AxB)*/

int main(int argc, char *argv[]) {
	int A[10][10],i,j,n,B[10][10],C[10][10],k;
	printf("N sayisini giriniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("A %d-%d elemanini giriniz :",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("A %d-%d elemanini giriniz :",i+1,j+1);
			scanf("%d",&B[i][j]);
		}
		printf("\n");
	}	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			C[i][j]=0;
			for(k=0;k<n;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
			printf("%d ",C[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}
