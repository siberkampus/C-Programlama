#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen b tamsayisina g�re a^3-a^2= b sart�n�  sa�layan 0<a<100 sart�n� saglayan tamsay�y� bulan program yaz�n�z. Eger oyle b�r tamsay� yoksa ekrana c�kt� vermel�d�r */

int main(int argc, char *argv[]) {
	int b;
	printf("Bir b sayisi giriniz :");
	scanf("%d",&b);
	int i,count=0;
	int sonuc=0;
	for(i=0;i<100;i++){
		sonuc=pow(i,3)-pow(i,2);
		if(sonuc == b){
			printf("%d tamsayisi denklemi saglar",i);
			count++;
		}
	}
	if(count ==0){
		printf("Denklemi saglayan tamsayi bulunmadi");
		
	}
	return 0;
}
