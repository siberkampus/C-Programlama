#include <stdio.h>
#include <stdlib.h>

/*sprintf farkl� de�i�kenlerin de�erini belirli bir format dizgisine uygun olarak yeni bir dizginin i�ine kopyalar*/


int main(int argc, char *argv[]) {
	float benzin = 47.0;
	float km=300;
	char benzin_km[80];
	sprintf(benzin_km,"km'de %.2f lt. benzin yakiyor",km/benzin); //sa�daki dizgiyi benzin_km de�i�keni i�erisine atar
	printf("%s",benzin_km);
	return 0;
}
