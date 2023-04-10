#include <stdio.h>
#include <stdlib.h>

/* Bir noktan�n x ve y koordinatlar�n� tutan bir yap� olu�turunuz. Bu yap� tipindeki iki noktan�n koordinatlar�n� okuyup orta noktas�n�n koordinatlar�n� hesaplay�n�z
     x1=5 x2=7   y1=3 y2=5
	 orta nokta = (x1+x2)/2 , (y1+y2)/2; 
	    
  */
  
struct noktalar{
	int x,y;
};


struct noktalar orta(struct noktalar nokta1,struct noktalar nokta2){
	struct noktalar orta_nokta;
	double x_orta = (nokta1.x+nokta2.x)/2.0;
	double y_orta = (nokta1.y+nokta2.y)/2.0;
	orta_nokta.x=x_orta;
	orta_nokta.y=y_orta;
	return orta_nokta;
}

int main(int argc, char *argv[]) {
	struct noktalar nokta1,nokta2,sonuc;
	printf("Koordinatlari giriniz (x,y): ");
	scanf("%d%d",&nokta1.x,&nokta1.y);
	printf("Koordinatlari giriniz (x,y): ");
	scanf("%d%d",&nokta2.x,&nokta2.y);
	sonuc = orta(nokta1,nokta2);
	printf("Orta noktalar = %d , %d",sonuc.x,sonuc.y);
	return 0;
}
