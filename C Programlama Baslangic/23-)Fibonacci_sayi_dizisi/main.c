#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Fibonacci sayi dizisini en basit mant�kla son iki sayinin toplami bir sonraki sayiyi olu�turur diye ifade edebiliriz*/
	/*Fibonacci sayi dizisinin ilk iki terimi 1'dir*/
	/* 1 1 (1+1) (1+(1+1)) �eklinde ilerlemektedir. Yani kendinden �nceki de�erin toplam� bir sonraki adimi olu�turur*/
	/* 1 1 2 3 5 8 13 21 34 55 89 .... �eklinde devam etmektedir*/
	/* �lk 20 fibonacci sayisini bulup ekrana yazd�ran program� yaz�n�z*/
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
