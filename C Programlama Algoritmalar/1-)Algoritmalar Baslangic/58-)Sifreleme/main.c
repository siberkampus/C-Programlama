#include <stdio.h>
#include <stdlib.h>

/* Klavyeden k���k harflerle girilen kelimenin t�m harflerini b�y�terek ve alfabedeki "A B C .....X Y Z" harfleri yerine "10 11 12 ..... 33 34 35 yazan program� yaz�n�z"*/

int main(int argc, char *argv[]) {
	char metin[20];
	printf("Kelimeyi kucuk harflerle giriniz : ");
	scanf("%s",&metin);
	int i;
	for(i=0;i<strlen(metin);i++){
		metin[i]=metin[i]-32;
	}
	for(i=0;i<strlen(metin);i++){
		printf("%d",metin[i]-55);
	}
	printf("\n");
	puts(metin);
	
	return 0;
}
