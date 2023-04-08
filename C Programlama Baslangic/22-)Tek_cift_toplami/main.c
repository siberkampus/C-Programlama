#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,n,toplam_cift=0,toplam_tek=0,i;
	printf("Bir sayi araligi giriniz : ");
	scanf("%d%d",&m,&n);
	if(m>n){
		printf("Yanlis aralik girdiniz!!!");
		return 0; //Programý return 0 ile sonlandýrýrýz.
	}
	for(;m<=n;m++){
		if(m%2==0){
			toplam_cift+=m;
		}
		if(m%2!=0){
			toplam_tek+=m;
		}
	}	
	printf("Toplam Cift = %d\nToplam Tek = %d",toplam_cift,toplam_tek);
	return 0;
}
