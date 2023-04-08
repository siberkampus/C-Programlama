#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
		   	 ***
		    ***
	       ***
	      ***
		 ***
	    ***     
	   yukarýdaki görsel çýktýyý üreten programý döngü kurarak yaziniz
	*/
	int i ,k;
	for(k=0;k<=5;k++){
		for(i=5;i>k;i--){
			printf(" ");
		}
	printf("***\n");
	}
	/*Hayal gücünüze göre farklý çözümler bulabilirsiniz*/
	return 0;
}
