#include <stdio.h>
#include <stdlib.h>

/* kullan�c�dan al�nan dizginin buyuk harflerini k���k harflerle de�i�tiren bir program yaz�n�z  */

int main(int argc, char *argv[]) {
	char dizgi[100];
	printf("Bir metin giriniz : ");
	gets(dizgi);
	int i,len = strlen(dizgi);
	for(i=0;i<len;i++){
		dizgi[i]=tolower(dizgi[i]);
	}
	puts(dizgi);
	return 0;
}
