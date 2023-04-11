#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden iki kenarý ve bunlarýn arasýndaki derece cinsinden açýsý girilen üçgenin üçüncü kenarýný hesaplayan programý yazýnýz
	c'2 =a^2+b^2-2*a*b*cos(x)
*/

int main(int argc, char *argv[]) {
	int kenar1,kenar2,derece;
	printf("Iki kenar uzunlugu ve aralarindaki aciyi giriniz : ");
	scanf("%d%d%d",&kenar1,&kenar2,&derece);
	double radyan = (derece*M_PI)/180;
	printf("%lf\n",radyan);
	double kenar3 = pow(kenar1,2)+pow(kenar2,2)-(2*kenar1*kenar2*cos(radyan));
	printf("Ucgenin diger kenar uzunlugu : %.2lf",sqrt(kenar3));
	return 0;
}
