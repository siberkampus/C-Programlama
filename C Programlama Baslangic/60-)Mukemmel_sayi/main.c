#include <stdio.h>
#include <stdlib.h>

/* Mukemmel tamsayi kendi d���ndaki b�lenlerinin toplam�na e�it olan sayidir
	6=1+2+3;
	6 m�kemmel sayidir.
	iki fonksiyondan olu�an bir program yaz�n�z.
	main() fonksiyonu n de�erini (n<=30)  ve n tane pozitif tamsay�y� a dizisine okuyacak ve fonksiyon mukemmel() i �a��racakt�r.
	Fonksiyon mukemmel �a�r�ld��� yerden bir tamsay� dizisi al�p bu dizinin elemanlar�n�n m�kemmel tamsay� olup olmad���n� kontrol etmelidir.Bu kontrol s�ras�nda yeni bir dizi 
	olu�turur.E�er al�nan dizinin eleman� m�kemmel tamsayi ise, yeni dizideki kar��l�k gelen eleman 1,de�il ise  ise 0 olmal�d�r.
	Fonksiyon yeni olu�turulan diziyi �a�r�ld��� yere d�nd�recektir.
	
	Dizi buyuklugunu giriniz: 5
	Dizi elemanlar�n� giriniz : 3 34 55 6 20
	Mukemmel sayi sonuclar� :   0  0  0 1 0
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
