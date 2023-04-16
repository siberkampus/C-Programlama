#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int x,n;
	printf("X degeirini giriniz :");
	scanf("%d",&x);
	printf("N degerini giriniz :");
	scanf("%d",&n);
	
	double sonuc = pow(1+(x/(double)n),n);
	printf("Sonuc = %lf",sonuc);
	return 0;
}
