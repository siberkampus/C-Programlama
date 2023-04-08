#include <stdio.h>
#include <stdlib.h>

/* Kullanýcýnýn 30 kiþilik bir sýnýftaki her öðrenci için 3'er sýnav notu gireceði ve her sýnav için sýnýf ortalamasýnýn ekranda gösterileceði bir program yazýnýz */
/* 
	1. Öðrenci notlarý: 32 45 23
	2. Öðrenci notlarý: 50 49 84
	3. Öðrenci notlarý: 60 65 76
	4. Öðrenci notlarý: 70 48 25
	*     *       *      *  *  *
	*     *       *      *  *  *
	*     *       *      *  *  *
	29. Öðrenci notlarý: 72 67 76
	30. Öðrenci notlarý: 38 94 96
*/
/* 
	1. Sýnav Ortalamasý = 34.00
	2. Sýnav Ortalamasý = 38.33
	3. Sýnav Ortalamasý = 58.00
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
