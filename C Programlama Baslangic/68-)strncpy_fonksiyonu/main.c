#include <stdio.h>
#include <stdlib.h>

/* strncpy(dizgi_1,dizgi_2,n)
	dizgi_2 içerisindeki ilk n karakteri dizgi_1'e kopyalamaktadýr.
	Eðer dizgi_1'in uzunluðu dizgi_2 den küçükse dizgi_2 nin sonundaki '\0' (boþ karakter) kopyalanamaz
	Bu durumda dizgi_1'in sonuna '\0' boþ karakteri kendimiz eklemeliyiz.
*/

int main(int argc, char *argv[]) {
	char metin[30]="Programci surekli kodlar";
	
	char ilk_kisim[15];
	char ikinci_kisim[15];
	char ucuncu_kisim[15];
	
	strncpy(ilk_kisim,metin,9); //metin dizgisinin ilk 9 karakterini ilk_kisim adli deðiþkene kopyaladýk
	ilk_kisim[9]='\0'; //Ancak dizginin sonunda '\0' karakteri olmadýðý için kendimiz ekledik
	
	strncpy(ikinci_kisim,&metin[10],7);
	ikinci_kisim[7]='\0';
	
	strncpy(ucuncu_kisim,&metin[18],6); //metin adlý dizginin sonudaki '\0' (NULL) karakteri ucuncu_kisim adli deðiþlne eklendiði için yeniden eklemedik
	
	puts(metin);
	puts(ilk_kisim);
	puts(ikinci_kisim);
	puts(ucuncu_kisim);
	
	return 0;
}
