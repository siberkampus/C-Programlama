#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Math k�t�phanesinin fonksiyonlar�n� kullanabilmek i�in Math k�t�phanesini ekliyoruz
#define PI 3.14 //PI sabitini tan�mlad�k
void alan(double a); //Double de�i�ken alan ancak herhangi bir de�er d�nd�rmeyen fonksiyon prototopi tan�mlad�k


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
