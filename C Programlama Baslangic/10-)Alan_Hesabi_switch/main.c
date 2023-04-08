#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	double kenar_1,kenar_2,alan;
	printf("Alani hesaplanacak sekli seciniz: k/K (Kare) d/D (Diktortgen)");
	scanf("%c",&ch);
	switch(ch){
		case 'K':
		case 'k':
			printf("Karenin kenar uzunlugunu giriniz :");
			scanf("%lf",&kenar_1);
			printf("Karenin alani = %.2f",kenar_1*kenar_1);
			break;
		case 'd':
		case 'D':
			printf("Diktorgenin iki kenar uzunlugunu giriniz: ");
			scanf("%lf%lf",&kenar_1,&kenar_2);
			printf("Diktortgenin alani = %.2f",kenar_1*kenar_2);
			break;
		default:
			printf("Yanlis girdi yaptiniz!!!");
	}
	return 0;
}
