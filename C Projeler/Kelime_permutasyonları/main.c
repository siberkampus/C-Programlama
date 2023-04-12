#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen bir kelimenin tüm permütasyonlarýný listeleyen programý yazýnýz
	P(n,r) = n!/(n-r)!
*/
void permutasyon(char *k,int sol,int sag){
	int i,g;
	if(sag==sol){
		printf("%s\n",k);
	}
	else{
		for(i=sol;i<=sag;i++){
			g=k[sol];
			k[sol]=k[i];
			k[i]=g;
			permutasyon(k,sol+1,sag);
			g=k[sol];
			k[sol]=k[i];
			k[i]=g;
				
		}
	}
}
int main(int argc, char *argv[]) {
	char k[100];
	printf("Kelimeyi giriniz : ");
	gets(k);
	permutasyon(k,0,strlen(k)-1);
	
	return 0;
}
