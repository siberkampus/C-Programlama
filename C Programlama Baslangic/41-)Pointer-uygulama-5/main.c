#include <stdio.h>
#include <stdlib.h>
/*Kullanıcıdan iki tamsayi alınmalıdır.*/
/* yer_degistir() adlı fonksiyona gonderilmeli ve burada iki değişkenin değerleri birbiriyle değiştirilmelidir*/
/* Main() fonksiyonu bu değişmiş değerleri ekrana yazdırmalıdır*/

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
