#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen NxN tipindeki A ve B kare matrislerini toplayan programý yazýnýz (C=A+B) */

int main(int argc, char *argv[]) {
	int A[10][10],  B[10][10],  C[10][10], i ,j, n;
	printf("N sayisini giriniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("A-%d-%d elemani giriniz :",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("B-%d-%d elemani giriniz :",i+1,j+1);
			scanf("%d",&B[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			C[i][j]=A[i][j]+B[i][j];
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
