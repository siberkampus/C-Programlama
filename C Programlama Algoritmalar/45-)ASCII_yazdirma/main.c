#include <stdio.h>
#include <stdlib.h>

/* 0-255 aras� ASCII karakterleri ekrana yazd�r�n */

int main(int argc, char *argv[]) {
	int i;
	for(i=0;i<=255;i++){
		printf("%c\t",i);
	}
	return 0;
}
