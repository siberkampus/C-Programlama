#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Klavyeden girilen c�mleyi; c�mledeki tek ve �ift konumda bulunan karakterlerin yerlerini kar��l�kl� de�i�tirerek �ifreli �ekilde yazd�ran program� yaz�n�z
	�rnek PASCAL -->APCSLA   C�mle �ift karakterse sorun olmaz
	�rnek BASIC  -->ABIS C   E�er tek ise bo�luk karakteri ile de�i�tirme i�lemi yap�l�r
	�ifrelenmi� metni ��zen program� da yaz�n�z
 */

int main(int argc, char *argv[]) {
	char metin[20];
	printf("Bir metin giriniz :");
	scanf("%s",&metin);
    char met[2] =" ";
    int i;
    if((strlen(metin))%2==1){
		strcat(metin,met);  //E�er tek sayida karakterden olu�uyorsa sonuna " " bo�luk eklenir
	}
	for(i=1;i<(strlen(metin));i+=2){
		char tmp;
		tmp = metin[i-1];
		metin[i-1]=metin[i];
		metin[i]=tmp;
	}
	
	puts(metin);
	
	for(i=1;i<(strlen(metin));i+=2){
		char tmp;
		tmp = metin[i-1];
		metin[i-1]=metin[i];
		metin[i]=tmp;
	}
	puts(metin);
	return 0;
}
