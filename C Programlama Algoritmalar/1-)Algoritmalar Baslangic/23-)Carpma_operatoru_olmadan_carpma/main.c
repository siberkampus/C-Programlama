#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen iki tamsayiyi carpma operat�r� (*) kullanmadan carp�p ekrana yazd�r�n�z */

int main(int argc, char *argv[]) {
	int a,b;
	printf("Tamsayi giriniz : ");
	scanf("%d",&a);
	printf("Tamsayi giriniz : ");
	scanf("%d",&b);
	int i,sonuc=0;
	for(i=0;i<b;i++){
		sonuc+=a;
	}
	printf("Iki sayinin carpimi : %d",sonuc);
	return 0;
}
