#include <stdio.h>
#include <stdlib.h>

/*Kullan�n�n iste�i �zerine kombinasyon ve fakt�riyel hesab� yapan program yaz�lmal�d�r */
/* Fakt�riyel i�in kullan�c� 1 tamsayi girmelidir. 4'�n fakt�riyeli 4*3*2*1'dir*/
/*Kombinasyon i�in kullan�c� 2 tam say� girmelidir. (4,2) 4'�n 2'li kombinasyonu a�a��daki form�lle bulunur*/
/*4!/(2!*(4!-2!))*/
int menu();
int faktoriyel(int a);


int main(int argc, char *argv[]) {
	
	int secenek=menu();
	
	int faktor,sonuc;
	
	while(secenek==1 || secenek==2){
	
		if(secenek==1){
			printf("Faktoriyeli hesaplanacak tamsayi : ");
			scanf("%d",&faktor);
		if(faktor>0){//faktor 0 dan b�y�k olmal�d�r
			printf("Faktoriyel sonucu = %d\n\n\n",faktoriyel(faktor));
			}
		else{
				printf("Yanlis faktor girisi!!!\n\n\n");
				return 0; //e�er gecersiz faktor de�eri girilirse program sonlan�r
			}
		}
		if(secenek==2){
			sonuc = kombinasyon();
			if(sonuc>0){ //gecerli bir sonuc beklenir
				printf("Kombinasyon sonucu = %d\n\n\n",sonuc);
			}
			else{
				return 0; //gecerli sonuc gelmezse program sonlan�r
			}	
		}
	secenek=menu();
	}
	
	if(secenek==3){
		printf("Cikis yapiliyor...");
		return 0;
	}
}

int menu(){
	int secenek;
	printf("1- Faktoriyel\n");
	printf("2- Kombinasyon\n");
	printf("3- Cikis\n");
	printf("Yapacaginiz islemi seciniz : ");
	scanf("%d",&secenek);
	return secenek;
}


int faktoriyel(int a){
	int i,sonuc=1;
	for(i=1;i<=a;i++){
		sonuc*=i;}
		
	return sonuc;
}


int kombinasyon(){
	int deger_1,deger_2,pay,payda;
	printf("Kombinasyonu hesaplanacak sayilar (x,y) sirasiyla = ");
	scanf("%d%d",&deger_1,&deger_2);
	if(deger_1>0 && deger_2>0 && deger_1>=deger_2){//Girilen kombinasyon degerleri gecerliyse program cal�s�r	
	pay = faktoriyel(deger_1);
	payda = faktoriyel(deger_2)*(faktoriyel(deger_1-deger_2));
	return pay/payda;}
	else{ //eger girilen kombinasyon de�erleri gecersizse hata mesaj� verilir
		printf("Yanlis kombinasyon girdisi!!\n\n");
		return 0; //0 de�eri d�nd�r�lerek program�n d�zg�n �al��mad��� belirtilmi� olur
	}
	
}
