#include <stdio.h>
#include <stdlib.h>

/* Klavyeden alýnan NxN matrisin transpozesini alan programý yazýnýz

 a11 a12 a13 a14 ....a1n                    a11 a21 a32 a41 ....an1			
 a21 a22 a23 a24 ....a2n                    a12 a22 a32 a24 ....an2
 a31 a32 a33 a34 ....a3n                    a13 a23 a33 a43 ....an3
  *   *   *    *      *    --->>            *   *   *    *      * 
 an1 an2 an3 an4 ....ann                    a1n an2 a3n a4n ....ann
 Yukarýda yapýlan iþlem aslýnda i ile j nin yer deðiþtirmesidir
*/

int main(int argc, char *argv[]) {
	int dizi[10][10],i,j,n;
	printf("N degerini giriniz :");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemanini giriniz :",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",dizi[j][i]);
		}
		printf("\n");
	}
	return 0;
}
