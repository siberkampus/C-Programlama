#include <stdio.h>
#include <stdlib.h>

/* Kullanýcýdan öðrenci isimlerini ve notlarýný bir dizgi olarak alan ve bu dizgiden sadece notlardan oluþan yeni bir dizgi oluþturup ekranda gösteren programý yazýnýz
	Ayse90 Ahmet20 Emre40 Ali10 Eda89
	9020401089
*/

int main(int argc, char *argv[]) {
	char dizgi[100];
	printf("Ogrenci isimleri ve notlarini giriniz : ");
	fgets(dizgi,100,stdin);
	int len=strlen(dizgi),i,j=0;
	char sayilar[100];
	for(i=0;i<len;i++){
		if(isdigit(dizgi[i])){
			sayilar[j]=dizgi[i];
			j++;
		}
	}
	puts(sayilar);
	return 0;
}
