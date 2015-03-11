#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[50]="Yu-Hsun Lee";
	printf("hello world\n");
	printf("%d\n", 2+3);  //%d print an integer
	printf("%f\n", 1.2+334.654); // %f print a float number 
	printf("%.16f\n",sin(2.0*M_PI/3.0));
	printf("%s\n",name);
	return 0;
}
