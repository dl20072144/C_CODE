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

	//ѡ�����
	/*int a, b;
	scanf("%d %d", &a, &b);
	if (a - b > 0)
		printf("a>b");
	if (a - b == 0)
		printf("a=b");
	if (a - b < 0)
		printf("a<b");*/


		//ѭ�����
		//whileѭ��
		/*int line = 0;
			while (line < 30000)
		{
			printf("д����:%d\n",line);
			line = line++;
		}

		if (line == 30000)

			printf("�ɹ���");*/


			//
			//int num1 = 0;
			//int num2 = 0;
			//scanf("%d %d", &num1, &num2);
			////printf("%d\n", num1 + num2);

			////����
			//int sum = Add(num1, num2);
			//printf("%d\n", sum);



		//����--һ����ͬ���͵�Ԫ�صļ���
		//10������1-10�洢
	//���������±������ʵ�
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	char ch[5] = { 'a','d','y'};//����ȫ��ʼ����ʣ��Ĭ��Ϊ��
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	
	
	return 0;
}