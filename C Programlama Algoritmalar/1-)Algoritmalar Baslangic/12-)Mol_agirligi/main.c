#include <stdio.h>
#include <stdlib.h>

/*Klavyeden kütlesi ve molekül agirligi girilen maddenin mol sayýsýný hesaplayan programý yazýnýz
	n = m/mA
	
	2,5 mol NaOH hazýrlamak için kaç g NaOH tartýlmalýdýr ? (1 mol NaOH’in aðýrlýðý= 23g Na +19 g O + 1g H = 40 g/1mol)
	2.5 = m/40
	m = 100 gr
*/

int main(int argc, char *argv[]) {
	double m,mA;
	printf("Maddenin kutlesini giriniz : ");
	scanf("%lf",&m);
	printf("Maddenin Molekul agirligini giriniz : ");
	scanf("%lf",&mA);
	
	double n = m/mA;
	printf("Maddenin mol sayisi = %lf",n);
	return 0;
}
