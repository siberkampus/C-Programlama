#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen 1 den b�y�k tamsayinin asal �arpanlar�n� bulan program� yaz�n�z*/

int main(int argc, char *argv[]) {
	int sayi;
	printf("Sayiyi giriniz :");
	scanf("%d",&sayi);
	int bolen=2;
	while(sayi>1){
		if(sayi%bolen==0){
			printf("%d\n",bolen);
			sayi=sayi/bolen;
			}
		else{
			bolen++;
			}
		}
	
	return 0;
}
