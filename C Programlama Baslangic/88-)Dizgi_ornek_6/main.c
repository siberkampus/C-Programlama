#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Kullnýcýdan öðrencilerin isimlerini ve soyadlarýný alan ve faha sonra isminin baþ harfini ve soyadýný ekranda gösteren bir program yazýnýz
	Örneðin Onur Uslu girdi olarak gelmiþse, programýn çýktýsý O. Uslu olmalýdýr.
*/
#define 	SIZE 	100
int main(int argc, char *argv[]) {
	char dizgi[SIZE];
	char yeni_dizgi[SIZE];
	int i;
	char durum='D',dummy;
	while(durum=='D' || durum=='d'){
	
		printf("Ogrencilerin adlarini ve soyadlarini sirasiyla giriniz : ");
		fgets(dizgi,SIZE,stdin);
		strncpy(yeni_dizgi,dizgi,1);
		int index=0;
		while(!isspace(dizgi[index])){
			index++;
		}
		yeni_dizgi[1]='.';
		yeni_dizgi[2]=' ';
		strcpy(&yeni_dizgi[3],&dizgi[index+1]);
		puts(yeni_dizgi);
		printf("Devam D/d : ");
		scanf("%c",&durum);
		scanf("%c",&dummy);
		
	}
	
	return 0;
}
