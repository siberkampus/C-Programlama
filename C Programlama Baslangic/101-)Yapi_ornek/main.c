#include <stdio.h>
#include <stdlib.h>

/* Ýki nokta arasýndaki mesafeyi hesaplayan programý yazýnýz.
	Bu noktalarý struct olarak belirleyin(x,y);
	Bu noktalara ilk atamayý kullanýcý tarafýndan alýnan deðerlere ile yapýnýz. Bunun için oku() fonksiyonunu yazýnýz.
	Ýki nokta arasýndaki mesafeyi hesaplayan mesafe() fonksiyonunu yazýnýz
	

 */

struct noktalar{
	int x,y;
};

struct noktalar oku(void){
	struct noktalar nokta;
	printf("X1, Y1 noktalarini giriniz :");
	scanf("%d%d",&nokta.x,&nokta.y);
	return 	nokta; 
}

void mesafe(struct noktalar *nokta1 ,struct noktalar *nokta2){
	double mesafe = pow(((nokta1->x)-(nokta2->x)),2)  +   pow(((nokta1->y)-(nokta2->y)),2);  //nokta1->x  yerine *nokta1.x  kullanýlabilir.
	printf("Mesafe : %.2lf",sqrt(mesafe));
}


int main(int argc, char *argv[]) {
	struct noktalar nokta1,nokta2;
	nokta1 = oku();
	nokta2 = oku();
	mesafe(&nokta1,&nokta2);	
	return 0;
}
