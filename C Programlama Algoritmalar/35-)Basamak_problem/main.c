#include <stdio.h>
#include <stdlib.h>

/* Ilk N basamaðýndaki rakamlarýn toplamý, son N basamaðýndaki rakamlarýn toplamýna eþit olan 2N basamaklý tamsayýlar elde edilmeye çalýþýlmaktadýr.
Örneðin 1230 tamsayisi; 4 basamaktan oluþmakta ve ilk 2 basamaðýnýn toplamý (1+2=3), son iki bsamaðýnýn toplamýna (3+0=3) eþittir.
Bu özelliðe sahip 1000-9999 arasýndaki tamsayýlarýn listesini veren programý yazýnýz
 */

int main(int argc, char *argv[]) {
	int i,j,k,m,sonuc=0;
	for(i=1;i<=9;i++){
		for(j=0;j<=9;j++){
			for(k=0;k<=9;k++){
				for(m=0;m<=9;m++){
					if( (i+j) == (k+m) ){
						sonuc= 1000*i+100*j+10*k+m;
						printf("%d bu kosulu saglar\n",sonuc);
					}
				}
			}
		}
	}
	return 0;
}
