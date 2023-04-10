#include <stdio.h>
#include <stdlib.h>

/* Bir basketbol takýmýn bilgi ve istatistiklerini tutan br yapý dizisi oluþturunuz. Her oyuncunun isim,yaþ,boy,aðýrlýk,ortalama_skor,ortalama_rebound bilgilerini 
dizideki yapý elemanlarýna saklayýnýz. Bu bilgileri kullanarak
	a-)Ortalama boyu
	b-) en skorer oyuncuyu
	c-) en iyi rebound alan oyuncuyu
	ekranda gösteriniz
*/

struct oyuncu{
	char isim[15];
	int yas;
	int boy;
	double agirlik;
	double ortalama_skor;
	double ortalama_rebound;
};

double ortalama_boy(struct oyuncu oyuncular[]){
	int i,toplam=0;
	for(i=0;i<3;i++){
		toplam+=oyuncular[i].boy;
	}
	return toplam/3;
}
int en_skorer(struct oyuncu oyuncular[]){
	double max =oyuncular[0].ortalama_skor;
	int i,index=0;
	for(i=0;i<3;i++){
		if(oyuncular[i].ortalama_skor>max){
			max=oyuncular[i].ortalama_skor;
			index=i;
		}
	}
	return index;
}
int rebound(struct oyuncu oyuncular[]){
	double max =oyuncular[0].ortalama_rebound;
	int i,index=0;
	for(i=0;i<3;i++){
		if(oyuncular[i].ortalama_rebound>max){
			max=oyuncular[i].ortalama_rebound;
			index=i;
		}
	}
	return index;
}

int main(int argc, char *argv[]) {
	struct oyuncu oyuncular[3];
	int i;
	for(i=0;i<3;i++){
		printf("%d. Isim :",i+1);
		scanf("%s",&oyuncular[i].isim);
		printf("%d. boy ve yas :",i+1);
		scanf("%d%d",&oyuncular[i].boy,&oyuncular[i].yas);
		printf("%d. agirlik :",i+1);
		scanf("%lf",&oyuncular[i].agirlik);
		printf("%d. ortalama skor :",i+1);
		scanf("%lf",&oyuncular[i].ortalama_skor);
		printf("%d. ortalama rebound :",i+1);
		scanf("%lf",&oyuncular[i].ortalama_rebound);
	}
	double ortalama = ortalama_boy(oyuncular);
	printf("Oyuncularin boy ortalamasi : %.2lf\n",ortalama);
	int index_skor=en_skorer(oyuncular);
	printf("En skorer oyuncu: %s skor:%.2lf\n",oyuncular[index_skor].isim,oyuncular[index_skor].ortalama_skor);
	int index_rebound=rebound(oyuncular);
	printf("En yuksek rebound : %s skor:%.2lf\n",oyuncular[index_rebound].isim,oyuncular[index_rebound].ortalama_rebound);
	return 0;
}
