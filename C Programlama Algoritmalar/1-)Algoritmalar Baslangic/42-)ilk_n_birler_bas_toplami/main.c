#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen n adet pozitif tamsay�n�n sadece birler basamklar�n� toplayan program� yaz�n�z*/

int main(int argc, char *argv[]) {
	int n;
	printf("Kac adet tamsayi gireceksiniz :");
	scanf("%d",&n);
	int i,toplam=0,sayi;
	
	for(i=0;i<n;i++){
		printf("Tamsayi giriniz : ");
		scanf("%d",&sayi);
		toplam += sayi%10; 
	}
	printf("Birler bsamagi toplami : %d",toplam);
	return 0;
}
