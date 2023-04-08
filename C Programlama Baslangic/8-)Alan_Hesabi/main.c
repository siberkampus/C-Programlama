#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	int kenar_1=0,kenar_2=0,alan=0;
	printf("Alani hesaplanacak sekli seciniz: k/K (Kare) d/D (Diktortgen)");
	scanf("%c",&ch);
	if(ch=='k' || ch=='K'){
		
		printf("Karenin kenar uzunlugu : ");
		scanf("%d",&kenar_1);
		printf("Karenin alani = %d",kenar_1*kenar_1);
	}
	else{
	
		if(ch=='d' || ch=='D'){
		printf("Diktortgenin kenar uzunluklari : ");
		scanf("%d%d",&kenar_1,&kenar_2);
		printf("Diktortgenin alani : %d",kenar_1*kenar_2);
		}
		else{
		printf("Yanlis Girdi yaptiniz!!!");
		}
	}
	
	return 0;
}
