#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
/*
int main()
{
	int input = 0;
	printf("��Ҫ�ú�ѧϰ�𣿣�1/0����");
	scanf("%d", &input);
	if (input == 1)
		printf("offer");
	else
		printf("������");

	return 0;
}
*/
int main()
{
	int line = 0;
	while (line < 20000)
	{
		printf("��һ�д���:%d\n", line);
		line++;
	}
	if(line>=20000)
	printf("��offer");

	return 0;
}