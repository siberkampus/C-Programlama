#include <stdio.h>
#include <stdlib.h>

/*3 basamaklý bir tamsayi okuyup basamak() fonksþyonuna parametre olarak yollayýnýz.Sayinin 3 basamaklý olup olmadýðýný kontrol etmek için kontrol() fonksiyonuna gönderiniz basamak() fonksiyonunda tamsayýyý basamaklarýna
ayýrýp parametre olarak main() fonksiyonuna geri yollayýp ekranda gösteriniz 
*/
void basamak(int a,int *x,int *y,int *z);
int kontrol(int a);
int main(int argc, char *argv[]) {
	int sayi,x,y,z;
	printf("3 basamakli bir tamsayi giriniz :");
	scanf("%d",&sayi);
	int result = kontrol(sayi);
	if(result!=3){
		printf("Hatali Girdi!!");
	}
	else{
		basamak(sayi,&x,&y,&z);		
	}
	return 0;
}

int kontrol(int a){
	int count=0;
	while(a){
		a=a/10;
		count++;
	}
	return count;
}

void basamak(int a,int *x,int *y,int *z){
		z=a%10;
		printf("Birler basamagi = %d\n",z);
		a=a/10;
		y = a%10;
		printf("Onlar basamagi = %d\n",y);
		a=a/10;
		x = a%10;
		printf("Yuzler basamagi = %d\n",x);
		

}
