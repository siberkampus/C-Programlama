#include <stdio.h>
#include <stdlib.h>

/* Kulllanıcıdan negatif bir sayi girilene kadar tamsayilar alan, bunları bir dizidesaklayan(en fazla 30) ve girilen bu degerlerin ortalamasını bulan bir program yazınız */

int main(int argc, char *argv[]) {
	int a[30],adet=0,i=0,kontrol=1,toplam=0;
	double ortalama=0.0;
	while(kontrol && i<30){
	
	printf("%d. Sayiyi giriniz :",i+1);
	scanf("%d",&a[i]);
	if(a[i]<0){
		kontrol=0;
	}
	else{
		toplam+=a[i];
		i++;}
	
	}
	ortalama=(double)toplam/i;
	printf("Ortalama = %.2lf",ortalama);	
	return 0;
}
