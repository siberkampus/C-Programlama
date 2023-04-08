#include <stdio.h>
#include <stdlib.h>

/* strstr() fonksiyonu bir dizginin i�erisinde ba�ka bir dizgiyi arar. E�er bulursa, bulundu�u yeri g�steren bir g�stergeyi(POINTER) d�nd�r�r.
	E�er bulamaz ise NULL de�er d�nd�r�r.
	strstr(dizgi1,dizgi2);
*/

int main(int argc, char *argv[]) {
	int sonuc;
	char dizgi1[]="iyi gunler";
	char dizgi2[]="gun";
	if(strstr(dizgi1,dizgi2) =='\0'){
		printf("dizgi2, dizgi2 nin icerisinde yok");
	}
	else{
		printf("dizgi2 dizgi1 in icerisinde var\n");
	}
	
	char *gstr =strstr(dizgi1,dizgi2); //Buldu�u yeri i�aret eden bir pointer d�nd�r�r. Adresi gstr pointer �na yazd�k
	strncpy(gstr,"tel",3); //gstr pointer�n�n i�aret etti�i yerden itibaren 3 karaktere tel karakterlerini yazd�k
	puts(dizgi1);  //dizgi1 in son hali "iyi teller" olmu�tur
		
	return 0;
}
