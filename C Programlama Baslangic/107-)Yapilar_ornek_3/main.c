#include <stdio.h>
#include <stdlib.h>

/*  Bir karmaþýk sayi için reel ve imaginary elemanlarýndan oluþan bir yapi oluþturunuz
	Daha sonra iki kompleks sayi okutup, bu saylarin toplamini bulan bir fonksiyona gönderiniz ve ekrana yazýnýz
*/
struct karmasik{
	int reel,imaginary;
};

struct karmasik toplam(struct karmasik sayi_1,struct karmasik sayi_2){
	struct karmasik toplam;
	toplam.reel=sayi_1.reel+sayi_2.reel;
	toplam.imaginary = sayi_1.imaginary+sayi_2.imaginary;
	return toplam;
}

int main(int argc, char *argv[]) {
	struct karmasik sayilar[2];
	int i ;
	for(i=0;i<2;i++){
		printf("%d. karmasik sayinin reel kismi : ",i+1);
		scanf("%d",&sayilar[i].reel);
		printf("%d. karmasik sayinin imaginary kismi : ",i+1);
		scanf("%d",&sayilar[i].imaginary);
	}
	sayilar[0]=toplam(sayilar[0],sayilar[1]);
	
	printf("Toplam %d + %dI",sayilar[0].reel,sayilar[0].imaginary);
	
	
	return 0;
}
