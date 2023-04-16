#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int n,i;
	printf("N degerini giriniz :");
	scanf("%d",&n);
	double toplam=1;
	for(i=1;i<n-1;i++){
		toplam=4+1/toplam;
	}
	printf("Kok 5 = %.10lf",2+1/toplam);
	return 0;
}
