#include <stdio.h>
#include <stdlib.h>

/* Basamaklarýnýn toplamý , basamak sayisina esit olan 100-999 arasindaki tamsayilari bulan programý yazýnýz
	102 = 1+0+2 3 bsamaklýdýr ve þartý saðlar 
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
