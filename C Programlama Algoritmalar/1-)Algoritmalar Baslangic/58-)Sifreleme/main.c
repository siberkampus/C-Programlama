#include <stdio.h>
#include <stdlib.h>

/* Klavyeden küçük harflerle girilen kelimenin tüm harflerini büyüterek ve alfabedeki "A B C .....X Y Z" harfleri yerine "10 11 12 ..... 33 34 35 yazan programý yazýnýz"*/

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
