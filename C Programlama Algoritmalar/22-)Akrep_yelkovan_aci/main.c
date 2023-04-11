#include <stdio.h>
#include <stdlib.h>

/* Klavyeden ayrý ayrý girilen saat(0-11) ve dakika (0-59) bilgisine göre akrep ile yelkovanýn açýlarýný hesaplayýp ekrana yazan programý yazýnýz*/

int main(int argc, char *argv[]) {
	int dakika,saat;
	printf("Saati giriniz (0-11) = ");
	scanf("%d",&saat);
	printf("Dakikayi giriniz : ");
	scanf("%d",&dakika);
	int ilerleme = dakika*0.5;//Yelkovanýn(dakikanýn) her ilerlemesinde akrep 0.5 derece ilerler 12 saat *60 dakika = 720 dakika 720/360 =0.5
	dakika = dakika*6; //Her dakika yelkovanýn ilerlemesi 6 derecedir. Çünkü analog saat 60 dakika gösteri 360/60 =6
	saat=saat*30; //Her saat ilerlediðinde akrep 30 derece ilerlemiþ olur 
	saat = saat+ilerleme;
	printf("Yelkovanin 12'ye gore acisi : %d\n",dakika);
	printf("Akrebin 12'ye gore acisi :%d",saat);
	
	return 0;
}
