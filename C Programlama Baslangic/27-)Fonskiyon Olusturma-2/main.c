#include <stdio.h>
#include <stdlib.h>

void topla(void); //De�er almayan ve herhangi bir de�er d�nd�rmeyen fonksiyon prototipi olu�turduk
 
int main(int argc, char *argv[]) {
	topla();
	return 0;
}
void topla(){
	int sayi,i,toplam=0;
	printf("Bir tamsayi giriniz :");
	scanf("%d",&sayi);
	for(i=1;i<=sayi;i++){
		toplam+=i;
	}
	if(sayi<=0){
		printf("0 ya da Negatif girdi yaptiniz : ");
		return 0; //Toplam fonksiyonunu sonland�r�r
	}
	printf("1-%d arasindaki sayilarin toplami= %d",sayi,toplam);
	//topla fonksiyonu bittikten sonra main fonksiyonu kald��� yerden devam eder
}
