#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void square_array(int a[], int size);
void print_array(int a[], int size);

int main(int argc, char *argv[]) {
	
	int list[4] = {1, 2, 3, 4};
	int i;

	print_array(list, 4);
	square_array(list, 4);
	print_array(list, 4);

	return 0;
}

void square_array(int a[], int size)
{
	int i;
	for(i = 0; i < 4; i++)
		a[i] = a[i] * a[i];
}

void print_array(int a[], int size)
{
	int i;
	for(i = 0; i < 4; i++)
	{
		printf("%d\n", a[i]);
	}
}

