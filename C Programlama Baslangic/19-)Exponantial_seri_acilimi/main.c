#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/* e^x seri acilimi a�a��daki form�lle bulunmaktad�r*/
	/*e^x = 1+ (x/1!)+((x^2)/2!)+((x^3)/3!)+((x4)/4!)......*/
	/* Denklemi 10 ad�m a��lmas� gerekiyor*/
	double x;
	double pay,payda,toplam,terim;
	int k;
	char cevap,dummy;
	
	do{
		cevap='e';
		printf("X degerini giriniz : ");
		scanf("%lf",&x);
		toplam = 1;
		pay=x;
		payda=1;
		for(k=2;k<10;k++){
			terim=pay/payda;
			toplam+=terim;
			pay*=x; //x in �ss� de�erlerinin art�r�lmas�
			payda*=k; //paydadaki faktoriyel de�erinin art�r�lmas�
		}
	printf("Toplam = %lf\n",toplam);
	printf("Baska x degeri girecek misiniz :e/E h/H ");
	scanf("%c",&dummy); //Enter karakterini bypass etmek i�in dummy(gereksiz)  karaktere enter de�eri yaz�l�r
	scanf("%c",&cevap);
	
	}
	while(cevap=='E' || cevap=='e');
	return 0;
}
