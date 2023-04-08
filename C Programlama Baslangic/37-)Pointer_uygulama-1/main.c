#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b=7.2;
	float *ptr; //Burada adres tutacak bir pointer oluþturduk
	ptr=&b; // Burada b deðiþkeninin adresini PTR pointerina yazdýrdýk. PTR pointerý artýk b nin adresini tutuyor;
	a=*ptr; //Burada PTR pointerýnýn tuttuðu adresin deðerini a deðiþkenine yazdýrdýk.
	/* & operatörü address operatörüdür*/
	/*  "*" operatörü yönlendirme operatörüdür   */
	
	printf("A nin degeri: %.2lf\n",a);
	printf("B nin degeri: %.2lf",b);
	return 0;
}
