#include <stdio.h>
#include <stdlib.h>
/*Kullan�c�dan iki tamsayi al�nmal�d�r.*/
/* yer_degistir() adl� fonksiyona gonderilmeli ve burada iki de�i�kenin de�erleri birbiriyle de�i�tirilmelidir*/
/* Main() fonksiyonu bu de�i�mi� de�erleri ekrana yazd�rmal�d�r*/

void yer_degistir(int *a,int *b);
int main(int argc, char *argv[]) {
	int x,y;
	printf("Iki adet tamsayi giriniz : ");
	scanf("%d%d",&x,&y);
	printf("Fonksiyon oncesi X=%d Y=%d\n\n",x,y);
	yer_degistir(&x,&y);
	printf("Fonksiyon sonrasi X=%d Y=%d",x,y);

	return 0;
}

void yer_degistir(int *a,int *b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
