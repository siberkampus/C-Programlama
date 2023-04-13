#include <stdio.h>
#include <stdlib.h>

/* NxN matriste yedek kosegen üzerinde kalan elemanlarýn toplamýný yazdýran programý yazýnýz

	1	2	3	4	
	5	6	7	8	
	9	10	11	12	
	13	14	15	16
	yedek kosegen = 13-10-7-4 
	elemanlar = 1-2-3-5-6-9

 */

int main(int argc, char *argv[]) {
	int dizi[10][10],i,j,n,toplam=0;
	printf("N sayisini giriniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemani giriniz :",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}	
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i+j) < (n-1)){
				toplam+=dizi[i][j];
			}
		}
	}
	printf("Toplam = %d",toplam);
	return 0;
}
