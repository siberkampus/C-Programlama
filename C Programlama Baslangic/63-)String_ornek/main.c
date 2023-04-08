#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char kelime[10];
	printf("10 karakterden az bir kelime giriniz:");
	scanf("%s",kelime); //kelime deðiþkeni dizi olduðu için & operatörü kullanýlmaz
	printf("Kelime = %s",kelime);
	return 0;
}
