#include <stdio.h>
#include <stdlib.h>

/* girilen bir tamsay�n�n iki say�n�n kareleri toplam� �eklinde yaz�l�p yaz�lamayaca��n� kontrol eden bir program yaz�n�z 
	25 =3^2+4^2;
*/

int main(int argc, char *argv[]) {
	int sayi;
	printf("Bir tamsayi giriniz :");
	scanf("%d",&sayi);
	int i,j,sonuc=0,count=0;
	for(i=0;i<sayi;i++){
		for(j=0;j<sayi;j++){
			sonuc=pow(i,2)+pow(j,2);
			if(sonuc==sayi){
				printf("%d %d ve %d sayilarinin karesi seklinde yazilabilir\n",sayi,i,j);
				count++;
			}
		}
	}
	if(count==0){
		printf("Saglayan degerler bulunamadi");
	}
	return 0;
}
