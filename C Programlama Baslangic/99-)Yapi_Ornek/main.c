#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Ýki noktayý yapý olarak alan ve bu iki nokta arasýndaki mesafeyi bulan programý yazýnýz
	iki nokta arasýndaki uzaklýk =   ((x1-x2)^2 + (y1-y2)^2 )^(1/2)
*/
struct noktalar{
	int x,y;
};


double mesafe(struct noktalar a,struct noktalar b){
	double mesafe = pow((a.x-b.x),2)+pow((a.y-b.y),2);
	mesafe =sqrt(mesafe);
	return mesafe;
	
}
int main(int argc, char *argv[]) {
	struct noktalar nokta1={7,3},nokta2={2,4};
	double uzaklik=mesafe(nokta1,nokta2);
	printf("Iki nokta arasindaki mesafe = %.2lf",uzaklik);
	return 0;
}
