#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b=7.2;
	float *ptr; //Burada adres tutacak bir pointer olu�turduk
	ptr=&b; // Burada b de�i�keninin adresini PTR pointerina yazd�rd�k. PTR pointer� art�k b nin adresini tutuyor;
	a=*ptr; //Burada PTR pointer�n�n tuttu�u adresin de�erini a de�i�kenine yazd�rd�k.
	/* & operat�r� address operat�r�d�r*/
	/*  "*" operat�r� y�nlendirme operat�r�d�r   */
	
	printf("A nin degeri: %.2lf\n",a);
	printf("B nin degeri: %.2lf",b);
	return 0;
}
