#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/* Ax^2+Bx+C  Standart iki bilinmeyenli bir denklemdir*/
	/* Delta = B^2-4AC  form�l� ile bulunur*/
	/*Delta>0 ise denklemin birbirinden farkl� iki reel k�k� vard�r*/
	/*Delta=0 ise denklemin e�it iki k�k� vard�r(Yani 1 k�k� vard�r)*/
	/*Delta<0 ise denklemin reel k�k� yoktur. (�maginer k�kleri vard�r)*/
	/*A B C Katsay�lar� verilen denklemin k�klerini bulan program a�a��daki gibidir*/
	int A,B,C,delta;
	printf("Iki bilinmeyenli denklemin A B ve C katsayilarini sirasiyla giriniz :");
	scanf("%d%d%d",&A,&B,&C);
	delta = (B*B)-(4*A*C);
	if(delta>0){
		printf("Denlemin iki farkli koku vardir");
	}
	else {
		if(delta==0){
			printf("Denklemin iki esit koku vardir");
		}
		else{
			printf("Denklemin reel koku yoktur");
		}
	}
	return 0;
}
