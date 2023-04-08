#include <stdio.h>
#include <stdlib.h>

/* strstr() fonksiyonu bir dizginin içerisinde baþka bir dizgiyi arar. Eðer bulursa, bulunduðu yeri gösteren bir göstergeyi(POINTER) döndürür.
	Eðer bulamaz ise NULL deðer döndürür.
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
	
	char *gstr =strstr(dizgi1,dizgi2); //Bulduðu yeri iþaret eden bir pointer döndürür. Adresi gstr pointer ýna yazdýk
	strncpy(gstr,"tel",3); //gstr pointerýnýn iþaret ettiði yerden itibaren 3 karaktere tel karakterlerini yazdýk
	puts(dizgi1);  //dizgi1 in son hali "iyi teller" olmuþtur
		
	return 0;
}
