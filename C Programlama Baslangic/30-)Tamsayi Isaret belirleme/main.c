#include <stdio.h>
#include <stdlib.h>

/*Kullan�c�dan al�nan say� pozitif ise P negatif ise N 0 ise S yazd�ran bir program yaz�n�z*/
/*Program i�in tip() ad�nda de�er almayan ancak char de�er d�nd�ren bir fonksiyon yaz�n�z*/
char tip(void);//Prototip tan�mlamas� yapt�k

int main(int argc, char *argv[]) {
	printf("Girilen sayinin tipi = %c",tip());
	return 0;
}

char tip(void){
	int sayi;
	char ch;
	printf("Bir tamsayi giriniz : ");
	scanf("%d",&sayi);
	if(sayi>0){
		ch='P';
	}
	if(sayi<0){
		ch='N';	
	}
	if(sayi==0){
		ch='S';
	}
	return ch;
	
}
