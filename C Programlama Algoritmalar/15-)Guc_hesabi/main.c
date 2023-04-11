#include <stdio.h>
#include <stdlib.h>

/* 1 adet gerilim kaynaðý ve 4 adet seri baðlý dirençten oluþan bir devre bulunmaktadýr. Direnç ve gerilim deðerleri klavyeden okunacaktýr. 
	Buna göre devreden akan akýmý(I) ,R1 direnci üzerindeki gerilim deðerini ve R2 direncinde harcanan gücü bulunuz 
	I = V * Rtop
	Guc = I'2*R
*/

int main(int argc, char *argv[]) {
	double gerilim,R1,R2,R3,R4;
	printf("Devrenin gerilim kaynaginin degerini giriniz (V): ");
	scanf("%lf",&gerilim);
	printf("Devrede bulunan seri bagli direncleri sirasiyla giriniz : ");
	scanf("%lf%lf%lf%lf",&R1,&R2,&R3,&R4);
	double I = gerilim/(R1+R2+R3+R4);
	printf("Devredeki akim :%lf\n",I);
	
	printf("R1 direnci uzerindeki gerlim degeri = %lf\n",I*R1);
	
	double P_R2 = I*I*R2;
	printf("R2 direncinde harcanan guc = %lf\n",P_R2);
	return 0;
}
