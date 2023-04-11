#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden baslangic k�tlesi ile yar�lanma s�resi girilen bir radyoaktif elementin belirtilen s�re sonunda ka� yar�lanma ge�irece�ini ve k�tlesinin ne kadar 
kalaca��n� hesaplayan program� yaz�n�z
	yar�nlanma say�s� (n)=(t/delta_t)
	kalan k�tle (m) = m0/(2^n) 
 */

int main(int argc, char *argv[]) {
	double m0, dt,t;
	printf("Baslangic kutlesini giriniz :");
	scanf("%lf",&m0);
	printf("Yarilanma suresini giriniz : ");
	scanf("%lf",&t);
	printf("Gecen sureyi giriniz :");
	scanf("%lf",&dt);
	
	double n = t/dt;
	double m = m0/pow(2,n);
	printf("Yarilanma sayisi : %lf\n",n);
	printf("Kalan kutle = %lf",m); 
	return 0;
}
