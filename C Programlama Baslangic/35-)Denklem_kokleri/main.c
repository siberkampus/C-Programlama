#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Ax^2+Bx+C þeklindeki denklein köklerini bulabilmek için öncelikle delta hesaplanmalýdýr*/
/*Delta = B^2-(4AC)*/
/*Delta>0 ise reel iki kök vardýr (-B-(kök)delta))/2A VE (-B+(kök)delta))/2A */
/*Delta =0 ise -B/2A*/
/* delta<0 ise (-B+i(kök)delta)/2a   VE (-B-i(kök)delta)/2a*/
double delta_hesapla(double a,double b,double c);
void kok_bul(double delta,double a,double b,double c);
int main(int argc, char *argv[]) {
	double A,B,C;
	double delta;
	printf("Iki bilinmeyenli denklemin A B ve C Katsayilarini giriniz: ");
	scanf("%lf%lf%lf",&A,&B,&C);
	delta=delta_hesapla(A,B,C);
	kok_bul(delta,A,B,C);
	return 0;
}

double delta_hesapla(double a,double b,double c){
	double sonuc =(b*b)-(4*a*c);
	return sonuc; 
}

void kok_bul(double delta,double a,double b,double c){
	double kok_1,kok_2;
	double pay_1,pay_2;
	if(delta>0){
		kok_1=((-b)+(sqrt(delta)))/(2.0*a);
		kok_2=((-b)-(sqrt(delta)))/(2.0*a);
		printf("%.0lfX^2+%.0lfX+%.0lf denkleminin kokleri = %.2lf ,%.2lf ",a,b,c,kok_1,kok_2);
	}
	if(delta==0){
		kok_1=((-b)/(2.0*a));
		printf("%.0lfX^2+%.0lfX+%.0lf denkleminin koku = %.2lf ",a,b,c,kok_1);
	}
	if(delta<0){
		double reel_kok= -b/(2*a);
		double img_kok=sqrt(-delta)/(2*a);
		printf("%.0lfX^2+%.0lfX+%.0lf denkleminin koku = %.2lf +%.2lfI ,%.2lf - %.2lfI",a,b,c,reel_kok,img_kok,reel_kok,img_kok);
	}
}
