#include <stdio.h>
#include <stdlib.h>

/* Bir nokta yap�s�nda yer alan x y koordinatlar�n� okuyup bu yap�y� d�nd�ren bir fonskiyon yaz�n�z */

struct noktatipi{
	int x,y;
};	

struct noktatipi oku(void){
	struct noktatipi koordinat;
	printf("X ve Y koordinatlarini giriniz : ");
	scanf("%d%d",&koordinat.x,&koordinat.y);
	
	return koordinat;
}
int main(int argc, char *argv[]) {
	struct noktatipi sonuc;
	sonuc = oku();
	printf("X = %d Y = %d",sonuc.x,sonuc.y );
	return 0;
}
