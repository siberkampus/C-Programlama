#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen NxN matrisin kosegen elemanlari toplamini yazdiran programý yazýnýz
	1	2	3	4	
	5	6	7	8
	9	10	11	12
	13	14	15	16
	ilk köþegen top = 1+6+11+16 = 34
	ikinci köþegen top = 4+7+10+13 = 34
 */

int main(int argc, char *argv[]) {
	int dizi[10][10],n,i,j;
	printf("N degerini giriniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemani giriniz :",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
		printf("\n");
	}
	int kos1=0,kos2=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				kos1+=dizi[i][j];
			}
			if((i+j)==(n-1)){
				kos2+=dizi[i][j];
			}
		}
	}
	printf("Kosegen-1 Toplami = %d\n",kos1);
	printf("Kosegen-2 Toplami = %d\n",kos2);	
		
	return 0;
}
