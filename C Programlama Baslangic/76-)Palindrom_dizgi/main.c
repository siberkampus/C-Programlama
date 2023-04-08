#include <stdio.h>
#include <stdlib.h>
#include <string.h>>
/* Kullanýcýdan bir dizgi okuyan ve bu dizginin palindrom olup olmadýðýný kontrol eden program yazýnýz

	ornek =  kazak kelimesinin tersten yazýlýþýda kazaktýr. Bu yüzden kazak kelimesi palindromdur
*/

int main(int argc, char *argv[]) {
	char dizgi[100];
	printf("Palindrom kontrolu icin metin giriniz : ");
	gets(dizgi);
	int len = strlen(dizgi),i,j=0;
	char ters[100];
	
	for(i=len-1;i>=0;i--){ //Çözüm için strncpy fonksiyonu da kullanýlabilir
		ters[j]=dizgi[i];
		j++;
	}
	int kontrol =strcmp(dizgi,ters); //Eðer dizgiler eþit ise 0 degeri dondurecek
	if(kontrol==0){
		printf("Palindromdur!!");
	}
	else{
		printf("Palindrom degildir");
	}
	return 0;
}
