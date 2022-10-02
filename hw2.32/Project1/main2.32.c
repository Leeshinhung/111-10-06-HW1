#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float bmi, height;
	int weight;
	printf("your height(meters)?\nyour weight(kg)?\n");
	scanf("%f %d", &height,&weight);
	bmi = weight / (height*height);
	if (bmi < 18.5) {
		printf("underweight");
	}
	else if (bmi > 30) {
		printf("obese");
	}
	else if (bmi <= 29.9 && bmi>=25) {
		printf("overweight");
	}
	else {
		printf("normal");
	}

	system("pause");
	return 0;
}