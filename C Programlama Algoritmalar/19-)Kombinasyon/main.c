#include <stdio.h>
#include <stdlib.h>

/* Klavyeden eleman sayisi girilen bir kumenin belirtilen kominasonlarýnýn sayisini hesaplayan programý yazýnýz 
	C(n,r) = (n!)/(r!*(n-r)!)
	f1=n!
	f2=r!
	f3=(n-r)!
*/

int main(int argc, char *argv[]) {
	int n,r;
	printf("Kumenin eleman sayisini giriniz : ");
	scanf("%d",&n);
	printf("Kombinasyon sayisini giriniz : ");
	scanf("%d",&r);
	int i,f1=1,f2=1,f3=1;
	for(i=1;i<=n;i++){
		f1=f1*i;
		if(i<=r){
			f2=f2*i;
		}
		if(i<=(n-r)){
			f3=f3*i;
		}
	}
	int sonuc = f1/(f2*f3);
	printf("Kombinasyon sonucu :%d",sonuc);
}
