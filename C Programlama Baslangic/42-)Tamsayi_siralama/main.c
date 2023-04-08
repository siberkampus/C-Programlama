#include <stdio.h>
#include <stdlib.h>

/*Kullanicidan 3 adet tamsayi alýnmalý ve küçükten büyüðe doðru sýralanmalý ve main() fonskiyonu içerisinde ekrana yazdýrýlmalýdýr*/
/*Sayilarin yerini deðiþtirmek için yer_degistir() adlý bir fonksiyon kullanýlmalýdýr*/

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
