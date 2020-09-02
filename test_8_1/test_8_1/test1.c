#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	//while循环结构
	/*while (i < 10)
	{
		i++;
    }*/
	//for循环初始化、判断、调整集为一体
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	while (i < 10)
		if (i == 5)
			if (i = 5)//赋值i,直接输入
			continue;
		printf("%d ", i);
	i++;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//10个元素，循环
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	/*for循环初始条件可以被省略，判断条件被省略，则也是恒为真
	不要随便省略代码*/
	


	return 0;
}