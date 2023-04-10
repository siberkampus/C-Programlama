#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Bir şehrin hava durumu bilgilerini bir yapıda toplayınız. Bu yapıda en yüksek ve en düşük hava sıcaklıklarını ve şehrin ismi elemanları olsun.
	20 şehir için bir yapı dizisi oluşturup bilgileri okutunuz. Son olarak en yüksek ve en düşük sıcaklıklar arasında en fazla fark olan şehri ekranda gösteriniz.
*/


struct sehir{
	double en_yuksek;
	double en_dusuk;
	char isim[15];
};
typedef struct sehir Sehir;

double sicak_fark(Sehir sehirler){
	double fark = sehirler.en_yuksek-sehirler.en_dusuk;
	return fark;
}
int main(int argc, char *argv[]) {
	Sehir sehirler[3];
	int i;
	for(i=0;i<3;i++){
		printf("%d. Sehrin adi : ",i+1);
		scanf("%s",&sehirler[i].isim);
		
		printf("\tEn yuksek sicaklik :");
		scanf("%lf",&sehirler[i].en_yuksek);
		
		printf("\tEn dusuk sicaklik :");
		scanf("%lf",&sehirler[i].en_dusuk);
	}
	double max_fark=0;
	char sehir[15];	
	for(i=0;i<3;i++){
		if(sicak_fark(sehirler[i])>max_fark){
			max_fark=sicak_fark(sehirler[i]);
			strcpy(sehir,sehirler[i].isim);
		}
	}
	printf("En buyuk sicaklik farki olan sehir : %s sicaklik farki: %.1lf",sehir,max_fark);
	
	return 0;
}
