#include <stdio.h>
#include <stdlib.h>

/* Bilgisayarýn ürettigi 1-99 arasý bir tamsayýnýn tahmin edilme oyunu programlayýnýz */

int main(int argc, char *argv[]) {
	srand(time(NULL));
 	int sayi,random;
 	random=rand()%99;
 	int durum=1;
 	printf("1-99 arasi bir sayi tahmin ediniz:");
	scanf("%d",&sayi);
 	while(durum){
	 	if(sayi==random){
	 		printf("Tebrikler sayiyi dogru buldunuz :");
	 		durum=0;
		 }
		if(sayi<random){
		 	printf("Daha buyuk bir tamsayi giriniz :");
		 	scanf("%d",&sayi);
		 } 
		if(sayi>random){
		 	printf("Daha kucuk bir sayi giriniz :");
		 	scanf("%d",&sayi);
		 }
		 
	}

	return 0;
}
