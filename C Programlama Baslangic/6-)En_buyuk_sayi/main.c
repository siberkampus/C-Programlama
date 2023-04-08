#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi_1,sayi_2,sayi_3,buyuk;
	printf("Uc sayi giriniz:");
	scanf("%d%d%d",&sayi_1,&sayi_2,&sayi_3);
	buyuk=sayi_1;
	if(sayi_2>sayi_1){
		buyuk=sayi_2;}
	if(sayi_3>buyuk){
		buyuk=sayi_3;
	}
	printf("En buyuk sayi :%d",buyuk);
	
	return 0;
}
