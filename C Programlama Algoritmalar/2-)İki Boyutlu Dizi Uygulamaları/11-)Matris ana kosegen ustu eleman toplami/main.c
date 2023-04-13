#include <stdio.h>
#include <stdlib.h>

/*NxN matrisin Ana kosegenin �zerinde kalan elemanlar�n toplam�n� yazd�ran program� yaz�n�z

	1 	2	3	4
	5	6	7	8
	9	10	11	12
	13	14	15	16
	
	Ana k��egen 1-6-11-16 d�r . Bunun �zerinde kalan elamanlar 2-3-4-7-8-12 dir . Bunlar�n toplam�n� bulan program�n yaz�lmas� istenmektir.
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
