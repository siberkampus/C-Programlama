#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/* kullanýcýdan alýnan m-n aralýðýndaki asal sayilari bulan programý yazýnýz*/
	int m,n,j,gosterge=0,i;
	printf("Tam sayi araligi giriniz :");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		if(i==1){
			gosterge+=1;
		}
		for(j=2;j<i;j++){
			if(i%j==0){
				gosterge+=1;
			}
		}
		if(gosterge==0){
			printf("%d\n",i);
		}
		else{
			gosterge=0;
		}
		
	}
	return 0;
}
