#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float total,gas,far,parking,etc,t;
	printf("�@��Ѫ��`���{��");
	scanf("%f", &t);
	printf("�T�o�@����/�[�ڦh�ֿ�");
	scanf("%f", &gas);
	printf("�����@����/�[�گ��p�h�֤���");
	scanf("%f", &far);
	printf("�@�Ѫ������O");
	scanf("%f", &parking);
	printf("�@�Ѫ��q��O(�L���O)");
	scanf("%f", &etc);
	total = t * gas / far + parking + etc;
	printf("�`��O��:%f",total);
	

	system("pause");
	return 0;
}