#include <stdio.h>
#include <stdlib.h>

/* Ilk N basama��ndaki rakamlar�n toplam�, son N basama��ndaki rakamlar�n toplam�na e�it olan 2N basamakl� tamsay�lar elde edilmeye �al���lmaktad�r.
�rne�in 1230 tamsayisi; 4 basamaktan olu�makta ve ilk 2 basama��n�n toplam� (1+2=3), son iki bsama��n�n toplam�na (3+0=3) e�ittir.
Bu �zelli�e sahip 1000-9999 aras�ndaki tamsay�lar�n listesini veren program� yaz�n�z
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
