#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen NxN matrisin simetrik olup olmadýgýný tespit eden programý kodlayýnýz

	a11 	a12		a13
	a21		a22		a23
	a31		a32		a33    a21=a12  , a31=a13 , a32=a23  ise matris simetriktir
*/

int main(int argc, char *argv[]) {
	int dizi[10][10],i,j,kontrol=1,n;
	printf("N sayisini giriniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d-%d elemanini giriniz :",i+1,j+1);
			scanf("%d",&dizi[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(dizi[i][j]!=dizi[j][i]){
				kontrol=0;
			}
		}
	}
	if(kontrol==1){
		printf("Girilen matris simetriktir.");
	}
	else{
		printf("Girilen matris simetrik degildir.");
	}
	return 0;
}
