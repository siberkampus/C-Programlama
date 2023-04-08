#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* Bir dizgiyi girdi olarak alan bir fonksiyon yaz�n�z. E�er bu dizgi i�indeki b�y�k harflerin sayisi,
 k���k harflerin sayisina e�it ise fonksiyon 1 de�erini di�er durumlarda 0 de�erini d�nd�rmelidir
 */
int kontrol(char dizgi[]){
	int len = strlen(dizgi),i,upper=0,lower=0;
	for(i=0;i<len;i++){
		if(isupper(dizgi[i])){
			upper++;
		}
		if(islower(dizgi[i])){
			lower++;
		}
	}
	if(upper==lower){
		return 1;
	}
	else{
		return 0;
	}
}
int main(int argc, char *argv[]) {
	char dizgi[100];
	int sonuc;
	printf("Dizgiyi giriniz : ");
	fgets(dizgi,100,stdin);
	sonuc = kontrol(dizgi);
	if(sonuc==1){
		printf("Buyuk harf sayisi kucuk harf sayisina esittir.");
	}
	else{
		printf("Buyuk harf sayisi kucuk harf sayisindan farklidir");
	}
	return 0;
}
