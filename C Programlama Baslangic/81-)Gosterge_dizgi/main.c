#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	char *mevsimler[4]={"Sonbahar","Kis","Ilkbahar","Yaz"};
	/*
		0 -->> Sonbahar\0	
		1 -->> Kis\0
		2 -->> Ilkbahar\0
		3 -->> Kis\0
		
		�eklinde bir dizgi olu�turulmu� oldu.
	*/
	mevsimler[3][2]='k'; //Burada dizginin 3 indexindeki degerin 2. indexindeki karakteri k ile de�i�tirmi� olduk yani Yaz-Yak olmu� oldu
	
	return 0;
}
