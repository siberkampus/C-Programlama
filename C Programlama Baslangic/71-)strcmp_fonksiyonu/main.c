#include <stdio.h>
#include <stdlib.h>

/* strcmp(dizgi1,dizgi2)
	strcmp fonksiyonu iki farkl� dizgiyi kar��la�t�r�r. dizgi1 alfabetik olarak dizgi2 den b�y�kse pozitif de�er k���kse negatif e�it ise 0 de�erini d�nd�r�r
*/

int main(int argc, char *argv[]) {
	char dizgi1[15]="Balik";
	char dizgi2[15]="Kitap";
	int deger =0;
	deger=strcmp(dizgi1,dizgi2);
	printf("%s-%s = %d\n",dizgi1,dizgi2,deger);
	
	deger=strcmp(dizgi1,dizgi1);
	printf("%s-%s = %d\n",dizgi1,dizgi1,deger);
	
	deger=strcmp(dizgi2,dizgi1);
	printf("%s-%s = %d\n",dizgi2,dizgi1,deger);
	return 0;
}
