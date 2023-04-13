#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen sayinin tamsayi olup olmadýðýný kontrol eden program yazýnýz */

int main(int argc, char *argv[]) {
	double sayi;
	printf("Bir sayi giriniz :");
	scanf("%lf",&sayi);
	
	int tam=sayi;
	double ondalik=sayi-tam;
	if(ondalik==0){
		printf("Tam sayidir");
	}
	else{
		printf("Tamsayi degildir");

	}
	return 0;
}
