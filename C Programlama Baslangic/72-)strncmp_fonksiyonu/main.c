#include <stdio.h>
#include <stdlib.h>

/* Bu fonksiyon iki dizginin ilk n karakterinin karþýlaþtýrýlmasýný saðlar.
strncmp(dizgi1,dizgi2,n) dizgi1 ile dizgi2  ilk n karakterini karþýlaþtýrýr

*/
int main(int argc, char *argv[]) {
	char dizgi1[]="Merhaba Dunya";
	char dizgi2[]="Merhaba C"; //NOT!!= b>a 'dýr. Yani alfabetik olarak sonra gelen daha büyüktür
	int sonuc = strncmp(dizgi1,dizgi2,8);
	printf("%s - %s = %d\n",dizgi1,dizgi2,sonuc);
			
	sonuc = strncmp(dizgi1,dizgi2,9);
	printf("%s - %s = %d\n",dizgi1,dizgi2,sonuc);	
	
	sonuc = strncmp(dizgi2,dizgi1,9);
	printf("%s - %s = %d",dizgi2,dizgi1,sonuc);
	return 0;
}
