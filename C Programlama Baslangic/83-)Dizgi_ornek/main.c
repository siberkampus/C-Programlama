#include <stdio.h>
#include <stdlib.h>

/* Kullanýcýdan bir satýrlýk metin ve bir kelime alan ve bu kelimenin metin içinde 
	hangi pozisyonda olduðunu ekranda gösteren bir program yazýnýz
	örnek 
		Bir metin giriniz : Ayse bugun hava cok sicak
		Bir kelime giriniz : hava
		hava kelimesi metin içinde 11. karakterden basliyor.
 */

int main(int argc, char *argv[]) {
	char dizgi[100];
	char kelime[20];
	printf("Bir metin giriniz : ");
	gets(dizgi);
	printf("Aramak istediginiz kelimeyi giriniz : ");
	gets(kelime);
	int i,len = strlen(dizgi);
	int len_kelime=strlen(kelime);
	int count=1,j;
	for(i=0;i<len;i++){
		if(dizgi[i]==kelime[0]){
			for(j=1;j<len_kelime;j++){
				if(dizgi[i+j]==kelime[j]){
					count++;
				}
			}

		}
		//printf("count = %d\n",count);
		//printf("kelime_len= %d\n",len_kelime );
		if(count==len_kelime){
			printf("%s kelimesi %d. indexte bulunur\n",kelime,i);
			i=len;
		}
		else{
			count=1;
		}
	}
	return 0;
}
