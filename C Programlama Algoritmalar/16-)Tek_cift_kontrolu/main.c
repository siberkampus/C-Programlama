#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen tamsayinin tek mi cift mi oldu�unu bulan program� yaz�n�z.  */

int main(int argc, char *argv[]) {
	int tamsayi;
	printf("Tamsayi giriniz : ");
	scanf("%d",&tamsayi);
	if(tamsayi%2==0)
		printf("%d cift tamsayidir",tamsayi);
	else	
		printf("%d tek tamsayidir",tamsayi);
	return 0;
}
