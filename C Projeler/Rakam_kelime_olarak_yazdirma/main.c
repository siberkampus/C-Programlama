#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen tamsayýyý kelime olarak yazdýran programý yazýnýz */

int main(int argc, char *argv[]) {
	char birler[10][15]={"Sifir","Bir","Iki","Uc","Dort","Bes","Alti","Yedi","Sekiz","Dokuz"};
	char onlar[10][15]={"On","Yirmi","Otuz","Kirk","Elli","Altmis","Yetmis","Seksen","Doksan"};
	char binler[5][15]={"Katrilyon","Trilyon","Milyar","Milyon","Bin"};
	int sayi;
	printf("Bir tamsayi giriniz :");
	scanf("%d",&sayi);
	if(sayi<0){
		printf("Eksi ");
	}
	if(sayi==0){
		printf("Sifir");
	}
	int basamaklar[10],i=0,basamak=0;
	while(sayi){
		basamaklar[i]=sayi%10;
		sayi=sayi/10;
		i++;
		basamak++;
	}
	printf("basamak = %d\n",basamak);
	char metin[100]="";
	
	for(i=basamak;i>0;i--){
		if(i>=3){
			int indeks=basamaklar[i-1];
			strcat(metin,binler[6-indeks]);
		}
		if(i==2){
			int indeks=basamaklar[i-1];
			strcat(metin,onlar[indeks-1]);
			
		}
		if(i==1){
			int indeks=basamaklar[i-1];
			strcat(metin,birler[indeks]);
		}
	}
	printf("%s",metin);
	return 0;
}
