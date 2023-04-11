#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden yaricapi ve derece cinsinden açýsý girilen daire diliminin alanýný hesaplayan program
	Alan = (aci*PI*r^3)360
*/

int main(int argc, char *argv[]) {
	int yaricap,derece;
	printf("Daire yaricapini giriniz :");
	scanf("%d",&yaricap);
	
	printf("Dairenin alani hesaplanacak aciyi giriniz : ");
	scanf("%d",&derece);
	double alan = (derece*M_PI*(pow(yaricap,2)))/360;
	printf("Dairenin Alani : %.2lf",alan);
	return 0;
}
