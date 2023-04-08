#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* Kullanýcýdan içinde boþluklarýn olduðu bir dizgiyi alan ve daha sonra bu boþluklarý kaldýrarak dizgiyi yeniden yazan bir program yazýnýz */

int main(int argc, char *argv[]) {
	char dizgi[100];
	printf("Bir dizgi giriniz : ");
	fgets(dizgi,100,stdin);
	int len = strlen(dizgi);
	int i,j=0;
	char karakterler[100];
	for(i=0;i<len-1;i++){
		if(isspace(dizgi[i])){
			continue;	
		}
		else{
			karakterler[j]=dizgi[i];
			j++;
		}

	}
	puts(karakterler);
	return 0;
}
