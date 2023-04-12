#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden girilen n elemanlý A dizisinin aritmetik , geometrik harmonik, ve kontraharmonik ortalamasýný hesaplayan programý yazýnýz

	aritmetik ortalama = (a1+a2+a3+a4...an)/n
	
	Geometrik ortalama = (a1*a2*a3*a4*...an)^(1/n)
	
	Harmonik ortalama = n/[(1/a1)+(1/a2)+(1/a3)+(1/a4)......(1/an)]
	
	Kontraharmonik ortalama= [a1^2+a2^2+a3^2+a4^2+....a1^n]/(a1+a2+a3+a4...an)
	
*/
/*Kodun daha anlaþýlýr olmasý için fonksiyon kullacaðým. Tercih size kalmýþ*/

double aritmetik(int dizi[],int n);
double geometrik(int dizi[],int n);
double harmonik(int dizi[],int n);
double kontraharmonik(int dizi[],int n);
int main(int argc, char *argv[]) {
	int n,i;
	int dizi[15];
	printf("Dizi kac elemanli:(N<15) ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Elemani giriniz : ");
		scanf("%d",&dizi[i]);
	}
	double art_ort,har_ort,geo_ort,kontra_ort;
	art_ort =aritmetik(dizi,n);
	geo_ort= geometrik(dizi,n);
	har_ort= harmonik(dizi,n);
	kontra_ort=kontraharmonik(dizi,n);
	printf("Aritmetik ortalama = %.2lf\n",art_ort);
	printf("Geometrik ortalama = %.2lf\n",geo_ort);
	printf("Harmonik ortalama = %.2lf\n",har_ort);
	printf("Kontraharmonik ortalama = %.2lf\n",kontra_ort);
	return 0;
}
double aritmetik(int dizi[],int n){
	double ortalama=0;
	int i;
	for(i=0;i<n;i++){
		ortalama+=dizi[i];
	}
	return ortalama/n;
}

double geometrik(int dizi[],int n){
	double ortalama =1;
	int i;
	for(i=0;i<n;i++){
		ortalama*=dizi[i];
	}
	ortalama = pow(ortalama,(1.0)/n);
	return ortalama;
}
double harmonik(int dizi[],int n){
	double ortalama=0;
	int i=0;
	for(i=0;i<n;i++){
		ortalama+=1.0/dizi[i];
	}	
	return n/ortalama;
	
}
double kontraharmonik(int dizi[],int n){
	double bolen=0,bolunen=0;
	int i;
	for(i=0;i<n;i++){
		bolunen+=pow(dizi[i],2);
		bolen+=dizi[i];
	}
	return bolunen/bolen;
}
