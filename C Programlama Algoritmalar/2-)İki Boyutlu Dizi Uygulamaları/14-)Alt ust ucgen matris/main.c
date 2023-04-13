#include <stdio.h>
#include <stdlib.h>

/* Klavyeden NxN tipindeki matrisinden alt ve üst üçgen matrisini oluþturan programý yazýnýz
	 Matris
	1	2	3	
	4	5	6	
	7	8	9

	Alt ucgen matrisi
	1	0	0
	4	5	0
	7	8	9
	
	Üst üçgen matrisi
	1	2	3
	0	5	6
	0	0	9

*/

int main(int argc, char *argv[]) {
	int dizi[10][10],i,j,n,alt[10][10],ust[10][10];
	printf("N sayisini giriniz :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemanini giriniz:",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j>i){
				alt[i][j]=0;
			}
			else{
				alt[i][j]=dizi[i][j];
			}
			printf("%d  ",alt[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j<i){
				ust[i][j]=0;
			}
			else{
				ust[i][j]=dizi[i][j];
			}
			printf("%d  ",ust[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
