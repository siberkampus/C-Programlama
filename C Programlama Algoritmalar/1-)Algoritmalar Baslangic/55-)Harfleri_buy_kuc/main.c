#include <stdio.h>
#include <stdlib.h>

/*Klavyeden küçük harflerle girilen bir kelimenin harflerini ikibuyuk-ikikucuk harf þeklinde ekrana yazdýran programý yazýnýz */

int main(int argc, char *argv[]) {
	char dizgi[100];
	printf("Bir kelime giriniz :");
	scanf("%s",&dizgi);
	int i;
	for(i=0;i<strlen(dizgi);i++){
		if(i%4>=2){
			printf("%c",dizgi[i]-32);
		}
		else{
			printf("%c",dizgi[i]);
		}
	}
	return 0;
}
