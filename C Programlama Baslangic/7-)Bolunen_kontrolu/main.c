#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi;
	printf("Bir sayi giriniz :");
	scanf("%d",&sayi);
	/*Sayinin 7'ye bolumunden kalan 0 ise tam olarak bolunur*/
	if(sayi%7==0){
		printf("%d yedi sayisina tam olarak BOLUNUR!!");
	}
	else{
		printf("%d sayisi 7'ye tam olarak BOLUNMEZ!!");
	}
	return 0;
}
