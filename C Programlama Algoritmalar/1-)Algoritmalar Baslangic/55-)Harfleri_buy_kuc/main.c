#include <stdio.h>
#include <stdlib.h>

/*Klavyeden k���k harflerle girilen bir kelimenin harflerini ikibuyuk-ikikucuk harf �eklinde ekrana yazd�ran program� yaz�n�z */

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
