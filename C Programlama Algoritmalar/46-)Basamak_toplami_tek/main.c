#include <stdio.h>
#include <stdlib.h>

/* 1-99 aras�nda basamak de�erleri toplam� tek olan say�lar� ekrana yazd�ran program� yaz�n�z*/

int main(int argc, char *argv[]) {
	int i;
	int basamak_top=0;
	for(i=1;i<=99;i++){
		basamak_top=i%10;
		basamak_top =basamak_top+i/10;
		if(basamak_top%2!=0){
			printf("%d\n",i);
		}
		basamak_top=0;
	}
	return 0;
}
