#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen tamsayiyi tersten yazdýran programý yazýnýz
	123 = 321
	1234 = 4321
 */

int main(int argc, char *argv[]) {
	int sayi,kalan;
	printf("Bir tamsayi giriniz :");
	scanf("%d",&sayi);
	while(sayi){
		kalan=sayi%10;
		printf("%d",kalan);
		sayi=sayi/10;
	}
	return 0;
}
