#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi_1,sayi_2;
	double ortalama;
	printf("Iki sayi giriniz:");
	scanf("%d%d",&sayi_1,&sayi_2);
	ortalama = (sayi_1+sayi_2)/2.0;
	printf("Iki sayinini ortalamasi %.2f",ortalama);
	return 0;
}
