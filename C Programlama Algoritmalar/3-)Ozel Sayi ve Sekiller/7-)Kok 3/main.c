#include <stdio.h>
#include <stdlib.h>

/* Kok 3 sonsuz kesir ile hesaplanabilmektedir*/

int main(int argc, char *argv[]) {
	int n;
	printf("N degerini giriniz :");
	scanf("%d",&n);
	double toplam = 1,i;
	for(i=1;i<n-1;i++){
		toplam=1+1/(2.0+1.0/toplam);
	}
	printf("kok 3 = %lf",1+1/toplam);
	return 0;
}
