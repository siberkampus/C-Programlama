#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen iki pozitif tamsayýnýn ebob ve ekokunu bulan programý yazýnýz */

int main(int argc, char *argv[]) {
	int a,b;
	printf("Tamsayi giriniz : ");
	scanf("%d",&a);
	printf("Tamsayi giriniz : ");
	scanf("%d",&b);
	int ebob=0,i,ekok=0;
	for(i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			ebob=i;
		}
	}
	for(i=1;i<=a*b;i++){
		if(i%a == 0 && i%b == 0){
			ekok=i;
			i=a*b+1;
			
		}
	}
	printf("Ebob : %d\n",ebob);
	printf("Ekok : %d\n",ekok);
	return 0;
}
