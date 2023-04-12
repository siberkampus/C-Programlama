#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen bir cümle içinde yine klavyeden girilen bir kelimeyi arattýran programý yazýnýz */

int main(int argc, char *argv[]) {
	char dizgi[100],kelime[100];
	printf("Cumleyi giriniz : ");
	gets(dizgi);
	printf("Aranacak kelimeyi giriniz :");
	gets(kelime);
	int index=-1;
	int i,j;
	int sayac=0,kontrol=0;
	for(i=0;i<strlen(dizgi);i++){
		sayac=0;
		for(j=0;j<strlen(kelime);j++){
			if(dizgi[i+j]!=kelime[j]){
				sayac++;
			}
			if(j==strlen(kelime)-1 && sayac==0){
				printf("Kelime bulundu");
				kontrol++;
			}
		}
	}
	if(kontrol==0){
		printf("Kelime bulunamadi");
	}
	return 0;
}
