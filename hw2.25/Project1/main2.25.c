#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 0;i < 9;i++)
		printf("P");
	printf("\n");
	for (int i = 0;i < 3;i++) {
		printf("    P   P");
		printf("\n");
	}
	printf("     P P\n\n");
	printf("  JJ\n");
	printf(" J\n");
	printf("J\n");
	printf(" J\n");
	printf("  ");
	for (int i = 0;i < 7;i++)
		printf("J");
	printf("\n\n");
	for (int i = 0;i < 9;i++)
		printf("D");
	printf("\n");
	printf("D       D\n");
	printf("D       D\n");
	printf(" D     D\n");
	printf("  DDDDD\n");
	system("pause");
	return 0;
}