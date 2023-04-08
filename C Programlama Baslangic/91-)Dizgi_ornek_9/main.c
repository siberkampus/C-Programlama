#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* Bir dizgiyi girdi olarak alan bir fonksiyon yazýnýz. Eðer bu dizgi içindeki büyük harflerin sayisi,
 küçük harflerin sayisina eþit ise fonksiyon 1 deðerini diðer durumlarda 0 deðerini döndürmelidir
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
