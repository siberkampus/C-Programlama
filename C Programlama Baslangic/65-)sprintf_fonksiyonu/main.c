#include <stdio.h>
#include <stdlib.h>

/*sprintf farklý deðiþkenlerin deðerini belirli bir format dizgisine uygun olarak yeni bir dizginin içine kopyalar*/


int main(int argc, char *argv[]) {
	float benzin = 47.0;
	float km=300;
	char benzin_km[80];
	sprintf(benzin_km,"km'de %.2f lt. benzin yakiyor",km/benzin); //saðdaki dizgiyi benzin_km deðiþkeni içerisine atar
	printf("%s",benzin_km);
	return 0;
}
