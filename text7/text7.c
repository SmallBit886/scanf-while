#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
/*
int main()
{
	int input = 0;
	printf("你要好好学习吗？（1/0）：");
	scanf("%d", &input);
	if (input == 1)
		printf("offer");
	else
		printf("卖红薯");

	return 0;
}
*/
int main()
{
	int line = 0;
	while (line < 20000)
	{
		printf("敲一行代码:%d\n", line);
		line++;
	}
	if(line>=20000)
	printf("好offer");

	return 0;
}