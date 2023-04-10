#include <stdio.h>
#include <stdlib.h>

/* Bir yapi dizisi i�ine her ��renci i�in isim, 3 ara sinav ve 1 final notu giriniz.
	Her ��rencinin ders notu ortalamalar�n� a�a��daki �ekilde hesaplay�n�z
	3 ara s�nav�n her biri %20 
	Final notu ise %40 a��rl���ndad�r
*/
struct ogrenci{
	char isim[15];
	int arasinav_1,arasinav_2,arasinav_3,final;
	double ortalama;
};

void ortalama(struct ogrenci *ogr){
	ogr->ortalama=(((ogr->arasinav_1)+(ogr->arasinav_2)+(ogr->arasinav_3))*0.2)+(ogr->final)*0.4;	
	printf("isim : %s ortlama: %.2f\n",ogr->isim,ogr->ortalama);
}
int main(int argc, char *argv[]) {
	struct ogrenci ogrenciler[3];
	int i;
	for(i=0;i<3;i++){
		printf("%d. Ogrenci adi: ",i+1);
		scanf("%s",&ogrenciler[i].isim);
		printf("%d. Ogrenci arasinav 1-2-3 ve final notunu sirasiyla giriniz :",i+1);
		scanf("%d%d%d%d",&ogrenciler[i].arasinav_1,&ogrenciler[i].arasinav_2,&ogrenciler[i].arasinav_3,&ogrenciler[i].final);	
	}
	for(i=0;i<3;i++){
		ortalama(&ogrenciler[i]);
	}

	return 0;
}
