#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Kullan�c� taraf�ndan girilen pozitif tamsay�lar�n toplam�n� ve ortalamas�n� hesaplayan bir C program� yaz�n�z.*/
	/*Tamsay�lar�n girilmesi s�f�r say�s� girilinceye kadar devam etmelidir. E�er girilen sayi negatif ise program kullan�c�y� uyarmal� ve tekrar say� girilmesi sa�lanmal�d�r*/
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
