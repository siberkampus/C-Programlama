#include <stdio.h>
#include <stdlib.h>

/*
	Öncelikle kullanýcýdan iki farklý dizgi girmesini isteyen ve daha sonra dizgilerin alfabetik 
	sýralamaya göre hangisinin daha önce geldiðini bularak ekranda gösteren program yazýnýz
*/

int main(int argc, char *argv[]) {
	char dizgi1[100];
	char dizgi2[100];
	printf("Birinci metini giriniz :");
	gets(dizgi1);
	printf("Ikinci metini giriniz : ");
	gets(dizgi2);
	int sonuc;
	sonuc = strcmp(dizgi1,dizgi2);
	if(sonuc>0){
		printf("%s alfabetik olarak %s den once gelir",dizgi2,dizgi1 );
	}
	else{
		if(sonuc==0){
			printf("Metinler alfabetik olarak esittir.");
		}
		else{
			printf("%s alfabetik olarak %s den once gelir",dizgi1,dizgi2);
		}
	}
	return 0;
}
