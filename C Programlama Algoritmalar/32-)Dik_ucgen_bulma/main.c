#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden girilen hipoten�s uzunlu�una g�re t�m kenarlar� tam say� ve hipoten�s� belirtilen de�erden k���k t�m dik ��genleri bulan program� yaz�n�z
	
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
