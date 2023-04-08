#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/* Ax^2+Bx+C  Standart iki bilinmeyenli bir denklemdir*/
	/* Delta = B^2-4AC  formülü ile bulunur*/
	/*Delta>0 ise denklemin birbirinden farklý iki reel kökü vardýr*/
	/*Delta=0 ise denklemin eþit iki kökü vardýr(Yani 1 kökü vardýr)*/
	/*Delta<0 ise denklemin reel kökü yoktur. (Ýmaginer kökleri vardýr)*/
	/*A B C Katsayýlarý verilen denklemin köklerini bulan program aþaðýdaki gibidir*/
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
