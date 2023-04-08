#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int not_1,not_2,final;
	double agirlikli_ort;
	char harf_notu;
	printf("Sirasiyla iki arasinav ve final notunuzu giriniz: ");
	scanf("%d%d%d",&not_1,&not_2,&final);
	agirlikli_ort=(not_1*0.2)+(not_2*0.3)+(final*0.5);
	printf("Ders ortalamaniz : %.2f\n",agirlikli_ort);
	if(agirlikli_ort>=90){
		harf_notu='A';
	}
	else{
		if(agirlikli_ort>=80){
			harf_notu='B';
		}
		else{
			if(agirlikli_ort>=70){
				harf_notu='C';
			}
			else{
				if(agirlikli_ort>=60){
					harf_notu='D';
				}
				else{
					harf_notu='F';
				}
			}
		}
	}
	printf("Harf Notunuz : %c",harf_notu);
	return 0;
}
