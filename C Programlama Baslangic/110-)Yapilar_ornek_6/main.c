#include <stdio.h>
#include <stdlib.h>

/* ABC firmasýnda çalýþan her kiþi için aþaðýdaki elemanlarý içeren bir yapý tanýmlayýnýz:
	Ýsim
	Soyad
	Yaþ
	Aylýk
	Bölüm
	Firmada çalýþan 50 kiþi için bir yapý oluþturunuz ve bilgilerini giriniz 
	a-)Bir Fonksiyonda firmadaki 60 yaþ üstü çalýþanlarýný bulunuz
	b-)Bir fonksiyonda ortalama aylýðý bulunuz
	c-)En yuksek aylýðý alan kiþinin isim,soyad,ve bölümünü ekranda gösteriniz
	d-) En fazla elemanýnýn çalýþtýðý bölümün adýný ekranda gösteriniz
	
	NOT:Programa 50 adet girdi vermek uzun sürdüðü için 3 adet girdi ile sýnýrladým. Gerekli deðiþiklikler yapýlarak 50 eleman için kullanýlabilir.
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
