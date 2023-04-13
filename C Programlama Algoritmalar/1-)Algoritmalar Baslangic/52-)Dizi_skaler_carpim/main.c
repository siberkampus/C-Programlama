#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen N elemanlý A ve B dizilerinin "skaler çarpýmýný" hesaplayan programý yazýnýz
	A={a1,a2,a3,a4.....an}
	B={b1,b2,b3,b4.....bn}
	sonuc = {a1*b1 + a2*b2 + a3*b3 ...+  an*bn}
 */

int main(int argc, char *argv[]) {
	int  dizi1[15];
	int dizi2[15],N,i;
	printf("Kac elemanli dizi gireceksiniz N<15 : ");
	scanf("%d",&N);
	for(i=0;i<N;i++){
		printf("Dizi1 elemani :");
		scanf("%d",&dizi1[i]);
		printf("Dizi2 elemani :");
		scanf("%d",&dizi2[i]);
	}
	int skaler=0;
	for(i=0;i<N;i++){
		skaler+=dizi1[i]*dizi2[i];
	}
	printf("Skaler carpim sonucu : %d",skaler);
	return 0;
}
