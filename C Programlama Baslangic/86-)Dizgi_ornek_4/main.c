#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* 
	Kullan�c�dan bir dizgi alan ve daha sonra bu dizgiyi a�a��dak i�i yapan bir foksiyona g�nderen ve fonsksiyondan gelen cevab� ekranda g�steren bir program yaz�n�z
	Fonksiyon programdan gelen dizgideki b�t�n kelimeleri ilk harfleri b�y�k �ekline d�n��t�rerek geri g�ndermelidir.
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
