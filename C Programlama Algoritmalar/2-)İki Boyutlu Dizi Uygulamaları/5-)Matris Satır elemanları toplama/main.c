#include <stdio.h>
#include <stdlib.h>

/* Girilen NxN Matrisin 2. satýr elemanalrýnýn toplamýný bulup ekrana yazdýran programý yazýnýz */

int main(int argc, char *argv[]) {
	int dizi[10][10],i,j,n;
	printf("N degerini giriniz :");
	scanf("%d",&n);
	int sat_top=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemani giriniz :",i+1,j+1);
			scanf("%d",&dizi[i][j]);
			if(i==1){
				sat_top+=dizi[i][j];
			}
		}
		printf("\n");
	}

	printf("2. satir toplami = %d",sat_top);
	return 0;
}
