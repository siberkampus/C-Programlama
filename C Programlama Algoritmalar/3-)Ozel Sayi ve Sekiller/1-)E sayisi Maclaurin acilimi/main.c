#include <stdio.h>
#include <stdlib.h>

/* Ýnternetten E (e) sayisi maclaurin açýlýmýna bakabilirsiniz */


double factorial(int n){
	int i;
	double sonuc=1.0;
	for(i=1;i<=n;i++){
		sonuc*=i;
	}
	return sonuc;
}
double ustel(int n,int x){
	double sonuc =pow(x,n);
	return sonuc;
}
int main(int argc, char *argv[]) {
	int x,n,i;
	printf("X sayisini giriniz :");
	scanf("%d",&x);
	printf("N sayisini giriniz :");
	scanf("%d",&n);
	double  sonuc=0;
	for(i=0;i<n;i++){
		sonuc+=ustel(i,x)/factorial(i);
	}
	printf("Sonuc = %.2lf",sonuc);
	return 0;
}
