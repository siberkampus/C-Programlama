#include <stdio.h>
#include <stdlib.h>

/* 1-100 arasýndaki tamsayýlarýn karesini hesaplayan ayrýca ilk ve son elemanlarý ekrana yazdýracak kodu yazýnýz*/

int main(int argc, char *argv[]) {
	int sayilar[100],i;
	for(i=0;i<100;i++){
		sayilar[i]=(i+1)*(i+1);
	}
	printf("Ýlk Eleman = %d\nSon eleman = %d ",sayilar[0],sayilar[99]);
	return 0;
}
