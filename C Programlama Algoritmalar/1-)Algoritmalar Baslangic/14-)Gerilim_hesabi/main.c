#include <stdio.h>
#include <stdlib.h>

/* Klavyeden bir iletkenin direnciyle i�inden akan ak�m� girildi�inde, u�lar�ndaki gerilimi hesaplayan program
	V=I*R
*/

int main(int argc, char *argv[]) {
	double R,I;
	printf("Iletkenin direncini giriniz: ");
	scanf("%lf",&R);
	printf("Iletkenin icinden akan akimi giriniz :");
	scanf("%lf",&I);
	double V = I*R;
	printf("Gerilim = %lf",V);
	
	return 0;
}
