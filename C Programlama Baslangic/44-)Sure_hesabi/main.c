#include <stdio.h>
#include <stdlib.h>

/*Ucak yolculugunun kac saniye s�rd���n� kulan�cudan al�n�z. Hesapla() fonksiyonuna g�nderiniz. Saniyeyi saat dakika ve saniyeye d�n��t�r�p bu de�erleri
Kaynak parametresi olarak g�nderiniz.
	*/
void hesapla(int toplam,int *saat,int *dakika,int *saniye);
int main(int argc, char *argv[]) {
	int toplam=0,saat,dakika,saniye;
	printf("Ucak Yolculugunuz kac saniye surdu : ");
	scanf("%d",&toplam);
	hesapla(toplam,&saat,&dakika,&saniye);
	printf("Yolculuk %d saat %d dakika ve %d saniye surmustur.",saat,dakika,saniye);
	return 0;
}

void hesapla(int toplam,int *saat,int *dakika,int *saniye){
	*saniye = (toplam)%60;
	*dakika = (toplam-(*saniye))/60;
	*saat = *dakika/60;
	*dakika = *dakika%60;
	
}
