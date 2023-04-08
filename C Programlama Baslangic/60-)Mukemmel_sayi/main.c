#include <stdio.h>
#include <stdlib.h>

/* Mukemmel tamsayi kendi dýþýndaki bölenlerinin toplamýna eþit olan sayidir
	6=1+2+3;
	6 mükemmel sayidir.
	iki fonksiyondan oluþan bir program yazýnýz.
	main() fonksiyonu n deðerini (n<=30)  ve n tane pozitif tamsayýyý a dizisine okuyacak ve fonksiyon mukemmel() i çaðýracaktýr.
	Fonksiyon mukemmel çaðrýldýðý yerden bir tamsayý dizisi alýp bu dizinin elemanlarýnýn mükemmel tamsayý olup olmadýðýný kontrol etmelidir.Bu kontrol sýrasýnda yeni bir dizi 
	oluþturur.Eðer alýnan dizinin elemaný mükemmel tamsayi ise, yeni dizideki karþýlýk gelen eleman 1,deðil ise  ise 0 olmalýdýr.
	Fonksiyon yeni oluþturulan diziyi çaðrýldýðý yere döndürecektir.
	
	Dizi buyuklugunu giriniz: 5
	Dizi elemanlarýný giriniz : 3 34 55 6 20
	Mukemmel sayi sonuclarý :   0  0  0 1 0
 */
void mukemmel(int a,int dizi[]);
int main(int argc, char *argv[]) {
	int a,dizi[30],i,*ptr;
	printf("Dizi buyuklugunu giriniz:");
	scanf("%d",&a);
	if(a>30){
		printf("Yanlis Dizi Buyuklugu!!");
		return 0; 
	}
	printf("Dizi elemanlarini giriniz: ");
	for(i=0;i<a;i++){
		scanf("%d",&dizi[i]);
	}
	 mukemmel(a,dizi);
	 for(i=0;i<a;i++){
	 	printf("%d\t",dizi[i]);
	 }
	return 0;
}

void mukemmel(int a,int dizi[]){
	int sonuc[30],i,j,bolenler=0;
	for(i=0;i<a;i++){
		for(j=1;j<dizi[i];j++){
			if(dizi[i]%j==0){
				bolenler+=j;
			}
		}
		if(bolenler==dizi[i]){
			dizi[i]=1;
		}
		else{
			dizi[i]=0;
		}
		bolenler=0;
	}

}
