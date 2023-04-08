#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Kullanýcý sonu .(nokta) iþareti ile biten ve kelimeler arasýnda boþluk olan bir cümle girmelidir*/
	/*Girilen cümledeki karakter ve kelime sayýsýný bulan program yazýnýz*/
	char metin;
	int kelime_say=1,karakter_say=0;
	
	printf("Cumle Giriniz :");
	scanf("%c",&metin);
	while(metin!='.'){
		karakter_say++;
		if(metin==' ')
			kelime_say++;
		scanf("%c",&metin);
	}
	printf("Toplam kelime sayisi %d\nToplam karakter sayisi = %d",kelime_say,karakter_say);
	return 0;
}
