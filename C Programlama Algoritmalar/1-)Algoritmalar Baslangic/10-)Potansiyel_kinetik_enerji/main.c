#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden kütlesi,hýzý ve yerden yüksekliði girilen maddenin potansiyel ve kinetik enerjisini hesaplayan programý yazýnýz
	Ep = m*g*h
	Ek = (1/2)*m*V^2
 */
#define 	G 	9.8
int main(int argc, char *argv[]) {
	int m,V,h;
	printf("Cismin kutlesini giriniz : ");
	scanf("%d",&m);
	printf("Cismin hizini giriniz : ");
	scanf("%d",&V);
	printf("Cismin yuksekligini giriniz : ");
	scanf("%d",&h);
	double potansiyel = m*G*h;
	double kinetik = (0.5)*m*(pow(V,2));
	printf("Cismin kinetik enerjisi : %.2lf\n",kinetik);
	printf("Cismin potansiyel enerjisi : %.2lf",potansiyel);
	
	return 0;
}
