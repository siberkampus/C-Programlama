#include <stdio.h>
#include <stdlib.h>

/*Verilen tamsayi adedini kenar uzunlu�u kabul eden ve * lardan ��kt� veren program*/
/*�rne�in verilen sayi 5 ise 5x5 bir kare olu�turacakt�
		*****
		*****
		*****
		*****
		*****
*/
void ciz(void); //fonksiyon prototopinin tan�mlanmas�
int main(int argc, char *argv[]) {
	ciz();  //Fonskiyona �a�r�da bulunuruz
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
