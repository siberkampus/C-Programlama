#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Karakterler ilgili iþlemler yapabilmek için ctype kütüphanesini ekliyoruz



int main(int argc, char *argv[]) {
	char k = 'A';
	int sonuc = isalpha(k); //Eðer k deðiþkeni bir harf ise 0 dan farklý bir deðer döndürür
	printf("%d\n",sonuc);
	
	k='1';
	sonuc = isdigit(k); //Eðer k deðiþkeni bir sayi ise 0 dan farklý bir deðer döndürür.
	printf("%d\n",sonuc);	
	
	k='a';
	sonuc = islower(k); //Eðer k deðiþkeni küçük bir harf ise 0 dan farklý bir deðer döndürür.
	printf("%d\n",sonuc);	
	
	k='A';
	sonuc=isupper(k);//Eðer k deðiþkeni büyük bir harf ise 0 dan farklý bir deðer döndürür
	printf("%d\n",sonuc);
	
	k=' '; //Boþluk karakteri
	sonuc=isspace(k); //Eðer k deðiþkeni boþluk karakteri ve TAB karakteri gibi bir karakter ise 0 dan farklý bir deðer döndürür
	printf("%d\n",sonuc);

	k='A';
	k=tolower(k); //Buyuk harften oluþan k deðiþkenini küçük harfe çevirir
	printf("%c\n",k);
	
	k=toupper(k); //Kucuk harften oluþan k deðiþkeinin büyük harfe çevirir
	printf("%c",k);
	return 0;
}
