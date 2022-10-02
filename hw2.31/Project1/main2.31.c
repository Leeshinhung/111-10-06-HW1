#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1, num2, num3;
	char *n[] = { "number","square","cube" };
	printf("%s\t%s\t%s\n",n[0],n[1],n[2]);
	for (int i = 0;i <=10;i++) {
		num1 = i;
		num2 = i * i;
		num3 = i * i * i;
		printf("%d\t%d\t%d\n", num1, num2, num3);
	}

	system("pause");
	return 0;
}