#include <stdio.h>
#include <stdlib.h>

/* Kullan�c�dan 5 adet tamsay� alan ve bu say�lar�n ortlamas�n� hesaplayan program� dizi kullanarak yaz�n�z */

int main(int argc, char *argv[]) {
	int dizi[5],i;
	double toplam=0.0;
	for(i=0;i<5;i++){
		printf("%d. sayiyi giriniz : ",i+1);
		scanf("%d",&dizi[i]);
		toplam+=dizi[i];
	}
	
	printf("Girilen tamsayilarin ortalamasi = %.2lf",toplam/5);
	return 0;
}
