#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen pozitif iki tamsayýnýn bolunmesi ile elde edilen bolum ve kalaný bolme(/) ve mod alma(%) operatorleri komutlarý kullanmadan hesaplayan programý yazýnýz*/

int main(int argc, char *argv[]) {
	int a,b;
	printf("Bir tamsayi giriniz : ");
	scanf("%d",&a);
	printf("Bir tamsayi giriniz : ");
	scanf("%d",&b);
	int i;
	int result_a=a;
	int result_b=b;
	int mod=0;
	int bolum =0;
	for(;result_b<=result_a;){
		mod=result_a-result_b;
		bolum++;
		result_b+=b;
		
	}
	printf("%d %% %d  = %d\n bolum = %d",a,b,mod,bolum);
	return 0;
}
