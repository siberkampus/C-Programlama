#include <stdio.h>
#include <stdlib.h>

/*
	�ncelikle kullan�c�dan iki farkl� dizgi girmesini isteyen ve daha sonra dizgilerin alfabetik 
	s�ralamaya g�re hangisinin daha �nce geldi�ini bularak ekranda g�steren program yaz�n�z
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
