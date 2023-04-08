#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Fibonacci sayi dizisini en basit mantýkla son iki sayinin toplami bir sonraki sayiyi oluþturur diye ifade edebiliriz*/
	/*Fibonacci sayi dizisinin ilk iki terimi 1'dir*/
	/* 1 1 (1+1) (1+(1+1)) þeklinde ilerlemektedir. Yani kendinden önceki deðerin toplamý bir sonraki adimi oluþturur*/
	/* 1 1 2 3 5 8 13 21 34 55 89 .... þeklinde devam etmektedir*/
	/* Ýlk 20 fibonacci sayisini bulup ekrana yazdýran programý yazýnýz*/
	int terim_1 =1,terim_2=1,terim_3,i=0;
	printf("%d\n",terim_1);
	printf("%d\n",terim_2);
	for(i=0;i<18;i++){
		terim_3=terim_1+terim_2;
		printf("%d\n",terim_3);
		terim_1=terim_2;
		terim_2=terim_3;
	}
	return 0;
}
