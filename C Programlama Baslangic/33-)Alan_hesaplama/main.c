#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu(void);
double kare(double a);
double daire(double a);
int main(int argc, char *argv[]) {
	double uzunluk,alan=0;
	int secenek=menu();
	while(secenek!=3){
			
		if(secenek==1){
		
			printf("Kenar uzunlugunu giriniz : ");
			scanf("%lf",&uzunluk);
			alan =kare(uzunluk);
			}
		if(secenek==2){
			printf("Yaricap giriniz :");
			scanf("%lf",&uzunluk);
			alan=daire(uzunluk);
		}
		printf("Alan = %.2lf\n",alan);
		secenek=menu();
	}
	if(secenek==3){
		printf("Cikis Yapiliyor****");
		return 0;
	}
	
	return 0;
}



int menu(){
	int secenek=0;
	double uzunluk;
	printf("1. Kare\n2. Daire\n3. Dur\n");
	printf("Secenegi Giriniz : ");
	scanf("%d",&secenek);
	return secenek;
	
}

double daire(double a){
	double alan=0.0;
	alan=pow(a,2.0)*PI;
	return alan;
}
double kare(double a){
	double alan=0.0;
	alan=pow(a,2);
	return alan;
}

