#include <stdio.h>
#include <stdlib.h>

/*Bir fonksiyonda 10 adet tam sayi okuyup bunlarýn arasýndaki iki deðeri kaynak parametresi olarak alarak main() fonksiyonuna döndürüp ekrana yazdýrýnýz*/


void girdiler(int sayilar[]);
void en_buyuk(int sayilar[],int *max_1,int *max_2);

int main(int argc, char *argv[]) {
	int max_1=0,max_2=0;
	int sayilar[10],i;
	girdiler(sayilar);
	en_buyuk(sayilar,&max_2,&max_1);
	printf("Max_1 = %d ve Max_2 = %d",max_1,max_2);
	return 0;
}
void girdiler(int sayilar[]){
	int i;
	for(i=0;i<10;i++){
		printf("%d. sayiyi giriniz :",i+1);
		scanf("%d",&sayilar[i]);
	}
}

void en_buyuk(int sayilar[],int *max_2,int *max_1){
	*max_1 = sayilar[0];
	*max_2 = sayilar[1];
	int i ;
	for(i=2;i<10;i++){
		if(sayilar[i]>*max_2){
			*max_2=*max_1;
			*max_1=sayilar[i];
		}
	}
}
