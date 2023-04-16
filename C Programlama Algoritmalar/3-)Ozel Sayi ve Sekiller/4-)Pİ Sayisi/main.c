#include <stdio.h>
#include <stdlib.h>

/* PÝ = kök12*{1- [1/3*3]+[1/5*9]- [1/7*27] ..........} 
Girilen n sayisina göre Pi sayýsýný hesaplayab programý yazýnýz
Ýnternetten "Madhava of Sangamagrama" seri toplamý olarak aratýp fonksiyona bakabilirisniz
*/

int main(int argc, char *argv[]) {
	int n;
	printf("N degerini giriniz :");
	scanf("%d",&n);
	double sonuc=0;
	int i;
	for(i=0;i<n-1;i++){
		sonuc+=pow(-1,i)/((2*i+1)*pow(3,i));
	}
	sonuc=sonuc*sqrt(12);
	printf("%lf",sonuc);
	return 0;
}
