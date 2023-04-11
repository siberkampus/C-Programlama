#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Yerden yüksekliði ve ilk hýzý girilen cismin havada kalma süresini ve yatayda alacaðý yolu ve yere çarpma hýzýný hesaplayan programý yazýnýz
	V=	(Vx^2 + Vy^2)^(1/2);
	h=(1/2)*g*t^2
	x = V0*t
	VY = g*t
*/
#define 	G	9.8
int main(int argc, char *argv[]) {
	int V0,h;
	printf("Cismin ilk hizini giriniz : ");
	scanf("%d",&V0);
	printf("Cismin yerden yuksekligini giriniz : ");
	scanf("%d",&h);
	double t =(h*2)/G;
	t = sqrt(t);
	printf("Havada kalma suresi = %.3lf\n",t);
	double yatay_yol = V0*t;
	printf("Yatayda aldigi yol = %.2lf\n",yatay_yol);
	
	double carpma_hizi = pow(G*t,2)+pow(V0,2);
	carpma_hizi = sqrt(carpma_hizi);
	printf("Yere carpma hizi : %.2lf",carpma_hizi);
	return 0;
}
