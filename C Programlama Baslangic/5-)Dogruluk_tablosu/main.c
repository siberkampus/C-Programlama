#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dogru=1,yanlis=0;
	/* dogru degeri=1 yanlis degeri=0*/
	printf("  p  q  ~pVq\n");
	printf("-------------\n");
	printf("%3d%4d%4d \n",dogru,dogru,!dogru|dogru);
	printf("%3d%4d%4d \n",yanlis,dogru,!yanlis|dogru);
	printf("%3d%4d%4d \n",dogru,yanlis,!dogru|yanlis);
	printf("%3d%4d%4d \n",yanlis,yanlis,!yanlis|yanlis);
	return 0;
}
