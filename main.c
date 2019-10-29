#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int student[5];
	int i, j;
	
	student[0] = 10;
	student[1] = 20;
	student[2] = 30;
	student[3] = 40;
	student[4] = 50;
	
	for(i = 0; i < 5; i++)
		printf("%d\n", student[i]);
	
	return 0;
}
