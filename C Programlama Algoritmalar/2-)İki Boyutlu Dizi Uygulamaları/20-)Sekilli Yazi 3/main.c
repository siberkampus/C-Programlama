#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* Aþaðýdaki çýktýyý veren programý yazýnýz

S	   S      S
 A	   A     A
  K	   K    K
   A   A   A
  	R  R  R
  	 Y Y Y  
  	  AAA



*/
 
 
int main(int argc, char *argv[]) {
	int i;
	char dizi[7]={"SAKARYA"};
	COORD c;
	for(i=0;i<7;i++){
		c.X=i;
		c.Y=i;
		SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
        printf("%c",dizi[i]);
        
        c.X=7;
        SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
        printf("%c",dizi[i]);
        
        c.X=14-i;
        SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
        printf("%c",dizi[i]);
        c.Y=i;
        SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
	}
	
	return 0;
}
