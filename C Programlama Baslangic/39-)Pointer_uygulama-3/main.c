#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x = 4;
	int *xptr =&x; //X de�i�keninin bellekteki adresi xptr adl� pointer a kaydedildi. Xptr art�k X de�i�kenini i�aret ediyor
	printf("Xptr degiskeninin tuttugu adres = %p\n",xptr); //Xptr pointer�n�n tuttu�u adresi ekrana yazd�r�r. Yani X de�i�keninin adresini yazd�r�r
	printf("X degiskeninin bellekteki adresi = %p",&x); //Yukar�daki sat�r ile ayn� ��kt�y� �retir. &x komutu ekrana X de�i�keninin adresini yazd�r�r.
	return 0;
}
