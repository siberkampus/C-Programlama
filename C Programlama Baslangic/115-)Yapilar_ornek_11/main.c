#include <stdio.h>
#include <stdlib.h>

/*Bir firmada �a�l�an pazarlamac�lar sat��lar�na g�re komisyon kazan�rlar
	5000>satis   %4
	5000<satis   %6
	Ayr�ca firma sat�� ortalamas�n� ge�en pazarlamac�lara 500 TL �d�l verir.Firmadaki �cretlerin hesab�n� yapmak �zere 50 pazarlamac�n�n isim ve sat�� bilgilerinin sakland��� 
	bir yap� dizisi olu�turunuz ve t�m pazarlamac�lar�n o ayki sat�� miktarlar� ve toplam komisyonlar�n� g�steriniz.
  */
  
//**************************************************************
struct pazarlamaci{
	char isim[15];
	double s_tutar,komisyon;
};

//****************************************************************
void komisyon(struct pazarlamaci pazarlamacilar[],double ort){
	int i;
	for(i=0;i<3;i++){
		if((pazarlamacilar[i].s_tutar)>5000){
			if(pazarlamacilar[i].s_tutar>ort){
				pazarlamacilar[i].komisyon=pazarlamacilar[i].s_tutar*0.06+500;
				}
			
			else {
				pazarlamacilar[i].komisyon=pazarlamacilar[i].s_tutar*0.06;
				}
		}
		else{
			pazarlamacilar[i].komisyon=pazarlamacilar[i].s_tutar*0.04;
			}
	}
	
	

}

//**************************************************
double ortalama(struct pazarlamaci pazarlamacilar[]){
	double toplam=0;
	int i;
	for(i=0;i<3;i++){
		toplam+=pazarlamacilar[i].s_tutar;
	}
	return toplam/3;
}

//**************************************************



int main(int argc, char *argv[]) {
	struct pazarlamaci pazarlamacilar[3];
	int i;
	for(i=0;i<3;i++){
		printf("%d. pazarlamaci isim :",i+1);
		scanf("%s",&pazarlamacilar[i].isim);
		printf("%d. pazarlamaci satis tutari :",i+1);
		scanf("%lf",&pazarlamacilar[i].s_tutar);
		} 
	double ort;
	ort = ortalama(pazarlamacilar);
	komisyon(pazarlamacilar,ort);
	for(i=0;i<3;i++){
		printf("%s kazandigi Komisyon : %.2lf\n",pazarlamacilar[i].isim,pazarlamacilar[i].komisyon);
	}
	
	return 0;
}
