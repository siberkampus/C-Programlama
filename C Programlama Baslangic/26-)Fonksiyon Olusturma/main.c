#include <stdio.h>
#include <stdlib.h>

int topla(int a); //Fonksiyonun prototopi

int main(int argc, char *argv[]) {//Main Fonksiyonu
	int sayi;
	printf("Bir tamsayi giriniz : ");
	scanf("%d",&sayi);
	if(sayi<=0){
		printf("Sifir ya da Negatif Sayi girdiniz!!!");
		return 0; //Eðer negatif ya da 0 deðeri girilirse program sonlanýr
	}
	printf("1-%d arasindaki tam sayilarin toplami= %d",sayi,topla(sayi)); //Fonskiyonun döndürdüðü deðeri printf fonksiyonu içerisinnde yazdýrýr
	return 0;
}
int topla(int a){ //Oluþturduðumuz topla fonksiyonu. Bu fonksiyon integer türünde bir a deðeri almakta ve sonuç olarak integer bir deðer döndürmektedir.
	int toplam=0,i;
	for(i=1;i<=a;i++){
		toplam+=i;
	}
	return toplam;  //Çaðrýldýðý fonksiyona toplam deðiþkenini döndürür
}
