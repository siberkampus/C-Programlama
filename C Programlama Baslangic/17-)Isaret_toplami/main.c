#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Kullan�dan bir tamsay� al�nacakt�r. Kullan�c� bu tamsay� adedince yeni tam say�lar girecektir*/
	/*Girilen bu tam sayilarin ka��n�n negatif ka��n�n pozitif ve ka��n�n 0 oldu�u yazd�r�lacakt�r*/
	int girdi,pozitif=0,negatif=0,sifir=0,deger,i;
	
	printf("Kac adet tam sayi gireceksiniz:");
	scanf("%d",&girdi);
	for(i=0;i<girdi;i++){
		printf("Bir tam sayi giriniz : ");
		scanf("%d",&deger);
		if(deger>0){
			pozitif++;
		}
		else {
			if(deger<0){
				
				negatif++;
				}
			else{
				if(deger==0){
					sifir++;
					
				}
				else{
					printf("Yanlis girdi!!!");
				}
			}
		}
	}
	printf("Toplam pozitif : %d \nToplam negatif=%d\nToplam Sifir=%d",pozitif,negatif,sifir);
	return 0;
}
