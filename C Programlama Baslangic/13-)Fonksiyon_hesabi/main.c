#include <stdio.h>
#include <stdlib.h>
#include <math.h> /*Matematik k�t�phanesini ekliyoruz*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Kullan�c�dan bir "y" bilinmeyeni al�nacakt�r*/
	/* y> 10  y^3+1' in karek�k� al�n�r*/
	/* 10>= y >= 0 ise e^y-10 i�lemi yap�l�r*/
	/* y<0 ise y/(y+15) i�lemi yap�l�r*/
	int y;
	double sonuc;
	printf("Y degerini giriniz : ");
	scanf("%d",&y);
	if(y>10){
		sonuc =pow(y,3)+1; /* y de�erinin k�p�n� pow fonksiyonu ile alabiliriz*/
		printf("Sonuc = %.2f",sonuc);
	}
	else{
		if(10>=y && y>=0){
			sonuc = exp(y)-10; /* E sayisini �ss�n� almak i�in exponential(exp) fonksiyonu kullan�l�r*/
			printf("Sonuc = %.2f",sonuc);
		}
		else{
			if(y<0){
				sonuc=y/(y+15.0);/*Sonucun double olabilmesi i�in 15.0 kullan�yoruz. E�er integer de�er girer isek sonuc double olmaz*/
				printf("Sonuc = %.2f",sonuc);
			}
		}
	}
	return 0;
}
