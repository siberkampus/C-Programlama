#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Çaðrýldýðý yerden bir metin ve bir kelime alan ve bu kelimeyi metin içinden çýkarak aluþturulan yeni dizgiyi çaðrýldýðý yere geri gönderen bir fonksiyon yaziniz

	Bir metin giriniz: Dun bugun yarin daima taze
	Bir dizgi giriniz : yarin
	Dun bugun daima taze
 */
#define		SIZE   100
#define		SIZE2  20
int strloc(char metin[],char kelime[],int met_len,int kel_len){
	int i,j,count=0,index=-1;
	for(i=0;i<met_len;i++){
		if(kelime[0]==metin[i]){
			for(j=0;j<kel_len;j++){
				if(kelime[j]==metin[i+j]){
					count++;
				}
			}
			if(count==kel_len-1){
				index=i;
			}
			count=0;
		}
	}
	if(index!=-1){
		return index;
	}
	else{
		return 0;
	}
	
}

void cikart(char metin[],char kelime[]){
	int met_len=strlen(metin);
	int kel_len=strlen(kelime);
	int index = strloc(metin,kelime,met_len,kel_len);
	char yeni_dizgi[SIZE];
	strncpy(yeni_dizgi,metin,index);
	yeni_dizgi[index]='\0';
	int len = strlen(yeni_dizgi);
	int sonuc = index+kel_len;
	strcpy(&yeni_dizgi[len],&metin[sonuc-1]);
	strcpy(metin,yeni_dizgi);
}


int main(int argc, char *argv[]) {
	char metin[SIZE];
	char kelime[SIZE2];
	printf("Bir metin giriniz: ");
	fgets(metin,SIZE,stdin); //gets fonksiyonu tehlikeli bir fonksiyondur çünkü Buffer Overflow a neden olabilmektedir(Araþtýrabilirsiniz) Dizginin boyutunun aþýlmamasý için fgets kullanýlýr
	printf("Bir dizgi giriniz: ");
	fgets(kelime,SIZE2,stdin);
	cikart(metin,kelime);
	puts(metin);
	return 0;
}
