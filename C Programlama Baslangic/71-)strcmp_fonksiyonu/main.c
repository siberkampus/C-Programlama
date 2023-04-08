#include <stdio.h>
#include <stdlib.h>

/* strcmp(dizgi1,dizgi2)
	strcmp fonksiyonu iki farklý dizgiyi karþýlaþtýrýr. dizgi1 alfabetik olarak dizgi2 den büyükse pozitif deðer küçükse negatif eþit ise 0 deðerini döndürür
*/

int main(int argc, char *argv[]) {
	char dizgi1[15]="Balik";
	char dizgi2[15]="Kitap";
	int deger =0;
	deger=strcmp(dizgi1,dizgi2);
	printf("%s-%s = %d\n",dizgi1,dizgi2,deger);
	
	deger=strcmp(dizgi1,dizgi1);
	printf("%s-%s = %d\n",dizgi1,dizgi1,deger);
	
	deger=strcmp(dizgi2,dizgi1);
	printf("%s-%s = %d\n",dizgi2,dizgi1,deger);
	return 0;
}
