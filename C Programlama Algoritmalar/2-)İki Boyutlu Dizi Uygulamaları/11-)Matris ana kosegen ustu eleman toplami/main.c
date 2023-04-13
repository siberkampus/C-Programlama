#include <stdio.h>
#include <stdlib.h>

/*NxN matrisin Ana kosegenin üzerinde kalan elemanlarýn toplamýný yazdýran programý yazýnýz

	1 	2	3	4
	5	6	7	8
	9	10	11	12
	13	14	15	16
	
	Ana köþegen 1-6-11-16 dýr . Bunun üzerinde kalan elamanlar 2-3-4-7-8-12 dir . Bunlarýn toplamýný bulan programýn yazýlmasý istenmektir.
	*/

int main(int argc, char *argv[]) {
	int n,dizi[10][10],i,j;
	printf("N sayisini giriniz : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemanini giriniz : ",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	int toplam=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j>i){
				toplam+=dizi[i][j];
			}
		}
	}
	printf("Toplam = %d",toplam);
	return 0;
}
