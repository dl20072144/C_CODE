#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int Add(int x, int y)
{
	
	return x + y;;
}


int main()
{
	/*char arr[] = "fw";
	printf("%s\n", arr);*/

	//选择语句
	/*int a, b;
	scanf("%d %d", &a, &b);
	if (a - b > 0)
		printf("a>b");
	if (a - b == 0)
		printf("a=b");
	if (a - b < 0)
		printf("a<b");*/


		//循环语句
		//while循环
		/*int line = 0;
			while (line < 30000)
		{
			printf("写代码:%d\n",line);
			line = line++;
		}

		if (line == 30000)

			printf("成功了");*/


			//
			//int num1 = 0;
			//int num2 = 0;
			//scanf("%d %d", &num1, &num2);
			////printf("%d\n", num1 + num2);

			////函数
			//int sum = Add(num1, num2);
			//printf("%d\n", sum);



		//数组--一组相同类型的元素的集合
		//10个整形1-10存储
	//数组是用下标来访问的
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[5] = { 'a','d','y'};//不完全初始化，剩余默认为零
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	
	
	return 0;
}