#include <stdio.h>
#include <stdlib.h>

/* e = (2*k+2)/(2*k+1)!   K=0 dan sonsuza kadar toplanarak bulunarak */

double  faktoriyel(int n){
	double sonuc =1;
	int i;
	for(i=1;i<=n;i++){
		sonuc*=i;
	}
	return sonuc;
}

int main(int argc, char *argv[]) {
	int n,i;
	printf("Terim sayisini giriniz :");
	scanf("%d",&n);
	double e=0;
	for(i=0;i<=n;i++){
		int fak=2*i+1;
		e+=(2*i+2)/faktoriyel(fak);
	}
	printf("Sonuc = %lf",e);
	return 0;
}
