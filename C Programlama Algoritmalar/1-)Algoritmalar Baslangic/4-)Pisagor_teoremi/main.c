#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Klavyeden iki dik kenar� girilen dik ��genin hipoten�s�n� hesaplayan program� yaz�n�z 
	(kenar1)^2+(kenar2)^2=(hipoten�s)^2
*/

int main(int argc, char *argv[]) {
	int kenar1,kenar2;
	printf("Iki dik kenari giriniz : ");
	scanf("%d%d",&kenar1,&kenar2);
	double hipotenus=pow(kenar1,2)+pow(kenar2,2);
	printf("Ucgenin alani : %.2lf",sqrt(hipotenus));
	
	return 0;
}
