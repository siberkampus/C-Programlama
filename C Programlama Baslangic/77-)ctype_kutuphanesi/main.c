#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Karakterler ilgili i�lemler yapabilmek i�in ctype k�t�phanesini ekliyoruz



int main(int argc, char *argv[]) {
	char k = 'A';
	int sonuc = isalpha(k); //E�er k de�i�keni bir harf ise 0 dan farkl� bir de�er d�nd�r�r
	printf("%d\n",sonuc);
	
	k='1';
	sonuc = isdigit(k); //E�er k de�i�keni bir sayi ise 0 dan farkl� bir de�er d�nd�r�r.
	printf("%d\n",sonuc);	
	
	k='a';
	sonuc = islower(k); //E�er k de�i�keni k���k bir harf ise 0 dan farkl� bir de�er d�nd�r�r.
	printf("%d\n",sonuc);	
	
	k='A';
	sonuc=isupper(k);//E�er k de�i�keni b�y�k bir harf ise 0 dan farkl� bir de�er d�nd�r�r
	printf("%d\n",sonuc);
	
	k=' '; //Bo�luk karakteri
	sonuc=isspace(k); //E�er k de�i�keni bo�luk karakteri ve TAB karakteri gibi bir karakter ise 0 dan farkl� bir de�er d�nd�r�r
	printf("%d\n",sonuc);

	k='A';
	k=tolower(k); //Buyuk harften olu�an k de�i�kenini k���k harfe �evirir
	printf("%c\n",k);
	
	k=toupper(k); //Kucuk harften olu�an k de�i�keinin b�y�k harfe �evirir
	printf("%c",k);
	return 0;
}
