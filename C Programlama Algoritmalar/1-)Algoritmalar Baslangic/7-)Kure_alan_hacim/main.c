#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden yarýçapý girilen kürenin alanýný ve hacmini hesaplayan programý yazýnýz
	Alan = 4.PI.r^2
	Hacim = 4*PI*r^3/3
	
 */

int main(int argc, char *argv[]) {
	int yaricap;
	printf("Kurenin yaricapini giriniz :");
	scanf("%d",&yaricap);
	double alan = 4*M_PI*yaricap*yaricap;
	double hacim = 4*M_PI*yaricap*yaricap*yaricap/3;
	printf("Kurenin alani : %.2lf hacmi : %.2lf",alan,hacim);
	return 0;
}
