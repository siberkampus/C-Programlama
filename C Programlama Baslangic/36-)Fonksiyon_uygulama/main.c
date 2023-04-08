#include <stdio.h>
#include <stdlib.h>

/* Kullan�c� taraf�ndan 4 basamakl� bir tam sayi al�n�r.*/
/*Bu tam sayinin abcd = (ab+bc)^2  denkli�ini sa�lay�p sa�lamad��� test edilir.*/
/*Kontrol() fonksiyonu girilin tam sayininin  4 basamakl� olup olmad�g�n� kontrol etmeldir*/
/*Fonksiyon ilk() girilen 4 basamakl� sayinin ilk 2 basama��n� Fonksiyon son() ise son 2 basama��n� d�nd�rmelidir*/
int ilk(int sayi);
int son(int sayi);
int kontrol(int sayi);

int main(int argc, char *argv[]) {
	int sayi,basamak,sonuc;
	printf("4 basamakli bir tam sayi giriniz : ");
	scanf("%d",&sayi);
	basamak =kontrol(sayi);
	if(basamak==4){
		int ab,bc;
		ab=ilk(sayi);
		bc=son(sayi);
		sonuc = pow((ab+bc),2);
		if(sayi==sonuc){
			printf("%d Sayisi denkligi saglar",sayi);
		}
		else{
			printf("%d Sayisi denkligi saglamaz",sayi);
		}
	}
	else{
		printf("Hata!!!");
	}
	return 0;
}

int kontrol(int sayi){
	int basamak=0,kalan;
	while(sayi){
		kalan = sayi%10;
		sayi =sayi-kalan;
		sayi=sayi/10;
		basamak++;
	}
	
	return basamak;
}
int ilk(int sayi){
	int deger = sayi/100;
	return deger;
}

int son(int sayi){
	int deger = sayi%100;
	return deger;
}



