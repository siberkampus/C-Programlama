#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/* Bir ma�aza yap�lan al��veri� tutar�na g�re indirim yapmaktad�r*/
	/* 0-100 TL Aras� al��veri� i�in  %4 indirim uygulanmaktad�r*/
	/*101-250 Tl aras� al��veri� i�im 100 TL'ye kadar %5 100 TL'nin �st� i�in %7 indirim uygulanmaktad�r*/
	/*251 Tl ve �st� i�in 100TL'ye kadar %6 100 TL den 250 TL'ye kadar i�in %8 250 TL �st� i�in %10 indirim uygulanmaktad�r*/
	
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
