#include <stdio.h>
#include <stdlib.h>

/*A�a��daki ��kt�y� veren program� yaz�n�z
   BURSA               //3 Karakter i�eriden ba�l�yor	
	  BURSA
	     BURSA
	        BURSA
	           BURSA
	              BURSA
	                 BURSA 
	                    BURSA
*/

int main(int argc, char *argv[]) {
	char dizi[10][8]={{"   BURSA"},{"   BURSA"},{"   BURSA"},{"   BURSA"},{"   BURSA"},{"   BURSA"},{"   BURSA"},{"   BURSA"},{"   BURSA"},{"   BURSA"}};
	int i,j,k;
	for(i=0;i<10;i++){
		for(k=0;k<i*3;k++){
			printf("%c",dizi[0][0]);
		}
		for(j=0;j<8;j++){
			printf("%c",dizi[i][j]);
		}
		printf("\n");
	}
	return 0;
}
