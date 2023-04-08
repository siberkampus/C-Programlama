#include <stdio.h>
#include <stdlib.h>

/*Kullanýcýdan iki tamsayi alarak bu sayilarin toplamý farký çarpýmý ve bölümünü main fonksiyonuna döndürerek ekrana yazdýrýn*/

double toplam(double *a,double *b);
double farki(double *a,double *b);
double carpim(double *a,double *b);
double bolum(double *a,double *b);
int main(int argc, char *argv[]) {
	double sayi_1,sayi_2;
	printf("Iki sayi giriniz : ");
	scanf("%lf%lf",&sayi_1,&sayi_2);
	printf("%.2lf + %.2lf = %.2lf\n",sayi_1,sayi_2,toplam(&sayi_1,&sayi_2));
	printf("%.2lf - %.2lf = %.2lf\n",sayi_1,sayi_2,farki(&sayi_1,&sayi_2));
	printf("%.2lf * %.2lf = %.2lf\n",sayi_1,sayi_2,carpim(&sayi_1,&sayi_2));
	printf("%.2lf / %.2lf = %.2lf\n",sayi_1,sayi_2,bolum(&sayi_1,&sayi_2));
	
	return 0;
}

double toplam(double *a,double *b){
	double toplam = *a+*b;
	return toplam;
	
}
double farki(double *a,double *b){
	double fark = (*a)-(*b);
	return fark;
	
}
double carpim(double *a,double *b){
	double carpim = (*a)*(*b);
	return carpim;
	
}
double bolum(double *a,double *b){
	double bolum = (*a)/(*b);
	return bolum;
	
}
