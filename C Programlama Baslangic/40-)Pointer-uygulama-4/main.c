#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void deger_parametresi(int deger);

void kaynak_parametresi(int *deger);

int main(int argc, char *argv[]) {
	int deger = 1;
	printf("Deger_parametresi fonksiyonu cagrilmadan once deger = %d\n",deger);
	deger_parametresi(deger);
	printf("Deger_parametresi fonksiyonu cagrildiktan sonra deger = %d\n\n\n",deger);
	
	printf("Kaynak_parametresi fonksiyonu cagrilmadan once deger =%d\n",deger);
	kaynak_parametresi(&deger); //Fonksiyona deger de�i�kenini adresini g�nderdik. Bu sayede �zerinde her t�rl� i�lemi yapabilecek
	printf("Kaynak_parametresi fonksiyonu cagrildiktan sonra deger =%d\n",deger); //Pointer kullanarak fonksiyon i�indeki de�i�ken de�i�ikliklerini kal�c� yapabiliriz.
	return 0;
}

void deger_parametresi(int deger){
	deger =8;
	printf("Deger_parametresi Fonksiyonun icinde  deger = %d\n",deger);
}

void kaynak_parametresi(int *deger){
	*deger=5; //Bu fonksiyonda deger de�i�keninin adresi al�nm�� (&deger) ve *deger ile de�i�kenini de�eri de�i�tirilmi�tir.
	printf("Kaynak_parametresi fonksiyonun icinde deger = %d\n",*deger); //deger degi�keninin i�eri�i ekrana yaz�l�r
}
