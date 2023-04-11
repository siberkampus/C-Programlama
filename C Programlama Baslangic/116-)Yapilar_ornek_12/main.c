#include <stdio.h>
#include <stdlib.h>

/* Bir maraton yarışında kullanılacak C programı yazınız. Maratonda yarışan her atletin ismi , ülkesi, cinsiyeti ve bitiş zamanını (saat,dakika,saniye) bir yapıda saklayınız
	Tüm atletler için bir yapı dizisi oluşturup bu bilgileri giriniz. Bu bilgilerden 
	a-)Kadın ve erkek atletler içerisinde altın madalya kazananların isimlerini
	b-)En iyi zamanı yapan Türk atletin ismini bulup ekranda gösteriniz
 */
  
struct sure{
	int saat;
	int dakika;
	int saniye;
};

struct atlet{
	char isim[15];
	char ulke[15];
	char cinsiyet;
	struct sure maraton_sure;
};


int  zaman_kontrol(struct atlet atlet1){
	if(atlet1.maraton_sure.dakika>60){
		printf("Hatali sure girisi!!!");
		return 0;
	}
	if(atlet1.maraton_sure.saniye>60){
		printf("Hatali sure girisi!!!");
		return 0;
	}
	return 1;
}


int cinsiyet_kontrol(struct atlet atlet1){
	if( ! (atlet1.cinsiyet=='E' || atlet1.cinsiyet=='e' || atlet1.cinsiyet=='k' || atlet1.cinsiyet=='K')){
		printf("Hatali cinsiyet girisi!!!");
		return 0;
	}
	return 1;
}

int en_iyi_erkek(struct atlet atletler[]){
	int i,sure,kontrol=0,index=0;
	for(i=0;i<4;i++){
		if((atletler[i].cinsiyet=='e') || (atletler[i].cinsiyet=='E')){ //Erkek kontrolü
			if(kontrol == 0){
				sure=saniye(atletler[i]);
				kontrol=1;}
				
			if(sure>saniye(atletler[i])){
				sure=saniye(atletler[i]);
				index = i;
			}
		}
	}
	return index;
} 

int en_iyi_kadin(struct atlet atletler[]){
	int i,sure,kontrol=0,index;
	for(i=0;i<4;i++){
		if((atletler[i].cinsiyet=='k') || (atletler[i].cinsiyet=='K')){ //Kadin kontrolü
			if(kontrol == 0){
				sure=saniye(atletler[i]);
				index=i;
				kontrol=1;}
				
			if(sure>saniye(atletler[i])){
				sure=saniye(atletler[i]);
				index = i;
			}
		}
	}
	return index;
} 
int en_iyi_turk(struct atlet atletler[]){
	int i,sure,kontrol=0,index;
	
	for(i=0;i<4;i++){
		if(!  (strcmp(atletler[i].ulke,"turkiye"))){ //Ulke kontrolü
			if(kontrol == 0){
				sure=saniye(atletler[i]);
				index=i;
				kontrol=1;}
				
			if(sure>saniye(atletler[i])){
				sure=saniye(atletler[i]);
				index = i;
			}
		}
	}
	return index;	
}


int saniye(struct atlet atlet1){
	int sure = atlet1.maraton_sure.saat*3600+atlet1.maraton_sure.dakika*60+atlet1.maraton_sure.saniye;
	return sure;
}

int main(int argc, char *argv[]) {
	struct atlet atletler[4];
	int i;
	for(i=0;i<4;i++){
		printf("Atlet adi: ");
		scanf("%s",&atletler[i].isim);
		
		printf("Atlet ulke: ");
		scanf("%s",&atletler[i].ulke);
		
		printf("Atlet cinsiyet: ");
		char dummy; //Enter karakterini bypass etmek için gereksiz bir değişkene enter değerini yazdırıyoruz
		scanf("%c",&dummy);
		scanf("%c",&atletler[i].cinsiyet);
		if(cinsiyet_kontrol(atletler[i])==0)
			return 0;
			
		printf("Atlet derece sirasiyla (saat-dakika-saniye): ");
		scanf("%d%d%d",&atletler[i].maraton_sure.saat,&atletler[i].maraton_sure.dakika,&atletler[i].maraton_sure.saniye);
		if(zaman_kontrol(atletler[i])==0)
			return 0;
	}
	int index1 = en_iyi_erkek(atletler);
	printf("Altin madalya kazanan Erkek : %s\n",atletler[index1].isim);
	int index2 =en_iyi_kadin(atletler);
	printf("Altin madalya kazanan Kadin : %s\n",atletler[index2].isim);
	int index3 =en_iyi_turk(atletler);
	printf("En iyi Turk atlet : %s\n",atletler[index3].isim);
	return 0;
}
