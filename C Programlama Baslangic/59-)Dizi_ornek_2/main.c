#include <stdio.h>
#include <stdlib.h>

/* Kullanýcýdan m pozitif tamsayýsýný alan bir program yaznýnýz (m<10)
	Daha sonra kulanýcýdan MxM tamsayi dizisine satýr sýralý elemanlar okunacak ve bu dizinin elemanlarýnýn yerine öyle deðiþtirecek ki bu deðiþim
	sonrasýnda dizinin ilk satýr elemanlarý son satýr elemanlarý ile deðiþtirilecektir.Bu iþlem sýrasýnda baþka bir dizi kullanýlmayacaltýr
	
	m giriniz = 2
	3x3 dizi giriniz: 2 3 2 4 5 3 1 0 8
	
	Dizinin ilk hali :
	2 3 2
	4 5 3 
	1 0 8
	
	Dizinin son hali:
	1 0 8 
	4 5 3 
	1 0 8
*/

int main(int argc, char *argv[]) {
	int m,i,j,dizi[10][10],tmp;
	printf("Bir m sayisi giriniz: ");
	scanf("%d",&m);
	if(m>=10){
		printf("Gecersiz M degeri girdiniz!!");
		return 0;
	}
	printf("%dX%d dizi giriniz: ",m,m);
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%d",&dizi[i][j]);
		}
	}
	printf("****Dizinin ilk hali*****\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%d\t",dizi[i][j]);
		}
		printf("\n");
	}
	printf("*************************\n");
	for(i=0;i<1;i++){
		for(j=0;j<m;j++){
			if(i==0){
				tmp=dizi[0][j];
				dizi[0][j]=dizi[m-1][j];
				dizi[m-1][j]=tmp;
			}
		}
	}
	printf("****Dizinin son hali****\n");
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%d\t",dizi[i][j]);
		}
		printf("\n");
	}
	printf("************************");
	return 0;
}
