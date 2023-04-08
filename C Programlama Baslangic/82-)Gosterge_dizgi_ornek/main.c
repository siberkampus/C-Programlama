#include <stdio.h>
#include <stdlib.h>

/* Verilen 4 adet soyadý içinde en uzununu bulmak için bir C programý yazýnýz 
	Ercil,  Selbes,  Tokdemir,  Turhan
*/
int uzunluk(char*);
int main(int argc, char *argv[]) {
	char *dizgi[5]={"Ercil","Selbes","Tokdemir","Turhan"};
	char *uzunisim;
	int i,boyut,enfazla=0;
	for(i=0;i<4;i++){
		boyut=uzunluk(dizgi[i]);
		printf("Uzunluk = %d\n",boyut);int uzunluk(char *s);
		if(boyut>enfazla){
			enfazla=boyut;
			uzunisim=dizgi[i];
		}
	}
	printf("%d uzunluk ile %s en uzun soyisimdir",enfazla,uzunisim);
	
}

int uzunluk(char *s){
	int n=0;
	for(;*s!='\0';s++){
		n++;
	}
	return n;
}
