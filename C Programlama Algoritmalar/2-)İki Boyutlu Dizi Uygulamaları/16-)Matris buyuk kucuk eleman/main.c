#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen NxN tipindeki A matrisinin en büyük ve en küçük elemanlarýný ve bu elemanlarýn yerlerini bulup sonuçlarýn ekrana yazdýran program */

int main(int argc, char *argv[]) {
	int dizi[10][10],i,j,n;
	printf("N sayisini giriniz:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemanini giriniz :",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	int en_b=0, en_k=dizi[0][0],en_b_satir,en_b_sutun,en_k_satir,en_k_sutun;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(dizi[i][j]>en_b){
				en_b=dizi[i][j];
				en_b_satir=i;
				en_b_sutun=j;
			}
			if(dizi[i][j]<en_k){
				en_k=dizi[i][j];
				en_k_satir=i;
				en_k_sutun=j;
			}
		}
	}
	printf("En buyuk = %d  %d. satir %d. sutun\n",en_b,en_b_satir+1,en_b_sutun+1);
	printf("En kucuk = %d  %d. satir %d. sutun\n",en_k,en_k_satir+1,en_k_sutun+1);
	return 0;
}
