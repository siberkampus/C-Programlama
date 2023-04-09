#include <stdio.h>
#include <stdlib.h>

/* Typedef bildirimi tanýmlanmýþ bir veri tipine yeni bir isim vermek amacýyla typedef bildirimi kullanýlýr*/

struct ogrenci{
	char isim[15];
	int yas;
	float ortalama;
};
typedef struct ogrenci ogr; //artýk "struct ogrenci" ogr ile ifade edilebilir 
int main(int argc, char *argv[]) {
	
	typedef int tam; //Artýk int yazmak yerine tam yazabiliriz.
	tam a=5;  //int a=5 ile ayný anlama gelir
	printf("%d\n",a);
	
	ogr kisi; //struct ogrenci kisi; ile ayný þeyi ifade eder
	kisi.yas=17;
	printf("%d",kisi.yas);
	return 0;
}
