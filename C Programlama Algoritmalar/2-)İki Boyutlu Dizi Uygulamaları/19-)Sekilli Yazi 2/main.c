 
#include <stdio.h>
#include <windows.h>
  
/*Aþaðýdaki çýktýyý veren programý yazýnýz   
	                                        ! B harfi 44. index
   BURSA                                    BURSA   
     BURSA                                BURSA
       BURSA                            BURSA
         BURSA                        BURSA
           BURSA                    BURSA
             BURSA                BURSA
               BURSA            BURSA
                 BURSA        BURSA
                   BURSA	BURSA
*/
void main()
{
    // Input
    COORD c;
	int i,j;
	for(i=1;i<10;i++){
		for(j=0;j<5;j++){
			c.X=i*2;
			c.Y=i;
			SetConsoleCursorPosition(
        	GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf("BURSA");
			c.X=46-i*2;
			SetConsoleCursorPosition(
        	GetStdHandle(STD_OUTPUT_HANDLE), c);
			printf("BURSA");

		}
		
	}

  

    getch();
}
