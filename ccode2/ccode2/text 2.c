







#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(int));
//
//	
//	
//	//sizeof---�������ͻ������ռ�ռ�Ĵ�С
//	//��λ���ֽ�--byte
//
//	//�������λ
//	//bit-����
//	//byte--�ֽ�=8bit
//	//kb--1024byte
//	//mb--1024kb
//	//gb--1024mb
//	//tb--1024gb
//	//pb--1024tb
//	
//	
//	return 0;
//}

//int main()
//{
//	
//	int age = 18;
//	double weight = 54.5;
//
//	age = age + 1;
//	weight = weight - 5;
//
//	printf("%d\n", age);
//	printf("%lf\n",weight);
//
//
//	return 0;
//}
//%d--int
//%f--float
//%lf--double


//ȫ�ֱ���
//int a = 100;
//int main()
//{
//	//�ֲ�����
//	//�ֲ�������ȫ�ֱ������ֳ�ͻ�ֲ�����
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}


//дһ�����������������ĺ�
//scanf���������뺯��
int main()
{
	int a;
	int b;
	int sum;
	scanf("%d %d", &a, &b);
	sum=a + b;
	printf("%d\n", sum);
	
	return 0;
}