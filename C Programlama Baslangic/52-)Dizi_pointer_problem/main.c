#include <stdio.h>
#include <stdlib.h>

/*A�sa��daki program�n ��kt�s� bulmaya �al���n*/

int main(int argc, char *argv[]) {
	double a[]={3.9, 2.4, 7.7, 1.1};
	double *p; //p tek ba��na adress tutar *p ise de�er tutar &p ise p pointer�n�n kendi adresinin tutar
	
	p=a; //Burada art�k pointer dizinin ilk eleman�n� i�aret ediyor
	
	printf("%f\n",*a); //Dizinin ilk eleman�n� yazd�r�r
	printf("%f\n",a[0]); //Dizinin ilk elemanun� yazd�r�r
	printf("%f\n",*p); //Dizinin ilk eleman�n� yazd�r�r
	printf("%f\n",p[0]); //Dizinin ilk eleman�n�n yazd�r�r
	printf("%f\n",a[1]); //Dizinin ikinci eleman�n� yazd�r�r
	return 0;
}
