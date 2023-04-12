#include <stdio.h>
#include <stdlib.h>

/* Kendi hanelerine bolunebilen 11-99 arasýndaki tamsayilari listeleyen programý yazýnýz */

int main(int argc, char *argv[]) {
	int i,j,sayi=0;
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			sayi=i*10+j;
			if(sayi%i==0 && sayi%j==0){
				printf("%d basamak degerlerine tam bolunebilir.\n",sayi);
			}
		}
	}
	return 0;
}
