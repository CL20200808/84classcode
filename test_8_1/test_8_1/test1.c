#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0;
	//whileѭ���ṹ
	/*while (i < 10)
	{
		i++;
    }*/
	//forѭ����ʼ�����жϡ�������Ϊһ��
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}
	while (i < 10)
		if (i == 5)
			if (i = 5)//��ֵi,ֱ������
			continue;
		printf("%d ", i);
	i++;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//10��Ԫ�أ�ѭ��
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	/*forѭ����ʼ�������Ա�ʡ�ԣ��ж�������ʡ�ԣ���Ҳ�Ǻ�Ϊ��
	��Ҫ���ʡ�Դ���*/
	


	return 0;
}