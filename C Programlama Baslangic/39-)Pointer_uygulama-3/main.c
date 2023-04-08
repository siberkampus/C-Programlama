#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x = 4;
	int *xptr =&x; //X deðiþkeninin bellekteki adresi xptr adlý pointer a kaydedildi. Xptr artýk X deðiþkenini iþaret ediyor
	printf("Xptr degiskeninin tuttugu adres = %p\n",xptr); //Xptr pointerýnýn tuttuðu adresi ekrana yazdýrýr. Yani X deðiþkeninin adresini yazdýrýr
	printf("X degiskeninin bellekteki adresi = %p",&x); //Yukarýdaki satýr ile ayný çýktýyý üretir. &x komutu ekrana X deðiþkeninin adresini yazdýrýr.
	return 0;
}
