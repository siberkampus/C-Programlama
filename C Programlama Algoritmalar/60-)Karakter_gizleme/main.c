#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen kelimenin belirtilen sayidaki son harflarini "*" yapan program� yaz�n�z
	Hata denetimi yap�n�z (�rne�in 5 harfli kelime girildi�inde son 10 harfi "*" yapma gibi)
 */

int main(int argc, char *argv[]) {
	char kelime[20];
	printf("Kelime giriniz : ");
	scanf("%s",&kelime);
	int gizle,i;
	printf("Kac adet harf gizlenecek = ");
	scanf("%d",&gizle);
	if(gizle>strlen(kelime)){
		printf("Hatali girdi!!");
		return 0;
	}
	for(i=0;i<strlen(kelime);i++){
		int karakter= strlen(kelime)-gizle;
		if(karakter>i){
			printf("%c",kelime[i]);
		}
		else{
			printf("*");
		}
	}
	
	return 0;
}
