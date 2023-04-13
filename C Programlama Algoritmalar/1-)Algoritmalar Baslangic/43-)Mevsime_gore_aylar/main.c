#include <stdio.h>
#include <stdlib.h>

/* Seçilen mevsime göre ay isimlerini listeleyen program */

int main(int argc, char *argv[]) {
	int sayi;
	printf("Mevsim Seciniz \n");
	printf("1-)Ilkbahar\n");
	printf("2-)Yaz\n");
	printf("3-)Sonbahar\n");
	printf("4-)Kis\n");
	printf("Seciminiz : ");
	scanf("%d",&sayi);
	switch(sayi){
		case 1:
			printf("Mart , Nisan, Mayis");
			break;
		case 2:
			printf("Haziran , Temmuz, Agustos");
			break;
		case 3:
			printf("Eylul, Ekim, Kasim");
			break;
		case 4:
			printf("Aralik , Ocak, Subat");
			break;
		default:
			printf("Hatali girdi");
	}
	return 0;
}
