#include <stdio.h>
#include <stdlib.h>

/* klavyeden girilen ondalýklý sayýyý sadeleþmeyecek þekilde rasyonel sayý olarak yazdýran programý yazýnýz  */

int main(int argc, char *argv[]) {
	double sayi;

	printf("Ondalik sayiyi giriniz :");
	scanf("%lf",&sayi);
	int deger =sayi*100;
	int i,ebob=1;
	for(i=1;i<=deger && i<=100;i++){
		if(deger%i==0 && 100%i==0){
			ebob=i;
		}
	}
	printf("%.2lf = %d / %d",sayi,deger/ebob, 100/ebob);
	return 0;
}
