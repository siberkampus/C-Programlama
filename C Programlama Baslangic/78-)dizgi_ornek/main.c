#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>>
/*Kullan�c�dan bir dizgi al�n�z ve bu dizgiyi buyuk harflerle ekrana basan bir program yaz�n�z */

int main(int argc, char *argv[]) {
	char dizgi[100];
	printf("Bir dizgi giriniz : ");
	gets(dizgi);
	int len = strlen(dizgi);
	int i;
	for(i=0;i<len;i++){
		dizgi[i]=toupper(dizgi[i]);		
	}
	puts(dizgi);
	return 0;
}
