#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a[SIZE] = {1, 2, 3, 4, 5};
	int b[SIZE] = {1, 2, 3, 4, 0};
	int i;

	
	for(i = 0; i < SIZE; i++)
	{
		if(a[i]!=b[i])
			printf("%d is different\n", i);		
	}
		
	

	return 0;
}
