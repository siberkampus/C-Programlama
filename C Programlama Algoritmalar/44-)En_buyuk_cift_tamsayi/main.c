#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen n adet tamsayidan en buyuk çift tamsayiyi ekrana yazdýran programý yazýnýz */

int main(int argc, char *argv[]) {
	int n;
	printf("Kac adet tamsayi gireceksiniz :");
	scanf("%d",&n);
	int i,max=0,sayi;
	for(i=0;i<n;i++){
		printf("Tamsayi giriniz :");
		scanf("%d",&sayi);
		if(sayi>max && sayi%2==0){
			max=sayi;
		}
	}
	printf("En buyuk cift sayi :%d",max);
	return 0;
}
