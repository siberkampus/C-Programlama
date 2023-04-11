#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden köþegen uzunluklarý ve arasýndaki derece cinsinden açýsý girilen dörtgenin alanýný hesaplayan programý yazýnýz
	Alan=kosegen1*kosgen2*sin(x)/2
 */

int main(int argc, char *argv[]) {
	int kosegen1,kosegen2,derece;
	printf("Dortgenin 1. kosegen uzunlugu :");
	scanf("%d",&kosegen1);
	printf("Dortgenin 2. kosegen uzunlugu :");
	scanf("%d",&kosegen2);
	printf("Dortgenin kosegenler arasindaki aci :");
	scanf("%d",&derece);
	double radyan = (derece*M_PI)/180;
	double alan = kosegen1*kosegen2*sin(radyan)/2;
	printf("Dortgenin alani : %.2lf",alan);
	
	return 0;
}
