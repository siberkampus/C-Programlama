#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* strcat fonksiyonu bir dizginin sonuna diðer bir dizginin yapýþtýrýlmasýný saðlar
	strcat(dizgi_1,dizgi_2)
 */

int main(int argc, char *argv[]) {
	char dizgi1[12]="Iyi gunler ";
	char dizgi2[12]="Nasilsiniz";
	strcat(dizgi1,dizgi2);//dizgi2 yi dizgi1 in sonuna ekler
	puts(dizgi1);
	puts(dizgi2);
	return 0;
}
