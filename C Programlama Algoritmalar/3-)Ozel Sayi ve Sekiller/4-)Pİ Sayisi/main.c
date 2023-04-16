#include <stdio.h>
#include <stdlib.h>

/* P� = k�k12*{1- [1/3*3]+[1/5*9]- [1/7*27] ..........} 
Girilen n sayisina g�re Pi say�s�n� hesaplayab program� yaz�n�z
�nternetten "Madhava of Sangamagrama" seri toplam� olarak arat�p fonksiyona bakabilirisniz
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
