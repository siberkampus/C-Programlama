#include <stdio.h>
#include <stdlib.h>

/* strlen fonksiyonu string ifadenin kaç karakter olduðunu hesaplar */

int main(int argc, char *argv[]) {
	int uzunluk;
	char dizgi[]="Merhaba Dunya";
	uzunluk=strlen(dizgi);//Bosluk karakteri de karakter olarak sayilmaktadir
	printf("%s ifadesi %d karakter icermektedir",dizgi,uzunluk);
	return 0;
}
