#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Kullanýcýdan alýnan n sayýsýna kadar olan asal sayilari bulan program*/
	int sayi,i,gosterge,num;
	printf("Bir tamsayi giriniz : ");
	scanf("%d",&sayi);
	for(i=2;i<sayi;i++){
		gosterge=1;
		num=2;
		while((num<i)&& gosterge==1){
			if((i%num)==0){
				gosterge=0;
			}
			num++;
		}
		if(gosterge==1){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
