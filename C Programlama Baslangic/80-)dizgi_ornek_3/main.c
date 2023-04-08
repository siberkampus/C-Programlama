#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*Kullnýcýdan isimler ve notlarýn karýþýk olarak girildiði bir dizgi alan ve bu dizginin içindeki isimleri ekranda gösteren bir program yazýnýz
	Örnek
		Bir dizgi giriniz: O12s34m56a7n
		Osman
*/

int main(int argc, char *argv[]) {
	char dizgi[100];
	printf("Bir dizgi giriniz : ");
	gets(dizgi);
	int i,len=strlen(dizgi);
	for(i=0;i<len;i++){
		if(isalpha(dizgi[i])){
			printf("%c",dizgi[i]);
		}
	}
	return 0;
}
