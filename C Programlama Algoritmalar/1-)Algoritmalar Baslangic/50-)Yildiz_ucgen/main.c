#include <stdio.h>
#include <stdlib.h>

/*Klavyeden girilen satir sayisina g�re ekranda "*" karakterlerinden e�kenar ��gen olu�turan program� yaz�n�z

	3 ise   *
		   ***
		  *****
		  
	2 ise  *
		  ***
*/				

int main(int argc, char *argv[]) {
	int satir;
	printf("Satir sayisini giriniz : ");
	scanf("%d",&satir);
	int i,j;
	for(i=0;i<satir;i++){
		for(j=satir;j>i;j--){
			printf(" ");
		}
		for(j=0;2*i+1>j;j++){
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
