#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Klavyeden girilen cümleyi; cümledeki tek ve çift konumda bulunan karakterlerin yerlerini karþýlýklý deðiþtirerek þifreli þekilde yazdýran programý yazýnýz
	örnek PASCAL -->APCSLA   Cümle çift karakterse sorun olmaz
	örnek BASIC  -->ABIS C   Eðer tek ise boþluk karakteri ile deðiþtirme iþlemi yapýlýr
	Þifrelenmiþ metni çözen programý da yazýnýz
 */

int main(int argc, char *argv[]) {
	char metin[20];
	printf("Bir metin giriniz :");
	scanf("%s",&metin);
    char met[2] =" ";
    int i;
    if((strlen(metin))%2==1){
		strcat(metin,met);  //Eðer tek sayida karakterden oluþuyorsa sonuna " " boþluk eklenir
	}
	for(i=1;i<(strlen(metin));i+=2){
		char tmp;
		tmp = metin[i-1];
		metin[i-1]=metin[i];
		metin[i]=tmp;
	}
	
	puts(metin);
	
	for(i=1;i<(strlen(metin));i+=2){
		char tmp;
		tmp = metin[i-1];
		metin[i-1]=metin[i];
		metin[i]=tmp;
	}
	puts(metin);
	return 0;
}
