#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen bir tamsay�y�, kendisinden k���k en yak�n 5 in tam kat�na yuvarlayan program� yaz�n�z */

int main(int argc, char *argv[]) {
	int sayi;
	printf("Bir sayi giriniz :");
	scanf("%d",&sayi);
	//int bolum=sayi/5;    //Birinci cozum
	//sayi=bolum*5;
	//printf("yuvarlanmis hali :%d",sayi);
	sayi = ((sayi*2)/10)*5;  //ikinci cozum
	printf("Yuvarlanmis hali : %d",sayi);  
	return 0;
}
