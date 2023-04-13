#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden baslangic kütlesi ile yarýlanma süresi girilen bir radyoaktif elementin belirtilen süre sonunda kaç yarýlanma geçireceðini ve kütlesinin ne kadar 
kalacaðýný hesaplayan programý yazýnýz
	yarýnlanma sayýsý (n)=(t/delta_t)
	kalan kütle (m) = m0/(2^n) 
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
