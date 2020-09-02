#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int fun()
{
	//EOF->end of file文件结束标记
	/*int ch;
	while (ch = getchar() != EOF)
	{
		putchar(ch);
	}*/
	int ch = 0;
	//char password[20] = { 0 };
	//printf("请输入密码:");//得到了123456
	//scanf("%d", password);//输入密码，并存在password数组中。输入的地址中有123456\n
	//printf("请确认(Y/N):");//'\n还在缓冲区'
	//getchar();//通过getchar()获取缓冲区的\n来清空缓冲区的数据
 //   //通过输入函数来清空缓冲区的数据，有效值之下一次的缓冲区等待
	//while (ch = getchar() != '\n')
	//{
	//	;
	//}
	//int set = 0;
	//set = getchar();// 进入到该输入数据等待中，通过该数据来执行下面的选择语句实现密码输入是否正确。
	//if (set == 'Y')
	//{
	//	printf("%s","输入成功！");

	//}
	//else {
	//	printf("%s", "输入失败！");

	//}
	//while ((ch=getchar())!=EOF)
	 {
		/*if (ch<'0' || ch>'9')
		{
			continue;
			putchar(ch);
		}*/
		/*if (ch>'0'&&ch<'9')
		{
			putchar(ch);
		}*/
	}
	 printf("这是一个方法!");
	return 0;
}