#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("*********\n");
	for (int i = 0; i < 7; i++) {
		printf("*       *\n");
	}
	printf("*********\n\n");

	printf("  ***  \n");
	printf(" *   * \n");
	for (int i = 0; i < 5; i++) {
		printf("*     *\n");
	}
	printf(" *   * \n");
	printf("  ***  \n\n");

	printf("  *\n");
	printf(" ***\n");
	printf("*****\n");
	for (int i = 0; i < 6; i++) {
		printf("  *\n");
	}
	
	printf("    *\n");
	printf("   * *\n");
	printf("  *   *\n");
	printf(" *     *\n");
	printf("*       *\n");
	printf(" *     *\n");
	printf("  *   *\n");
	printf("   * *\n");
	printf("    *\n");


	system("pause");
	return 0;
}