#include <stdio.h>
#include <stdlib.h>

/* 1 adet gerilim kayna�� ve 4 adet seri ba�l� diren�ten olu�an bir devre bulunmaktad�r. Diren� ve gerilim de�erleri klavyeden okunacakt�r. 
	Buna g�re devreden akan ak�m�(I) ,R1 direnci �zerindeki gerilim de�erini ve R2 direncinde harcanan g�c� bulunuz 
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
