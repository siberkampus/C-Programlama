#include <stdio.h>
#include <stdlib.h>

/*Verilen tamsayi adedini kenar uzunluðu kabul eden ve * lardan çýktý veren program*/
/*Örneðin verilen sayi 5 ise 5x5 bir kare oluþturacaktý
		*****
		*****
		*****
		*****
		*****
*/
void ciz(void); //fonksiyon prototopinin tanýmlanmasý
int main(int argc, char *argv[]) {
	ciz();  //Fonskiyona çaðrýda bulunuruz
	return 0;
}
void ciz(){
	int sayi,i,j;
	printf("Bir tamsayi giriniz : ");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++){
		for(j=0;j<sayi;j++){
			printf("*");
		}
		printf("\n");
	}
}
