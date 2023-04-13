#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen n sayisina göre 1 den n kadar olan tamsayilarin toplami T1, 1 den n kadar olan tek tamsayilarin toplami T2, 1 den n kadar olan çift tamsayilarin toplamý T2 olacak 
þekilde sonuçlarý ekrana basan programý yazýnýz*/

int main(int argc, char *argv[]) {
	
	int tamsayi,T1=0,T2=0,T3=0,i;
	printf("Bir tamsayi giriniz : ");
	scanf("%d",&tamsayi);
	for(i=1;i<=tamsayi;i++){
		T1+=i;
		if(i%2!=0)
			T2+=i;
		else
			T3+=i;
	}
	printf("1den %d ye kadar tamsayilarin toplami : %d\n",tamsayi,T1);
	printf("1den %d ye kadar tek tamsayilarin toplami : %d\n",tamsayi,T2);
	printf("1den %d ye kadan cift tamsayilarin toplami : %d\n",tamsayi,T3);
	return 0;
}
