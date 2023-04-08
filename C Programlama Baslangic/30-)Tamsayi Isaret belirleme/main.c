#include <stdio.h>
#include <stdlib.h>

/*Kullanýcýdan alýnan sayý pozitif ise P negatif ise N 0 ise S yazdýran bir program yazýnýz*/
/*Program için tip() adýnda deðer almayan ancak char deðer döndüren bir fonksiyon yazýnýz*/
char tip(void);//Prototip tanýmlamasý yaptýk

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
