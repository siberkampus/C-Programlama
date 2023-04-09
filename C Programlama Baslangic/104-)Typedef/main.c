#include <stdio.h>
#include <stdlib.h>

/* Typedef bildirimi tan�mlanm�� bir veri tipine yeni bir isim vermek amac�yla typedef bildirimi kullan�l�r*/

struct ogrenci{
	char isim[15];
	int yas;
	float ortalama;
};
typedef struct ogrenci ogr; //art�k "struct ogrenci" ogr ile ifade edilebilir 
int main(int argc, char *argv[]) {
	
	typedef int tam; //Art�k int yazmak yerine tam yazabiliriz.
	tam a=5;  //int a=5 ile ayn� anlama gelir
	printf("%d\n",a);
	
	ogr kisi; //struct ogrenci kisi; ile ayn� �eyi ifade eder
	kisi.yas=17;
	printf("%d",kisi.yas);
	return 0;
}
