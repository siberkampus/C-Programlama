#include <stdio.h>
#include <stdlib.h>

/* Us operatoru ya da fonksiyonu kullanmadan klavyeden girilen bir tamsay�n� yine klavyeden girilen tamsay� kadar �ss�n� ekrana yazd�r�n*/

int main(int argc, char *argv[]) {
	int a,b;
	printf("Tamsayi giriniz :");
	scanf("%d",&a);
	printf("Ussu giriniz :");
	scanf("%d",&b);
	
	int i,us=1;
	for(i=0;i<b;i++){
		us*=a;
	}
	printf("Islemin sonucu = %d",us);
	return 0;
}
