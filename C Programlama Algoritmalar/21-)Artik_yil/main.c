#include <stdio.h>
#include <stdlib.h>

/* Art�k y�llar 4 kat� olan y�llard�r ancak iki istisna vard�r 
	100 kat�n olan y�llardan sadece 400 e bolunebilenler art�k y�ld�r 
*/

int main(int argc, char *argv[]) {
	int yil;
	printf("Yili giriniz :");
	scanf("%d",&yil);
	if(((yil%4==0)&& yil%100!=0) || yil%400==0)
		printf("Artik yildir");
	else{
		printf("Artik yil degildir");
	}
	return 0;
}
