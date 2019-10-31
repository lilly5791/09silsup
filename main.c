#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int student[SIZE];
	int i, sum = 0;
	
	for(i = 0; i < SIZE; i++)
	{
		printf("input grade[%d]:", i);
		scanf("%d", &student[i]);
	}
		
	for(i = 0; i < SIZE; i++)
	{
		sum += student[i];
		printf("student[%d] = %d\n", i, student[i]);
	}
	printf("average is %d\n", sum/5);

	return 0;
}
