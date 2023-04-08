#include <stdio.h>
#include <stdlib.h>

void topla(void); //Deðer almayan ve herhangi bir deðer döndürmeyen fonksiyon prototipi oluþturduk
 
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
		return 0; //Toplam fonksiyonunu sonlandýrýr
	}
	printf("1-%d arasindaki sayilarin toplami= %d",sayi,toplam);
	//topla fonksiyonu bittikten sonra main fonksiyonu kaldýðý yerden devam eder
}
