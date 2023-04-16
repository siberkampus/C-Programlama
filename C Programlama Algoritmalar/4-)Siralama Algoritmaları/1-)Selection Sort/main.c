#include <stdio.h>
#include <stdlib.h>

/*  20 12 10 15 2 Selection sort ile sýralanmasý aþaðýdaki gibidir

	20 12 10 15 2
	12 20 10 15 2
	10 20 12 15 2
	2 20 12 15 10
	*************
	2 12 20 15 10
	2 10 20 15 12
	*************
	2 10 15 20 12
	2 10 12 20 15
	*************
	2 10 12 15 20		
 */

int main(int argc, char *argv[]) {
	
	int dizi[20],n;
	printf("N sayisini giriniz :");
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		printf("%d. elemanini giriniz :",i+1);
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(dizi[i]>dizi[j]){
				int tmp = dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=tmp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",dizi[i]);
	}
	return 0;
}
