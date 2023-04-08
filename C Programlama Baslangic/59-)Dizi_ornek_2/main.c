#include <stdio.h>
#include <stdlib.h>

/* Kullan�c�dan m pozitif tamsay�s�n� alan bir program yazn�n�z (m<10)
	Daha sonra kulan�c�dan MxM tamsayi dizisine sat�r s�ral� elemanlar okunacak ve bu dizinin elemanlar�n�n yerine �yle de�i�tirecek ki bu de�i�im
	sonras�nda dizinin ilk sat�r elemanlar� son sat�r elemanlar� ile de�i�tirilecektir.Bu i�lem s�ras�nda ba�ka bir dizi kullan�lmayacalt�r
	
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
