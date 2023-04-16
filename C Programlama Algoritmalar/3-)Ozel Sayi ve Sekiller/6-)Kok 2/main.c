#include <stdio.h>
#include <stdlib.h>

/*kök 2 = 1+(1/[2+(1/{2+1/.....})])  Þeklinde devam ediyor*/

int main(int argc, char *argv[]) {
	int n,i;
	printf("Bolme sayisini giriniz :");
	scanf("%d",&n);
	
	double sonuc=1;
	for(i=0;i<n;i++){
		sonuc=2+(1/sonuc);
	}
	printf("Kok 2 = %lf",1+1/sonuc);
	return 0;
}
