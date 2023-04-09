#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ogrenci{
	char isim[15];
	int yas;
	float ortalama;
	char cinsiyet;		
};


int main(int argc, char *argv[]) {
	struct ogrenci sinif[30]; // Öðrenci veri yapýsýndan 30 adet sinif deðiþkeni oluþturduk. Yani 30 boyurunda bir yapý dizisi oluþturduk
	strcpy(sinif[0].isim,"Muhammed");
	strcpy(sinif[1].isim,"Ahmet");
	strcpy(sinif[2].isim,"Kazim");
	strcpy(sinif[3].isim,"Bahriye");
	strcpy(sinif[4].isim,"Abdullah");
	strcpy(sinif[5].isim,"Nesibe");
	int i ;
	
	for(i=0;i<6;i++){
		printf("%s Yasi : ",sinif[i].isim);
		scanf("%d",&sinif[i].yas);
	}
	
	for(i=0;i<6;i++){
		printf("%d. ogrenci = %s  %d yasindadir.\n",i+1,sinif[i].isim,sinif[i].yas);
	}

	return 0;
}
