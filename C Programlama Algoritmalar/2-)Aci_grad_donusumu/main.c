#include <stdio.h>
#include <stdlib.h>

/* Klavyeden derece cinsinden girilen a��y� Grad cinsine �eviren program� yaz�n�z
	D/180 = G/200
 */

int main(int argc, char *argv[]) {
	int derece;
	printf("Derece: ");
	scanf("%d",&derece);
	double grad = (derece*200)/180;
	printf("%d derece %.2lf Grad a esittir.",derece,grad);
	return 0;
}
