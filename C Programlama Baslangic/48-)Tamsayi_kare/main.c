#include <stdio.h>
#include <stdlib.h>

/* 1-100 aras�ndaki tamsay�lar�n karesini hesaplayan ayr�ca ilk ve son elemanlar� ekrana yazd�racak kodu yaz�n�z*/

int main(int argc, char *argv[]) {
	int sayilar[100],i;
	for(i=0;i<100;i++){
		sayilar[i]=(i+1)*(i+1);
	}
	printf("�lk Eleman = %d\nSon eleman = %d ",sayilar[0],sayilar[99]);
	return 0;
}
