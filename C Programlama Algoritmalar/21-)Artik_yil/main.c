#include <stdio.h>
#include <stdlib.h>

/* Artýk yýllar 4 katý olan yýllardýr ancak iki istisna vardýr 
	100 katýn olan yýllardan sadece 400 e bolunebilenler artýk yýldýr 
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
