#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden iki kenar� ve derece cinsinden aradaki a��s� girilen ��geninn alan�n� hesaplayan program�n� hesaplay�n�z
	Alan = a * b * sin(a)/2
	Girilen derecenin radyana �evrilmesi gerekmektedir
 */
int main(int argc, char *argv[]) {
	int kenar_1,kenar_2;
	double derece;
	printf("Kenar uzunluklari ve dereceyi giriniz :");
	scanf("%d%d%lf",&kenar_1,&kenar_2,&derece);
	derece = (derece*M_PI)/180;
	double alan = kenar_1*kenar_2*sin(derece)/2;
	printf("Ucgenin alani : %.2lf",alan);
	return 0;
}
