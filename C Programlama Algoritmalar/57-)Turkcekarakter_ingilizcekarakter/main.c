#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Klavyeden k���k harflerle girilen kelimedeki T�rk�e harfleri de�i�tiren yani �-->c �-->i gibi d�n��t�ren program� yaz�n�z */

int main(int argc, char *argv[]) {
	char  tr[]={-121,-89,-115,-108,-97,-127}; //Harflerin ASCII olarak kar��l���. Karakter olarka kulland���mda hata verdi�i i�in ASCII kulland�m. Sayilar IDE ye gore de�i�ebilir
	char en[]={"cgiosu"};
	char kelime[20];
	printf("Bir kelime giriniz :");
	scanf("%s",&kelime);
	int i,j;
	for(i=0;i<strlen(kelime);i++){
		for(j=0;j<6;j++){
			if(kelime[i]==tr[j]){
				kelime[i]=en[j];
			}
		}
	}
	printf("Kelimenin yeni hali = %s",kelime);
	return 0;
}
