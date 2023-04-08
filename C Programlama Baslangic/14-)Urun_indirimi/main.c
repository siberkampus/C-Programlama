#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/* Bir maðaza yapýlan alýþveriþ tutarýna göre indirim yapmaktadýr*/
	/* 0-100 TL Arasý alýþveriþ için  %4 indirim uygulanmaktadýr*/
	/*101-250 Tl arasý alýþveriþ içim 100 TL'ye kadar %5 100 TL'nin üstü için %7 indirim uygulanmaktadýr*/
	/*251 Tl ve üstü için 100TL'ye kadar %6 100 TL den 250 TL'ye kadar için %8 250 TL üstü için %10 indirim uygulanmaktadýr*/
	
	double harcama;
	double indirim;
	printf("Harcama tutarini giriniz : ");
	scanf("%lf",&harcama);
	if(harcama<=100){
		harcama=harcama-(harcama*0.04);
		printf("Toplam odenecek tutar %.2f: ",harcama);
	}
	else {
		if(harcama>100 && harcama<=250){
			harcama = harcama-((100*0.05)+(harcama-100)*0.07);
			printf("Toplam odenecek tutar %.2f",harcama);
		}
		else {
			if(harcama>250){
				harcama = harcama-((100*0.06)+(150*0.08)+((harcama-250)*0.1));
				printf("Toplam odenecek tutar %.2f",harcama);
			}
		}
	}
	return 0;
}
