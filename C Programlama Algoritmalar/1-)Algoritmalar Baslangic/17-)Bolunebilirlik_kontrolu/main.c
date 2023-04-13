#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen pozitif bir a tamsayisinin tam bolenlerini hesaplayýp listeleyen programý yazýnýz */

int main(int argc, char *argv[]) {
	int tamsayi,i;
	printf("Bir tamsayi giriniz :");
	scanf("%d",&tamsayi);
	for(i=1;i<=tamsayi;i++){
		if(tamsayi%i==0)
			printf("%d\n",i);
	}
	return 0;
}
