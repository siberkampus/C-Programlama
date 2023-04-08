#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>>
/*Kullanýcýdan bir dizgi alýnýz ve bu dizgiyi buyuk harflerle ekrana basan bir program yazýnýz */

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
