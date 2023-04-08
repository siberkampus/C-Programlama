#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/* e^x seri acilimi aþaðýdaki formülle bulunmaktadýr*/
	/*e^x = 1+ (x/1!)+((x^2)/2!)+((x^3)/3!)+((x4)/4!)......*/
	/* Denklemi 10 adým açýlmasý gerekiyor*/
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
			pay*=x; //x in üssü deðerlerinin artýrýlmasý
			payda*=k; //paydadaki faktoriyel deðerinin artýrýlmasý
		}
	printf("Toplam = %lf\n",toplam);
	printf("Baska x degeri girecek misiniz :e/E h/H ");
	scanf("%c",&dummy); //Enter karakterini bypass etmek için dummy(gereksiz)  karaktere enter deðeri yazýlýr
	scanf("%c",&cevap);
	
	}
	while(cevap=='E' || cevap=='e');
	return 0;
}
