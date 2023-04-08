#include <stdio.h>
#include <stdlib.h>

/*Aþsaðýdaki programýn çýktýsý bulmaya çalýþýn*/

int main(int argc, char *argv[]) {
	double a[]={3.9, 2.4, 7.7, 1.1};
	double *p; //p tek baþýna adress tutar *p ise deðer tutar &p ise p pointerýnýn kendi adresinin tutar
	
	p=a; //Burada artýk pointer dizinin ilk elemanýný iþaret ediyor
	
	printf("%f\n",*a); //Dizinin ilk elemanýný yazdýrýr
	printf("%f\n",a[0]); //Dizinin ilk elemanuný yazdýrýr
	printf("%f\n",*p); //Dizinin ilk elemanýný yazdýrýr
	printf("%f\n",p[0]); //Dizinin ilk elemanýnýn yazdýrýr
	printf("%f\n",a[1]); //Dizinin ikinci elemanýný yazdýrýr
	return 0;
}
