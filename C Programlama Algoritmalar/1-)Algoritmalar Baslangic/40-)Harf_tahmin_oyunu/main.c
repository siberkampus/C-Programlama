#include <stdio.h>
#include <stdlib.h>

/* Rasgele üretilen buyuk harfin , en fazla 10 denemede tahmin edilme oyunu programýný yazýnýz*/

int main(int argc, char *argv[]) {
	srand(time(NULL));
	char a = rand()%25+65;
	char tahmin,dummy;
	int can=10;
	while(can>0){
		printf("Harfi tahmin ediniz : ");
		scanf("%c",&tahmin);
		scanf("%c",&dummy);
		if(tahmin==a){
			printf("Tebrikler ");
			return 0;
		}
		can--;
	}
	printf("Aranan karakter : %c",a);
	return 0;
}
