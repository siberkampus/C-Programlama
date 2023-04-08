#include <stdio.h>
#include <stdlib.h>

/*Kullanicidan 3 adet tamsayi al�nmal� ve k���kten b�y��e do�ru s�ralanmal� ve main() fonskiyonu i�erisinde ekrana yazd�r�lmal�d�r*/
/*Sayilarin yerini de�i�tirmek i�in yer_degistir() adl� bir fonksiyon kullan�lmal�d�r*/

void yer_degistir(int *a,int *b);

int main(int argc, char *argv[]) {
	int x,y,z;
	printf("3 adet tamsayi giriniz :" );
	scanf("%d%d%d",&x,&y,&z);
	if(x>y){
		yer_degistir(&x,&y);
	}
	if(x>z){
		yer_degistir(&x,&z);
	}
	if(y>z){
		yer_degistir(&y,&z);
	}

	printf("Sayilarin Siranmis hali %d < %d < %d",x,y,z);
	return 0;
}

void yer_degistir(int *a,int *b){
	int tmp;
	tmp = *a;
	*a=*b;
	*b=tmp;
}
