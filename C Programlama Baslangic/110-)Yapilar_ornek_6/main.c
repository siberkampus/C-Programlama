#include <stdio.h>
#include <stdlib.h>

/* ABC firmas�nda �al��an her ki�i i�in a�a��daki elemanlar� i�eren bir yap� tan�mlay�n�z:
	�sim
	Soyad
	Ya�
	Ayl�k
	B�l�m
	Firmada �al��an 50 ki�i i�in bir yap� olu�turunuz ve bilgilerini giriniz 
	a-)Bir Fonksiyonda firmadaki 60 ya� �st� �al��anlar�n� bulunuz
	b-)Bir fonksiyonda ortalama ayl��� bulunuz
	c-)En yuksek ayl��� alan ki�inin isim,soyad,ve b�l�m�n� ekranda g�steriniz
	d-) En fazla eleman�n�n �al��t��� b�l�m�n ad�n� ekranda g�steriniz
	
	NOT:Programa 50 adet girdi vermek uzun s�rd��� i�in 3 adet girdi ile s�n�rlad�m. Gerekli de�i�iklikler yap�larak 50 eleman i�in kullan�labilir.
*/

struct eleman{
	char isim[15];
	char soyisim[15];
	int yas;
	double aylik;
	char bolum[20];
	
};
int altmis_yas(int a){
	if(a>60)
		return 1;
	return 0;	
}

double ortalama_aylik(double maas){
	return maas/3;
}

int  maks_maas(struct eleman *elemanlar){
	int i,index=0;
	double max=elemanlar[i].aylik;
	
	for(i=0;i<3;i++){
		if(elemanlar[i].aylik>max){
			max=elemanlar[i].aylik;
			index=i;
		}
	}
	return index;
}

int main(int argc, char *argv[]) {
	struct eleman elemanlar[3];
	double maaslar;
	int i;
	for(i=0;i<3;i++){
		printf("%d. Eleman Adi: ",i+1);
		scanf("%s",&elemanlar[i].isim);
		printf("%d. Eleman Soyadi: ",i+1);
		scanf("%s",&elemanlar[i].soyisim);
		
		printf("%d. Elemanin yasi: ",i+1);
		scanf("%d",&elemanlar[i].yas);
		
		printf("%d. Eleman Maasi: ",i+1);
		scanf("%lf",&elemanlar[i].aylik);
		maaslar+=elemanlar[i].aylik;
		printf("%d. Elemanin Calistigi Bolum: ",i+1);
		scanf("%s",&elemanlar[i].bolum);
		printf("\n");	
	}
	int altmis_ustu=0;
	for(i=0;i<3;i++){
		altmis_ustu+=altmis_yas(elemanlar[i].yas);}
	
	/*for(i=0;i<3;i++){
		printf("%d. Eleman Adi: %s\n",i+1,elemanlar[i].isim);
		printf("%d. Eleman Soyadi: %s\n",i+1,elemanlar[i].soyisim);
		printf("%d. Elemanin yasi: %d\n",i+1,elemanlar[i].yas);
		printf("%d. Eleman Maasi: %.2lf\n",i+1,elemanlar[i].aylik);
		printf("%d. Elemanin Calistigi Bolum: %s\n",i+1,elemanlar[i].bolum);
		printf("\n");	
	}*/
	printf("Altmis yas ve ustu: %d eleman vardir.\n",altmis_ustu);	
	maaslar = ortalama_aylik(maaslar);
	printf("Calisanlarin ortalama ayligi : %.2lf\n",maaslar);
	int index = maks_maas(elemanlar);
	printf("En yuksek maas alan calisan: %s ve maasi: %.2lf ",elemanlar[index].isim,elemanlar[index].aylik);
	return 0;
}
