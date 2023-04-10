#include <stdio.h>
#include <stdlib.h>

/*Bir firmada çaýlþan pazarlamacýlar satýþlarýna göre komisyon kazanýrlar
	5000>satis   %4
	5000<satis   %6
	Ayrýca firma satýþ ortalamasýný geçen pazarlamacýlara 500 TL ödül verir.Firmadaki ücretlerin hesabýný yapmak üzere 50 pazarlamacýnýn isim ve satýþ bilgilerinin saklandýðý 
	bir yapý dizisi oluþturunuz ve tüm pazarlamacýlarýn o ayki satýþ miktarlarý ve toplam komisyonlarýný gösteriniz.
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
