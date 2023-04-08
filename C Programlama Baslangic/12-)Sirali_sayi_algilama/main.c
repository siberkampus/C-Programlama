#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Kullanici tarafindan girilen 4 tam sayinin artan ya da azalan sirada olup olmadiðini 
	belirlemelidir. Eðer sayilar sýralý ise "Sayilar siralidir" eðer deðilse "Sayilar sirali deðildir"
	çýktýsýný vermelidir */
	int a,b,c,d;
	printf("4 adet tamsayi giriniz : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>=b && b>=c && c>=d){
		printf("Sayilar azalan siradadir");
	}
	else {
		if(a<=b && b<=c && c<=d){
			printf("Sayilar artan siradadir");
		}
		else{
			printf("Sayilar sirali degildir");
		}
	}
	
	return 0;
}
