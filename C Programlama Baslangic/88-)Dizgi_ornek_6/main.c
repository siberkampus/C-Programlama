#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Kulln�c�dan ��rencilerin isimlerini ve soyadlar�n� alan ve faha sonra isminin ba� harfini ve soyad�n� ekranda g�steren bir program yaz�n�z
	�rne�in Onur Uslu girdi olarak gelmi�se, program�n ��kt�s� O. Uslu olmal�d�r.
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
