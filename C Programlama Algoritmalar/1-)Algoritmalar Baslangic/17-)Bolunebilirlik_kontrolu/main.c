#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen pozitif bir a tamsayisinin tam bolenlerini hesaplay�p listeleyen program� yaz�n�z */

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
