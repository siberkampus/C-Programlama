#include <stdio.h>
#include <stdlib.h>
#include <string.h>>
/* Kullan�c�dan bir dizgi okuyan ve bu dizginin palindrom olup olmad���n� kontrol eden program yaz�n�z

	ornek =  kazak kelimesinin tersten yaz�l���da kazakt�r. Bu y�zden kazak kelimesi palindromdur
*/

int main(int argc, char *argv[]) {
	char dizgi[100];
	printf("Palindrom kontrolu icin metin giriniz : ");
	gets(dizgi);
	int len = strlen(dizgi),i,j=0;
	char ters[100];
	
	for(i=len-1;i>=0;i--){ //��z�m i�in strncpy fonksiyonu da kullan�labilir
		ters[j]=dizgi[i];
		j++;
	}
	int kontrol =strcmp(dizgi,ters); //E�er dizgiler e�it ise 0 degeri dondurecek
	if(kontrol==0){
		printf("Palindromdur!!");
	}
	else{
		printf("Palindrom degildir");
	}
	return 0;
}
