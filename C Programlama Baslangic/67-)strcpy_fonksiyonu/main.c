#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char dizgi_1[]="Kirmizi renk araba favorimdir";
	char dizgi_2[]="Mavi renk araba favorimdir";
	strcpy(dizgi_1,dizgi_2);//Dizgi_2 nin deðeri dizgi_1 içerisine yazýlmýþtýr
	puts(dizgi_1);
	puts(dizgi_2);
	return 0;
}
