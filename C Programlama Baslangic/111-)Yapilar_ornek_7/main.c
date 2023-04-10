#include <stdio.h>
#include <stdlib.h>

/* Bir öğrenicinin isim numara ve ortalamasını içeren bir yapı oluşturunuz.Bu yapıdaki elemanlardan oluşan 100 kişilik bir ogrenci dizisi oluşturunuz
Bu dizi bilgilerini girdikten sonra,kalan(60 dan az not alan) öğrencilerin isimlerini ve ortalamalarını ekranda gösteriniz */

struct ogrenci{
	char isim[15];
	int numara;
	double ortalama;
};

int main(int argc, char *argv[]) {
	struct ogrenci ogrenciler[3];
	int i;
	for(i=0;i<3;i++){
		printf("%d. Ogrenci adi: ",i+1);
		scanf("%s",&ogrenciler[i].isim);
		
		printf("%d. Ogrenci numara: ",i+1);
		scanf("%d",&ogrenciler[i].numara);
		
		printf("%d. Ogrenci ortalama: ",i+1);
		scanf("%lf",&ogrenciler[i].ortalama);
		
	}
	for(i=0;i<3;i++){
		if(ogrenciler[i].ortalama<60){
			printf("%s %.2lf ortalama ile kaldi\n",ogrenciler[i].isim,ogrenciler[i].ortalama);
		}
		
	}
	
	return 0;
}
