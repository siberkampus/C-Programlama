#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*Kulln�c�dan isimler ve notlar�n kar���k olarak girildi�i bir dizgi alan ve bu dizginin i�indeki isimleri ekranda g�steren bir program yaz�n�z
	�rnek
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
