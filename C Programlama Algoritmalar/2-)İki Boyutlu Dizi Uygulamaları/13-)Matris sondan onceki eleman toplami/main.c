#include <stdio.h>
#include <stdlib.h>

/* NxN matrisin sondan bir önceki satir ve sutunlarýnda bulunan eleman toplamlarýný hesaplayan programý yazýnýz
	1	2	3	4	
	5	6	7	8
	9	10	11	12
	13	14	15	16
	
	3+7+11+10+9 elemanlarýnýn toplamý gibi
	
 */

int main(int argc, char *argv[]) {
	int dizi[10][10],i,j,n,toplam=0;
	printf("N sayisini giriniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemanini giriniz : ",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	
	for(i=0;i<n-1;i++){
		toplam+=dizi[n-2][i];
		toplam+=dizi[i][n-2];	
		if(i==(n-2)){
			toplam-=dizi[i][n-2];
		}
		
	}
	printf("Toplam = %d",toplam);
	return 0;
}
