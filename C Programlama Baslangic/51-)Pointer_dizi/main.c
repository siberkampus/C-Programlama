#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dizi[4]={15,25,35,45},i;
	for(i=0;i<4;i++){
		printf("Dizinin %d. elemani = %d\n",i+1,dizi[i]);
	}
	printf("\n\n");
	int *ptr=&dizi[0]; //dizinin ilk elemanýnýn adresini ptr pointerina verdik
	printf("Dizinin ilk elemani = %d\n",*ptr); //ptr pointerýnýn tuttuðu adresin deðerini yazdýrýr
	printf("Dizinin ilk elemani = %d\n",*(ptr+1));
	printf("Dizinin ilk elemani = %d\n",*(ptr+2));
	printf("Dizinin ilk elemani = %d\n",*(ptr+3)); 

	return 0;
}
