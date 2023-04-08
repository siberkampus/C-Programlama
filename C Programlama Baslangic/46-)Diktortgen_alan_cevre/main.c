#include <stdio.h>
#include <stdlib.h>

/*Dikt�rtgen alan ve �evresini hesaplayan fonksiyon yaz�n�z. Fonksiyonda dikt�rtgen en ve boyunu deger paratmesi olarak al�p,
�evre ve alan� kaynak parametresi olarak geri d�nd�r�n�z
*/
void hesapla(double *x,double *y,double *cevre,double *alan);
int main(int argc, char *argv[]) {
	double en,boy,cevre=0,alan=0;
	printf("Diktortgenin en boy uzunluklarini giriniz : ");
	scanf("%lf%lf",&en,&boy,&cevre,&alan);
	hesapla(&en,&boy,&cevre,&alan);
	printf("Alan = %.2lf\n",alan);
	printf("Cevre = %.2lf",cevre);	
	return 0;
}


void hesapla(double *x,double *y,double *cevre,double *alan){
	*alan = (*x)*(*y);
	*cevre = 2*((*x)+(*y)); 
}
