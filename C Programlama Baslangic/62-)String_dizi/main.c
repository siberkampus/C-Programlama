#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0;
	int say=0;
	char cumle[]="Merhaba Dunya";
	for(i=0;cumle[i]!='\0';i++){
		say++;
	}
	printf("%s cumlesi %d adet karakter icermektedir",cumle,say);
	return 0;
}
