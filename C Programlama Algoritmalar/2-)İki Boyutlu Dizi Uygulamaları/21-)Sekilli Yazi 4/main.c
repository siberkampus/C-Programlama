#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Klavyeden girilen kelimeyi dik üçgen þeklinde yazdýran programý yazýnýz

A
AN
ANK
ANKA
ANKAR
ANKARA
 */

int main(int argc, char *argv[]) {
	char kelime[20];
	printf("Kelimeyi giriniz :");
	fgets(kelime,20,stdin);
	int i,j;
	for(i=1;i<strlen(kelime);i++){
		for(j=0;j<i;j++){
			printf("%c",kelime[j]);
		}
		printf("\n");
	}
	return 0;
}
