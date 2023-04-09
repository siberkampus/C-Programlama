#include <stdio.h>
#include <stdlib.h>

/* �ki nokta aras�ndaki mesafeyi hesaplayan program� yaz�n�z.
	Bu noktalar� struct olarak belirleyin(x,y);
	Bu noktalara ilk atamay� kullan�c� taraf�ndan al�nan de�erlere ile yap�n�z. Bunun i�in oku() fonksiyonunu yaz�n�z.
	�ki nokta aras�ndaki mesafeyi hesaplayan mesafe() fonksiyonunu yaz�n�z
	

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
	double mesafe = pow(((nokta1->x)-(nokta2->x)),2)  +   pow(((nokta1->y)-(nokta2->y)),2);  //nokta1->x  yerine *nokta1.x  kullan�labilir.
	printf("Mesafe : %.2lf",sqrt(mesafe));
}


int main(int argc, char *argv[]) {
	struct noktalar nokta1,nokta2;
	nokta1 = oku();
	nokta2 = oku();
	mesafe(&nokta1,&nokta2);	
	return 0;
}
