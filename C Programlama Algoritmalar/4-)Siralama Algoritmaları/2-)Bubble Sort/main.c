#include <stdio.h>
#include <stdlib.h>

/*  2 5 4 1 3 Sayilarini bubble sort ile sýralayýnýz
	
	2 5 4 1 3 
	2 4 5 1 3
	2 4 1 5 3
	2 4 1 3 5
	*********
	2 4 1 3 5
	2 1 4 3 5 
	2 1 3 4 5
	2 1 3 4 5
	*********
	1 2 3 4 5
	1 2 3 4 5
	1 2 3 4 5
	1 2 3 4 5
	*********
 */

int main(int argc, char *argv[]) {
	int i,j,n,dizi[20];
	printf("N sayisini giriniz :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
			printf("%d. elemani giriniz :",i+1);
			scanf("%d",&dizi[i]);
	}
	for(j=1;j<n;j++){
		for(i=0;i<n-1;i++){
			if(dizi[i]>dizi[i+1]){
				int tmp = dizi[i];
				dizi[i]=dizi[i+1];
				dizi[i+1]=tmp;
			}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d ",dizi[i]);
	}
	return 0;
}
