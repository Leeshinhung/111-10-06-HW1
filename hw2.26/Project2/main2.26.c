#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1,num2, r;
	printf("two numbers :\n");
	scanf("%d%d", &num1,&num2);
	r = num2 % num1;
	if (r == 0)
		printf("%d is a multiple of %d", num1, num2);
	else
		printf("%d is not a multiple of %d", num1, num2);


	system("pause");
	return 0;
}