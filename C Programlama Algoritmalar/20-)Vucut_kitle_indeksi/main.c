#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Aþaðýdaki kurallara göre vücut kitle indeksini hesaplayýnýz
	Kadýnlarda  -->>  45.5+2.3* [Boy(inch)-60] --->>Ýdeal kilo
	Erkeklerde  -->> 50+2.3*[Boy(inch)-60]     --->>Ýdeal kilo
	
	Zayýf  	   -------->>> 18.5 altýnda
	Normal 		   ---->>> 18.5-24.9
	Fazla kilolu   ---->>> 25-29.9
	1. derece obez ----->> 30-34.9
	2. derece obez ----->> 35-39.9
	3. derece obez ----->> 40 üzeri 
	
	beden kitle indeksi = kilo/(boy(m)*boy(m))
	
	indekse göre yukarýdaki çýktýyý ekrana yazdýrmalýdýr 
*/

int main(int argc, char *argv[]) {
	char cinsiyet,dummy;
	double boy,kilo;
	
	printf("Boyunuzu(inch) giriniz :");
	scanf("%lf",&boy);
	printf("Kilonuzu giriniz :");
	scanf("%lf",&kilo);
	printf("Cinsiyetinizi giriniz e/E k/K:");
	scanf("%d",&dummy);
	scanf("%c",&cinsiyet);
	
	double boy_metre = boy/100;
	boy = boy/2.54;
	double ideal_kilo=0;
	
	if(cinsiyet=='k' || cinsiyet=='K'){
		ideal_kilo =45.5+2.3* (boy-60);
	}else{
		if(cinsiyet=='E' || cinsiyet=='e'){
			ideal_kilo =50+2.3* (boy-60);
		}
		else{
			printf("Hatali cinsiyet");
			return 0;
		}
	}
	
	double kitle_indeksi = kilo/pow(boy_metre,2); 
	printf("Ideal kilonuz %.2lf\n",ideal_kilo);
	printf("Vucut kitle indeksiniz : %.2lf\n",kitle_indeksi);
	if(kitle_indeksi<18.5){
		
	}
	if(kitle_indeksi<18.5){
		printf("Durumunuz = Zayif");
	}
	if(kitle_indeksi>18.5 && kitle_indeksi<25){
		printf("Durumunuz = Normal");
	}
	if(kitle_indeksi>=25 && kitle_indeksi<30){
		printf("Durumunuz = Fazla Kilolu");
	}
	if(kitle_indeksi>=30 && kitle_indeksi<35){
		printf("Durumunuz = 1. derece obez");
	}
	if(kitle_indeksi>=35 && kitle_indeksi<40){
		printf("Durumunuz = 2. derece obez");
	}
	if(kitle_indeksi>=40){
		printf("Durumunuz : 3.derece obez");	
	}
	return 0;
}
