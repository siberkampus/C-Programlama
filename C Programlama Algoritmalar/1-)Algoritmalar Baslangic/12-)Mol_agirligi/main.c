#include <stdio.h>
#include <stdlib.h>

/*Klavyeden k�tlesi ve molek�l agirligi girilen maddenin mol say�s�n� hesaplayan program� yaz�n�z
	n = m/mA
	
	2,5 mol NaOH haz�rlamak i�in ka� g NaOH tart�lmal�d�r ? (1 mol NaOH�in a��rl���= 23g Na +19 g O + 1g H = 40 g/1mol)
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
