#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden girilen hipotenüs uzunluðuna göre tüm kenarlarý tam sayý ve hipotenüsü belirtilen deðerden küçük tüm dik üçgenleri bulan programý yazýnýz
	
*/

int main(int argc, char *argv[]) {
	int hipo;
	printf("Hipotenus uzunlugu giriniz : ");
	scanf("%d",&hipo);
	double sonuc=0;
	int a,b;
	for(a=1;a<hipo;a++){
		for(b=1;b<hipo;b++){
			sonuc =sqrt(pow(a,2)+pow(b,2));
			int tam=sonuc;
			if((sonuc-tam)==0 && sonuc<hipo){
				printf("%d ve %d dik ucgeninin hipoetenusu %d den kucuktur\n",a,b,hipo);
			}
		}
	}
	return 0;
}
