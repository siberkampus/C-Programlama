#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* strncat fonksiyonu strcat fonksiyonuna benzer þekilde çalýþýr 
	strncat(dizgi1,dizgi2,5) //Dizgi2 nin ilk 5 karakterini dizgi1 in sonuna ekler
*/

int main(int argc, char *argv[]) {
	char dizgi1[15]="Iyi Gunler ";
	char dizgi2[15]="Nasilsiniz";
	strncat(dizgi1,dizgi2,5); //dizgi2 nin ilk 5 karakterini dizgi1 in sonuna ekler
	puts(dizgi1);
	puts(dizgi2);
	return 0;
}
