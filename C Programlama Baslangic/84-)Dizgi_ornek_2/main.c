#include <stdio.h>
#include <stdlib.h>

/* �a�r�ld��� yerden bir isim alan ve bu ismi tekrarlayan bir �ekilde a�a��daki �rnekteki gibi yeniden yazarak ekrana basan fonksiyon yaz�n�z */
/*
	Bir isim giriniz : Gonca
	Tekrarlatan isim = GGoGonGoncGonca
*/
void  yazdir(char isim[],char sonuc[]);

int main(int argc, char *argv[]) {
	char isim[10];
	char sonuc[100];
	printf("Ismi giriniz : ");
	gets(isim);
	yazdir(isim,sonuc);
	puts(sonuc);
	return 0;
}

void  yazdir(char isim[],char sonuc[]){
	int len = strlen(isim);
	int i,j,count=0;

	for(i=0;i<len;i++){
		for(j=0;j<i+1;j++){
			sonuc[count]=isim[j];
			count++;
		}
	}
	sonuc[count]='\0';


}
