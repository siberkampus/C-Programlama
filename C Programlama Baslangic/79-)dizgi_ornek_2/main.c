#include <stdio.h>
#include <stdlib.h>

/* kullanýcýdan alýnan dizginin buyuk harflerini küçük harflerle deðiþtiren bir program yazýnýz  */

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
