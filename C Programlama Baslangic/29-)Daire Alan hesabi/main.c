#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Math kütüphanesinin fonksiyonlarýný kullanabilmek için Math kütüphanesini ekliyoruz
#define PI 3.14 //PI sabitini tanýmladýk
void alan(double a); //Double deðiþken alan ancak herhangi bir deðer döndürmeyen fonksiyon prototopi tanýmladýk


int main(int argc, char *argv[]) {
	double yaricap=0.0;
	printf("Dairenin yaricapini giriniz : ");
	scanf("%lf",&yaricap);
	alan(yaricap);
	return 0;
}

void alan(double a){
	double alan=0.0;
	alan=pow(a,2)*PI;
	printf("%.2lf Yaricapli dairenin alani= %.2lf",a,alan);	
}
