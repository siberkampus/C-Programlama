#include <stdio.h>
#include <stdlib.h>

/* Kullan�c�n�n girdi�i bir dizgiyi okuyarak, bu dizginin tersini bulan bir program yaz�n�z. �rne�in kullaan�c� dizgiye "kitap"
 	girdiyse, program bu diziyi ters �evirerek "patik" e d�n��t�recektir.
 */

int main(int argc, char *argv[]) {
	char dizgi[100];
	printf("Ters cevirilecek metni giriniz : ");
	gets(dizgi);
	
	int len = strlen(dizgi);
	char ters[100];
	int i,j=0;
	for(i=len-1;i>=0;i--){
		ters[j]=dizgi[i];
		j++;
	}
	puts(ters);
	
	return 0;
}
