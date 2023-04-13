#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden iki kenarý ve derece cinsinden aradaki açýsý girilen üçgeninn alanýný hesaplayan programýný hesaplayýnýz
	Alan = a * b * sin(a)/2
	Girilen derecenin radyana çevrilmesi gerekmektedir
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
