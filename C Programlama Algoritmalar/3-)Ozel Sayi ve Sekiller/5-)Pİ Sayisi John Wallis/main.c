#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* John Wallis Ardýþýk çarpýmý
	PÝ/2 = (4/3)*(16/15)*(36/35).......
 */

int main(int argc, char *argv[]) {
	int n;
	printf("N sayisini giriniz :");
	scanf("%d",&n);
	double sonuc =1,sonuc1;
	int i;
	for(i=1;i<n;i++){
		sonuc1=4*pow(i,2);
		sonuc=sonuc*sonuc1/(sonuc1-1);
	}
	printf("PI = %lf",sonuc*2);
	return 0;
}
