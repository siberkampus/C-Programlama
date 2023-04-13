#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden t�m kenar uzunluklar� girilen ��genin alan�n� hesaplayan program� yaz�n�z (Heron form�l�) 
	u = (a+b+c)/2
	Alan = (u*(u-a)(u-b)(u-c))^(1/2)

*/

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("Ucgenin kenar uzunluklarini sirasiyla giriniz (a,b,c):");
	scanf("%d%d%d",&a,&b,&c);
	
	double u = (a+b+c)/2;
	double alan = u*(u-a)*(u-b)*(u-c);
	alan = sqrt(alan);
	printf("Dairenin alani : %.2lf",alan);
	return 0;
}
