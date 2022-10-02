#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1,r;
	printf("one number even or odd :\n");
	scanf("%d", &num1);
	printf("%d \n", num1);
	r = num1 % 2;
	if (r == 0)
		printf("%d is even", num1);
	else 
		printf("%d is odd", num1);


	system("pause");
	return 0;
}