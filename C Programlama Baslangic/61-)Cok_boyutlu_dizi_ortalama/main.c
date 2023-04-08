#include <stdio.h>
#include <stdlib.h>

/*Kullan�c�dan 10X2'lik 2-boyutlu bir diziye reel say�lar girmesini isteyen ve sonras�nda bu dizinin sat�r ve sutunlar�n�n ortalamas�n� bularak bunlar�
2 adet 2 boyutlu dizide tutan bir program yaz�n�z
	
				1.1    1.3 -->1.2 (Ortalamas�)
				3.4    1.2 -->2.3 (Ortalamas�)
				2.7    1.3 -->2.0 (Ortalamas�)
sutun_ort-->   (2.4) (1.27)
 */

int main(int argc, char *argv[]) {
	double dizi[10][2];
	double sut_ort[2],sut_top=0.0;
	double sat_ort[10],sat_top=0.0;
	int i,j;
	
	for(i=0;i<10;i++){
		printf("%d. Satir icin 2 sayi giriniz:",i+1);
		for(j=0;j<2;j++){
			scanf("%lf",&dizi[i][j]);
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<2;j++){
			sat_top+=dizi[i][j];
		}
		sat_ort[i]=sat_top/2;
		sat_top=0;
	}
	for(i=0;i<2;i++){
		for(j=0;j<10;j++){
			sut_top+=dizi[j][i];
		}
		sut_ort[i]=sut_top/10;
		sut_top=0;
	}
	for(i=0;i<10;i++){	
		printf("Satir ortalamalari = %.2lf\n",sat_ort[i]);
	}
	printf("\n");
	for(i=0;i<2;i++){
		printf("Sutunlar ortalamasi = %.2lf\n",sut_ort[i]);
	}
	return 0;
}
