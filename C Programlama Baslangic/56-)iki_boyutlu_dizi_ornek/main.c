#include <stdio.h>
#include <stdlib.h>

/* 5X5 Lik bir dizinin köþegeninde bulunan degeleri toplayan program yazýnýz
	12   15   16   31   45
	21   18   61   24   25
	31   32   9    5    3
	1    17   19   12   13 
	15   34   26   65   34
	Somuc  = 12+18+9+12+34 olmalý
*/

int main(int argc, char *argv[]) {
	int dizi[5][5]={{12,15,16,31,45},{21,18,61,24,25},{31,32,9,5,3},{1,17,19,12,13},{15,34,26,65,34}};
	int i,j,toplam=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j){
				toplam+=dizi[i][j];
			}
		}
	}
	printf("Kosegen toplami = %d",toplam);
	return 0;
}
