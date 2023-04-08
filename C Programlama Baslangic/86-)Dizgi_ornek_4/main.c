#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* 
	Kullanýcýdan bir dizgi alan ve daha sonra bu dizgiyi aþaðýdak iþi yapan bir foksiyona gönderen ve fonsksiyondan gelen cevabý ekranda gösteren bir program yazýnýz
	Fonksiyon programdan gelen dizgideki bütün kelimeleri ilk harfleri büyük þekline dönüþtürerek geri göndermelidir.
	Bir dizgi giriniz : C dilindeki ozel amacli sozcuklerin listesi
						C Dilindeki Ozel Amacli Sozcuklerin Listesi;
 */

#define		SIZE	100

void duzenle(char dizgi[]){
	int len = strlen(dizgi),i=0;
	dizgi[0]=toupper(dizgi[0]);
	for(;dizgi[i]!='\0';i++){
		
		if(isspace(dizgi[i])){
			dizgi[i+1]=toupper(dizgi[i+1]);
		}
		
	}
	
}
int main(int argc, char *argv[]) {
	char dizgi[SIZE];
	printf("Bir dizgi giriniz : ");
	fgets(dizgi,SIZE,stdin);
	duzenle(dizgi);
	puts(dizgi);
	return 0;
}
