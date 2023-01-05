







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
//	//sizeof---计算类型或变量所占空间的大小
//	//单位是字节--byte
//
//	//计算机单位
//	//bit-比特
//	//byte--字节=8bit
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


//全局变量
//int a = 100;
//int main()
//{
//	//局部变量
//	//局部变量和全局变量名字冲突局部优先
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}


//写一个代码求两个整数的和
//scanf函数是输入函数
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