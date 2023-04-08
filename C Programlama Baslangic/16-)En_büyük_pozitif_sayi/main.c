#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Klavyeden girilen pozitif tam sayilarin en büyüðünün bulunmasý gerekmektedir*/
	/*Sayi girme iþlemi negatif bir sayý girilene kadar devam etmelidir*/
	int sayi,max;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	max=sayi;
	while(sayi>0){
		
		printf("Bir sayi giriniz :");
		scanf("%d",&sayi);
		if(sayi>max){
			max=sayi;
		}
	}
	printf("Girilen en buyuk tam sayi %d", max);
	return 0;
}
