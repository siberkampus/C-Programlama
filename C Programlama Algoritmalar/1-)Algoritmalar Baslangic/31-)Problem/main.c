#include <stdio.h>
#include <stdlib.h>

/* 7 deb buyuk tamsayilar (S>7) , 3 ve 5 in katlar�n�n toplam� (3*a+5*b = S) �eklinde yaz�labilir Girilen tamsayi i�in a ve b katsayilar�n� ekrana yazd�rdan program� yaz�n�z */

int main(int argc, char *argv[]) {
	int sayi;
	printf("Bir tamsayi giriniz : ");
	scanf("%d",&sayi);
	int a,b,sonuc=0;
	for(a=0;a<=sayi/3;a++){
		for(b=0;b<=(sayi/5);b++){
			sonuc = (3*a)+(5*b);
			if(sonuc == sayi){
				printf("%d*3 + %d*5 = %d\n",a,b,sayi);
			}
		}
	}
	return 0;
}
