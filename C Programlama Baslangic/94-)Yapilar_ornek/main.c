#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Kullan�c�dan iki noktan�n (x1,y1) ve (x2,y2) koordinatlar�n� girdi olarak alan ve aras�ndaki mesafeyi hesaplayan program� yaz�n�z. Program�m�zda her noktan�n x ve y koordinatlar� 
bir yap� i�inde tutulmal�d�r. Mesafe formulu a�a��daki gibidir

	mesafe = (((x2-x1)^2) + ((y2-y1)^2))^(1/2)
 */
struct noktalar{
	int x,y;
};

double mesafe( int x1,int y1,int x2,int y2);
int main(int argc, char *argv[]) {
	struct noktalar n1,n2;
	printf("X1 Noktasini Giriniz : ");
	scanf("%d",&n1.x);
	
	printf("Y1 Noktasini Giriniz : ");
	scanf("%d",&n1.y);
	
	printf("X2 Noktasini Giriniz : ");
	scanf("%d",&n2.x);
	
	printf("Y2 Noktasini Giriniz : ");
	scanf("%d",&n2.y);
	float sonuc = mesafe(n1.x,n1.y,n2.x,n2.y);
	printf("Mesafe = %.2lf",sonuc);
	
	return 0;
}

double mesafe( int x1,int y1,int x2,int y2){
	int x_sonuc= x2-x1;
	x_sonuc = pow(x_sonuc,2);
	int y_sonuc= y2-y1;
	y_sonuc=pow(y_sonuc,2);
	double sonuc = (x_sonuc+y_sonuc);
	sonuc = sqrt(sonuc);
	return sonuc;
}
