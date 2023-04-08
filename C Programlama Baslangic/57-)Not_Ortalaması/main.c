#include <stdio.h>
#include <stdlib.h>

/* Kullan�c�n�n 30 ki�ilik bir s�n�ftaki her ��renci i�in 3'er s�nav notu girece�i ve her s�nav i�in s�n�f ortalamas�n�n ekranda g�sterilece�i bir program yaz�n�z */
/* 
	1. ��renci notlar�: 32 45 23
	2. ��renci notlar�: 50 49 84
	3. ��renci notlar�: 60 65 76
	4. ��renci notlar�: 70 48 25
	*     *       *      *  *  *
	*     *       *      *  *  *
	*     *       *      *  *  *
	29. ��renci notlar�: 72 67 76
	30. ��renci notlar�: 38 94 96
*/
/* 
	1. S�nav Ortalamas� = 34.00
	2. S�nav Ortalamas� = 38.33
	3. S�nav Ortalamas� = 58.00
*/
int main(int argc, char *argv[]) {
	int mevcut[30][3];
	double sinav[3]={0,0,0};
	int i,j;
	for(i=0;i<30;i++){
		printf("%d. Ogrenci Notlarini giriniz: \n",i+1);
		for(j=0;j<3;j++){
			printf("%d. Sinav Notu : ",j+1);
			scanf("%d",&mevcut[i][j]);
		}
	}


	for(i=0;i<3;i++){
		for(j=0;j<30;j++){
			sinav[i]+=mevcut[j][i];
		}
		printf("%d. sinav ortalamasi = %.2lf\n",i+1,sinav[i]/30.0);
	}
	
	return 0;
}
