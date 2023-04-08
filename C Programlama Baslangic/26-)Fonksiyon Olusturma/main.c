#include <stdio.h>
#include <stdlib.h>

int topla(int a); //Fonksiyonun prototopi

int main(int argc, char *argv[]) {//Main Fonksiyonu
	int sayi;
	printf("Bir tamsayi giriniz : ");
	scanf("%d",&sayi);
	if(sayi<=0){
		printf("Sifir ya da Negatif Sayi girdiniz!!!");
		return 0; //E�er negatif ya da 0 de�eri girilirse program sonlan�r
	}
	printf("1-%d arasindaki tam sayilarin toplami= %d",sayi,topla(sayi)); //Fonskiyonun d�nd�rd��� de�eri printf fonksiyonu i�erisinnde yazd�r�r
	return 0;
}
int topla(int a){ //Olu�turdu�umuz topla fonksiyonu. Bu fonksiyon integer t�r�nde bir a de�eri almakta ve sonu� olarak integer bir de�er d�nd�rmektedir.
	int toplam=0,i;
	for(i=1;i<=a;i++){
		toplam+=i;
	}
	return toplam;  //�a�r�ld��� fonksiyona toplam de�i�kenini d�nd�r�r
}
