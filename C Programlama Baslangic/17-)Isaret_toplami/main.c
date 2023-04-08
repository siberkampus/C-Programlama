#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Kullanýdan bir tamsayý alýnacaktýr. Kullanýcý bu tamsayý adedince yeni tam sayýlar girecektir*/
	/*Girilen bu tam sayilarin kaçýnýn negatif kaçýnýn pozitif ve kaçýnýn 0 olduðu yazdýrýlacaktýr*/
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
