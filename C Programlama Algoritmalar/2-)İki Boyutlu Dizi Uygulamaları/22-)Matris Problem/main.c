#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen NxN tipindeki A matrisini, trasnpozesiyle çarpýp B matrisini oluþturan ve Bu B matrisinin en buyuk ve en kucuk elemanýný bulup yazdýran programý yazýnýz*/

int main(int argc, char *argv[]) {
	int A[10][10],B[10][10],i,j,n;
	printf("N sayisini giriniz: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemanini giriniz :",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			B[i][j]=A[j][i];
		}
	}
	int max=0, min=B[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(max<B[i][j])
				max=B[i][j];
			if(min>B[i][j])
				min=B[i][j];
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
	printf("En kucuk deger = %d\n",min);
	printf("En buyuk Deger = %d\n",max);
	
	return 0;
}
