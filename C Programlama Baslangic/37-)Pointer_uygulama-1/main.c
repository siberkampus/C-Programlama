#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b=7.2;
	float *ptr; //Burada adres tutacak bir pointer oluşturduk
	ptr=&b; // Burada b değişkeninin adresini PTR pointerina yazdırdık. PTR pointerı artık b nin adresini tutuyor;
	a=*ptr; //Burada PTR pointerının tuttuğu adresin değerini a değişkenine yazdırdık.
	/* & operatörü address operatörüdür*/
	/*  "*" operatörü yönlendirme operatörüdür   */
	
	printf("A nin degeri: %.2lf\n",a);
	printf("B nin degeri: %.2lf",b);
	return 0;
}
