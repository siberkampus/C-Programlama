#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen satir sayisina gore aþsaðýdaki üçgeni oluþturan programý yazýnýz
	1
	2	1
	3	2	1	
	4	3	2	1
	*	*	*	*	*
	*	*	*	*	*	*
	*	*	*	*	*	*	*

 */

int main(int argc, char *argv[]) {
	int satir;
	printf("Satir sayisini giriniz : ");
	scanf("%d",&satir);
	int i,j;
	for(i=0;i<satir;i++){
		for(j=i;0<=j;j--){
			printf("%d	",j+1);
		}
		printf("\n");
	}
	return 0;
}
