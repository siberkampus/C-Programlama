#include <stdio.h>
#include <stdlib.h>

/* Çaðrýldýðý yerden bir isim alan ve bu ismi tekrarlayan bir þekilde aþaðýdaki örnekteki gibi yeniden yazarak ekrana basan fonksiyon yazýnýz */
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
