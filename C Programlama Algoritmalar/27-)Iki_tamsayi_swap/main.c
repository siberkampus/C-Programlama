#include <stdio.h>
#include <stdlib.h>

/* Klavyeden  girilen iki tamsayýnýn deðerlerini deðiþtiren programý yazýnýz
	a=7
	b=3 
	sonrarsýnda
	a=3
	b=7
*/

int main(int argc, char *argv[]) {
	int a,b;
	printf("A degerini giriniz :");
	scanf("%d",&a);
	printf("B degerini giriniz :");
	scanf("%d",&b);
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
	printf("a = %d \nb = %d",a,b);
	
	
	return 0;
}
