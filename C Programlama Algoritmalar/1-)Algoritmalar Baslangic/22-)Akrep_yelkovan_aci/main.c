#include <stdio.h>
#include <stdlib.h>

/* Klavyeden ayr� ayr� girilen saat(0-11) ve dakika (0-59) bilgisine g�re akrep ile yelkovan�n a��lar�n� hesaplay�p ekrana yazan program� yaz�n�z*/

int main(int argc, char *argv[]) {
	int dakika,saat;
	printf("Saati giriniz (0-11) = ");
	scanf("%d",&saat);
	printf("Dakikayi giriniz : ");
	scanf("%d",&dakika);
	int ilerleme = dakika*0.5;//Yelkovan�n(dakikan�n) her ilerlemesinde akrep 0.5 derece ilerler 12 saat *60 dakika = 720 dakika 720/360 =0.5
	dakika = dakika*6; //Her dakika yelkovan�n ilerlemesi 6 derecedir. ��nk� analog saat 60 dakika g�steri 360/60 =6
	saat=saat*30; //Her saat ilerledi�inde akrep 30 derece ilerlemi� olur 
	saat = saat+ilerleme;
	printf("Yelkovanin 12'ye gore acisi : %d\n",dakika);
	printf("Akrebin 12'ye gore acisi :%d",saat);
	
	return 0;
}
