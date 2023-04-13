#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,i;
	printf("Tamsayi : ");
	scanf("%d",&a);
	printf("Tamsayi : ");
	scanf("%d",&b);
	int sayac=0,mod;
	for(i=1;i*b<=a;i++){
		sayac++;
		mod = a-b*i;
	}
	printf("Bolum : %d",sayac);
	printf("Kalan = %d",mod);
	return 0;
}
