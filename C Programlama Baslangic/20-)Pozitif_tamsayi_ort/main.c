#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Kullanýcý tarafýndan girilen pozitif tamsayýlarýn toplamýný ve ortalamasýný hesaplayan bir C programý yazýnýz.*/
	/*Tamsayýlarýn girilmesi sýfýr sayýsý girilinceye kadar devam etmelidir. Eðer girilen sayi negatif ise program kullanýcýyý uyarmalý ve tekrar sayý girilmesi saðlanmalýdýr*/
	int sayi,toplam=0,i=0;
	double ortalama=0.0;
	do{
		printf("Bir tamsayi giriniz :");
		scanf("%d",&sayi);
	
		if(sayi>0){
			toplam+=sayi;
			i++;
		}
		if(sayi<0){
			printf("Negatif sayi girdiniz!!!\n");
		}
		if(sayi==0){
			break;
		}
	}
	while(1);
	ortalama=(double)toplam/i;
	printf("Pozitif tamsayilarin toplami = %d ve ortalamasi= %.2lf",toplam,ortalama);
	return 0;
}
