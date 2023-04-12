#include <stdio.h>
#include <stdlib.h>

/* 1-99 arasýnda basamak deðerleri toplamý tek olan sayýlarý ekrana yazdýran programý yazýnýz*/

int main(int argc, char *argv[]) {
	int i;
	int basamak_top=0;
	for(i=1;i<=99;i++){
		basamak_top=i%10;
		basamak_top =basamak_top+i/10;
		if(basamak_top%2!=0){
			printf("%d\n",i);
		}
		basamak_top=0;
	}
	return 0;
}
