#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen bir tamsayýyý, kendisinden küçük en yakýn 5 in tam katýna yuvarlayan programý yazýnýz */

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
