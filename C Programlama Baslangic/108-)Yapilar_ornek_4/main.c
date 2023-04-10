#include <stdio.h>
#include <stdlib.h>

/* Kesirlerle i�lem yapan bir C program� yaz�n�z
	1-) Bolen ve b�l�nenden olu�an bir yapi olu�turunuz
	2-) Kesir i�lemleri i�in 5 adet fonksiyon yaziniz: 
		a-) �ki kesir parametresinin toplam�n� d�nd�ren bir fonksiyon yaz�n�z
		b-) �ki kesir parametresinin fark�n� d�nd�ren bir fonksiyon yaz�n�z
		c-) �ki kesir parametresinin �arp�m�n� d�nd�ren bir fonksiyon yaz�n�z
		d-) �ki kesir parametresinin b�l�m�n� d�nd�ren bir fonksiyon yaz�n�z
		e-)Bir kesir parametresini sadele�tiren bir fonksiyon
 */

struct kesir{
	int bolen,bolunen;
};

struct kesir toplam(struct kesir kes1,struct kesir kes2){
	struct kesir yeni;
	yeni.bolunen=kes1.bolunen*kes2.bolen+kes2.bolunen*kes1.bolen;
	yeni.bolen=kes1.bolen*kes2.bolen;
	return yeni;
}
struct kesir fark(struct kesir kes1,struct kesir kes2){
	struct kesir yeni;
	yeni.bolunen=kes1.bolunen*kes2.bolen-kes1.bolen*kes2.bolunen;
	yeni.bolen=kes1.bolen*kes2.bolen;
	return yeni;
	
}
struct kesir carpim(struct kesir kes1,struct kesir kes2){
	struct kesir yeni;
	yeni.bolunen=kes1.bolunen*kes2.bolunen;
	yeni.bolen=kes2.bolen*kes1.bolen;
	return yeni;
}
struct kesir bolum(struct kesir kes1,struct kesir kes2){
	struct kesir yeni;
	yeni.bolunen=kes1.bolunen*kes2.bolen;
	yeni.bolen=kes1.bolen*kes2.bolunen;
	return yeni;
}
void sadelestir(struct kesir *kes1){
	int sayi_1=kes1->bolen;
	int sayi_2=kes1->bolunen;
	int i;
	int ebob;
	for(i=1;i<=sayi_1 && i<=sayi_2;i++){
		if(sayi_1%i==0 && sayi_2%i==0){
			ebob=i;
		}
	}
	kes1->bolen=kes1->bolen/ebob;
	kes1->bolunen=kes1->bolunen/ebob;
	
}

int main(int argc, char *argv[]) {
	struct kesir kes[2],topla,cikar,carp,bol;
	int i;
	for(i=0;i<2;i++){
		printf("%d. kesir bolunen = ",i+1);
		scanf("%d",&kes[i].bolunen);
		printf("%d. kesir bolen = ",i+1);
		scanf("%d",&kes[i].bolen);
	}	
	
	topla=toplam(kes[0],kes[1]);
	sadelestir(&topla);
	
	cikar=fark(kes[0],kes[1]);
	sadelestir(&cikar);
	
	carp=carpim(kes[0],kes[1]);
	sadelestir(&carp);
	
	bol=bolum(kes[0],kes[1]);
	sadelestir(&bol);
	
	printf("Toplam = (%d/%d) + (%d/%d) = (%d/%d)\n",kes[0].bolunen,kes[0].bolen,kes[1].bolunen,kes[1].bolen,topla.bolunen,topla.bolen);
	printf("Fark = (%d/%d) - (%d/%d)= (%d/%d)\n",kes[0].bolunen,kes[0].bolen,kes[1].bolunen,kes[1].bolen,cikar.bolunen,cikar.bolen);
	printf("Carpim = (%d/%d) * (%d/%d) = (%d/%d)\n",kes[0].bolunen,kes[0].bolen,kes[1].bolunen,kes[1].bolen,carp.bolunen,carp.bolen);
	printf("Bolum = (%d/%d) / (%d/%d)= (%d/%d)\n",kes[0].bolunen,kes[0].bolen,kes[1].bolunen,kes[1].bolen,bol.bolunen,bol.bolen);
	return 0;
}
