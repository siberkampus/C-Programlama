#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Math kütüphanesinin fonksiyonlarını kullanabilmek için Math kütüphanesini ekliyoruz
#define PI 3.14 //PI sabitini tanımladık
void alan(double a); //Double değişken alan ancak herhangi bir değer döndürmeyen fonksiyon prototopi tanımladık


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
