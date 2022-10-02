#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float total,gas,far,parking,etc,t;
	printf("一整天的總里程數");
	scanf("%f", &t);
	printf("汽油一公升/加侖多少錢");
	scanf("%f", &gas);
	printf("平均一公升/加侖能行駛多少公里");
	scanf("%f", &far);
	printf("一天的停車費");
	scanf("%f", &parking);
	printf("一天的通行費(過路費)");
	scanf("%f", &etc);
	total = t * gas / far + parking + etc;
	printf("總花費為:%f",total);
	

	system("pause");
	return 0;
}