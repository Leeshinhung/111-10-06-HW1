#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int temp, num1, num2, num3;
	printf("three different integers:\n");
	scanf("%d%d%d", &num1, &num2, &num3);
	printf("%d,%d,%d \n", num1, num2, num3);
	while (num1 > num2 || num2 > num3 || num1>num3) {
		if (num1 > num2) {
			temp = num2;
			num2 = num1;
			num1 = temp;
		}
		if (num2 > num3) {
			temp = num3;
			num3 = num2;
			num2 = temp;
		}
	}
	printf("%d,%d,%d",num1, num2, num3);


	system("pause");
	return 0;
}