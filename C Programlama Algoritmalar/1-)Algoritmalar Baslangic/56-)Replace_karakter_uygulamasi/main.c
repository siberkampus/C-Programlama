#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Klavyeden girilen bir c�mlede; belirtilen karakteri, yeni de�eriyle de�i�tirip yeniden yazd�ran program� yaz�n�z
	(Miscrosoft Word'te "D�zen men�s�ndeki "De�i�tir se�ene�i")
 */

int main(int argc, char *argv[]) {
	char dizgi[20];
	printf("Dizgiyi giriniz : ");
	scanf("%s",&dizgi);
	int i;
	char dummy,yeni_ch,eski_ch;
	scanf("%c",&dummy);
	
	printf("Degistirmek istediginiz karakteri giriniz :");
	scanf("%c",&eski_ch);
	scanf("%c",&dummy);
	
	printf("Hangi karakterle degistirmek istediginizi giriniz :");
	scanf("%c",&yeni_ch);
	for(i=0;i<strlen(dizgi);i++){
		if(dizgi[i]==eski_ch){
			dizgi[i]=yeni_ch;
		}
	}
	printf("%s",dizgi);
	return 0;
	
}
