#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*A�a��daki kodun hangi ��kt�y� verdi�ini tahmin ediniz*/
	int *px,*py;
	int x=3,y=4;
	px = &x; //px art�k x de�i�keninin bellekteki yerini i�aret ediyor
	py=&y;  // py art�k y de�i�keninin bellekteki yerini i�aret ediyor
	py=px;	//py �zerine px yaz�l�r. Art�k hem px hem de py x de�i�keninin bellekteki adresinin i�aret ediyor
	*py=5;  // py pointer�n�n i�aret etti�i X de�i�keninin de�erini 5 olarak g�nceller.
	printf("%d",*px);  //Px pointer�n�n i�aret etti�i X de�i�keinin de�erini yazd�r�r. Bir �nceki sat�rda py pointer� taraf�ndan x de�i�keninin de�eri 5 olarak g�ncellenmi�ti
					//Bu sebepten dolay� ekrana 5 ��kt�s�n� verir.
	return 0;
}
