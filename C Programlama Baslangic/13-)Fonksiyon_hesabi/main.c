#include <stdio.h>
#include <stdlib.h>
#include <math.h> /*Matematik kütüphanesini ekliyoruz*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Kullanýcýdan bir "y" bilinmeyeni alýnacaktýr*/
	/* y> 10  y^3+1' in karekökü alýnýr*/
	/* 10>= y >= 0 ise e^y-10 iþlemi yapýlýr*/
	/* y<0 ise y/(y+15) iþlemi yapýlýr*/
	int y;
	double sonuc;
	printf("Y degerini giriniz : ");
	scanf("%d",&y);
	if(y>10){
		sonuc =pow(y,3)+1; /* y deðerinin küpünü pow fonksiyonu ile alabiliriz*/
		printf("Sonuc = %.2f",sonuc);
	}
	else{
		if(10>=y && y>=0){
			sonuc = exp(y)-10; /* E sayisini üssünü almak için exponential(exp) fonksiyonu kullanýlýr*/
			printf("Sonuc = %.2f",sonuc);
		}
		else{
			if(y<0){
				sonuc=y/(y+15.0);/*Sonucun double olabilmesi için 15.0 kullanýyoruz. Eðer integer deðer girer isek sonuc double olmaz*/
				printf("Sonuc = %.2f",sonuc);
			}
		}
	}
	return 0;
}
