#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Aþaðýdaki kodun hangi çýktýyý verdiðini tahmin ediniz*/
	int *px,*py;
	int x=3,y=4;
	px = &x; //px artýk x deðiþkeninin bellekteki yerini iþaret ediyor
	py=&y;  // py artýk y deðiþkeninin bellekteki yerini iþaret ediyor
	py=px;	//py üzerine px yazýlýr. Artýk hem px hem de py x deðiþkeninin bellekteki adresinin iþaret ediyor
	*py=5;  // py pointerýnýn iþaret ettiði X deðiþkeninin deðerini 5 olarak günceller.
	printf("%d",*px);  //Px pointerýnýn iþaret ettiði X deðiþkeinin deðerini yazdýrýr. Bir önceki satýrda py pointerý tarafýndan x deðiþkeninin deðeri 5 olarak güncellenmiþti
					//Bu sebepten dolayý ekrana 5 çýktýsýný verir.
	return 0;
}
