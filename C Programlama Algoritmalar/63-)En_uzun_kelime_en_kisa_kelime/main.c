#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Klavyeden girilen cümledeki en uzun ile en kýsa kelime arasýndaki karakter sayýsý farkýný hesaplayan programý yazýnýz 
NOT=cümle sonu nokta ile bitmelidir.
*/

int main(int argc, char *argv[]) {
	char dizgi[100];
	printf("Cumleyi giriniz :");
	gets(dizgi);
	char karakter[]={" ,.;:!"};
	int i,en_kisa=strlen(dizgi),en_uzun=0;
	int j,sayac=0,kontrol=0;
	for(i=0;i<strlen(dizgi);i++){
		sayac++;
		for(j=0;j<strlen(karakter);j++){
			if(dizgi[i]==karakter[j] ){
				
				if(sayac>en_uzun){
					en_uzun=sayac;
					}
				if(sayac<en_kisa){
					en_kisa=sayac;
					}
					
				sayac=0;
				}
			}
		}
	printf("En uzun kelime ile en kisa kelime arasindaki uzunluk farki : %d",en_uzun-en_kisa);
	return 0;
}
