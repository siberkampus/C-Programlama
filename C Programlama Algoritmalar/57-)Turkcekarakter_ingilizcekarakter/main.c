#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Klavyeden küçük harflerle girilen kelimedeki Türkçe harfleri deðiþtiren yani ç-->c ý-->i gibi dönüþtüren programý yazýnýz */

int main(int argc, char *argv[]) {
	char  tr[]={-121,-89,-115,-108,-97,-127}; //Harflerin ASCII olarak karþýlýðý. Karakter olarka kullandýðýmda hata verdiði için ASCII kullandým. Sayilar IDE ye gore deðiþebilir
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
