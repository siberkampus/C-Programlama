#include <stdio.h>
#include <stdlib.h>

/* Basamaklar�n�n toplam� , basamak sayisina esit olan 100-999 arasindaki tamsayilari bulan program� yaz�n�z
	102 = 1+0+2 3 bsamakl�d�r ve �art� sa�lar 
 */

int main(int argc, char *argv[]) {
	int i,j,k;
	for(i=1;i<=3;i++){
		for(j=0;j<=3;j++){
			for(k=0;k<=3;k++){
				if((i+j+k)==3){
					printf("%d sarti sagliyor\n",(100*i+10*j+k));
				}
			}
		}
	}
	return 0;
}
