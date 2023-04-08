#include <stdio.h>
#include <stdlib.h>

/* Kullanýcýdan m pozitif tam sayi deðerini (m<10) ve m tane tamsayýyý alýp a isimli diziye koyan bir program yazýnýzý */
/*Bu program daha sonra bir tamsayý deðeri isteyecek, ve bu tamsayý deðeri dizi içinde mevcut ise çýkaracak ve a dizisinin yeni durumunu ekranda gösterecektir*/

/*
	M giriniz (m<10) : 5 
	5 adet tamsayi giriniz : 10 3 15 7 0 
	Bir tamsayi giriniz : 15
	Yeni dizi = 10 3 7 0
*/

int main(int argc, char *argv[]) {
	int m, a[10],i,n,j,k;
	printf("Bir M  giriniz (m<10 )");
	scanf("%d",&m);
	printf("%d adet tamsayi giriniz: ",m);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}

	printf("Bir tamsayi giriniz : ");
	scanf("%d",&n);
	int count=m;
	for(i=0;i<m;++i){
		if(a[i]==n ){
			for(j=i;j<m-1;++j){		 
				a[j]=a[j+1];
				
			}
			count--;
		}
	}
	for(i=0;i<count;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
