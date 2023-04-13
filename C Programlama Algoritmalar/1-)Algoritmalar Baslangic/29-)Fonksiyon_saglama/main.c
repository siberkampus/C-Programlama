#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen b tamsayisina göre a^3-a^2= b sartýný  saðlayan 0<a<100 sartýný saglayan tamsayýyý bulan program yazýnýz. Eger oyle býr tamsayý yoksa ekrana cýktý vermelýdýr */

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
