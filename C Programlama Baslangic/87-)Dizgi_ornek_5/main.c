#include <stdio.h>
#include <stdlib.h>

/* Kullanýcýdan (A-Z, a-z, 0-9) karakterlerinden oluþan dizgileri girdi olarak alan ve her karakterin dizgi içinde kaç kez geçtiðini bulan bir program yazýnýz
*/

#define		SIZE	100

int main(int argc, char *argv[]) {
	char dizgi[SIZE];
	char alfabe[64]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
	printf("(A-Z,a-z,0-9) Karakterlerinden olusan bir dizgi giriniz: ");
	fgets(dizgi,SIZE,stdin);
	int k=0,i,j;
	int len =strlen(dizgi);
	int toplam[64];
	for(i=0;i<64;i++){
		toplam[i]=0;
	}
		
		for(i=0;i<len;i++){
			for(j=0;j<64;j++){
				if(dizgi[i]==alfabe[j]){
					toplam[j]=toplam[j]+1;
					
				}
			}
		}
		
		
	for(i=0;i<64;i++){
		if(toplam[i]!=0){
			printf("%c karakterinden %d adet vardir\n",alfabe[i],toplam[i]);
		}
	}
	return 0;
}
