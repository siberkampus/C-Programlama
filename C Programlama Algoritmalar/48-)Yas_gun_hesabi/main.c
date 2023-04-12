#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* klavyeden gun ay yil olarak girilen dogum tarihine göre yaþý ve bugüne kadar geçen gün sayýsýný hesaplayýnýz
	Yil = 365 gun
	Ay = 30 gün
	
 */

int main(int argc, char *argv[]) {
	int gun,ay,yil;
	printf("Dogum tarihinizi gun ay ve yil olarak giriniz :");
	scanf("%d%d%d",&gun,&ay,&yil);
    SYSTEMTIME t; 
    GetLocalTime(&t); 
    int yil_now =t.wYear; 
	int ay_now = t.wMonth;
	int gun_now = t.wDay;
	int yas = yil_now-yil;
	printf("Yasiniz : %d\n",yas);
	
	int toplam = (yil_now-yil)*365;
	toplam = toplam-(ay*30+gun);
	toplam = toplam+(ay_now*30+gun_now);
	printf("%d gun yasamissiniz.",toplam);
	
	
	return 0;
}
