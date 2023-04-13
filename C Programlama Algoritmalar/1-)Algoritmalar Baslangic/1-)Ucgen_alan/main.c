#include <stdio.h>
#include <stdlib.h>

/* Klavyeden bir kenar uzunlugu ve o kenara ait yuksekliði girilen üçgenin alanýný hesaplayan programý yazýnýz*/

int main(int argc, char *argv[]) {
	int kenar,h;
	printf("Ucgenin kenar uzunlugu ve yuksekligini giriniz : ");
	scanf("%d%d",&kenar,&h);
	double alan = (kenar*h)/2.0;
	printf("Ucgeninin alani : %.2lf",alan);
	return 0;
}
