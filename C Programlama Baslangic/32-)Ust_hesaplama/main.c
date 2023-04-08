#include <stdio.h>
#include <stdlib.h>

/*Main fonksiyonu x ve y tamsayýlarýný girdi olarak almalý ve bul() fonksiyonuna göndermelidir.bul() fonksiyonu ise x^y yi hesaplamalý ve sonucu yazdýrmalýdýr*/
void bul(int x,int y);
int main(int argc, char *argv[]) {
	int sayi_1,sayi_2;
	printf("X ve Y tamsayilarini giriniz : ");
	scanf("%d%d",&sayi_1,&sayi_2);
	bul(sayi_1,sayi_2);
	return 0;
}

void bul(int x,int y){
	int i ,sonuc =1,temp;
	for(i=0;i<y;i++){
		sonuc*=x;
	}	
	printf("%d^%d isleminin sonucu = %d",x,y,sonuc);
}

