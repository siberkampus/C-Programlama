#include <stdio.h>
#include <stdlib.h>

/* Klavyeden bir kenar uzunlugu ve o kenara ait yuksekli�i girilen ��genin alan�n� hesaplayan program� yaz�n�z*/

int main(int argc, char *argv[]) {
	int kenar,h;
	printf("Ucgenin kenar uzunlugu ve yuksekligini giriniz : ");
	scanf("%d%d",&kenar,&h);
	double alan = (kenar*h)/2.0;
	printf("Ucgeninin alani : %.2lf",alan);
	return 0;
}
