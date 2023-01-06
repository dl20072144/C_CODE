#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////作用域
////局部变量的作用域：变量所在的局部范围
////全局变量的作用域：整个工程
//
//int c = 5;//全局变量
////printf("c=%d", c);执行性代码必须放到大括号内
//
//int main()
//{
//
//	//先声明变量
//	extern int d;
//
//	printf("d=%d\n", d);
//
//
//
//	printf("xuexi\n");
//	int a = 10;
//	int b = 2;
//	printf("a=%d\n", a);
//	{
//		printf("c=%d\n", c);
//	}
//
//	
//	/*{
//		print("b=%d\n", b);
//	}*/
//	
//	
//	
//
//	return 0;
//}




//生命周期
//变量的生命周期：变量的创建到销毁之间的时间段

//局部变量的生命周期：进入局部范围生命周期开始，出局部范围生命周期结束
//全局变量的生命周期：程序的生命周期
//int main()
//{
//	{
//		int a = 1;
//		printf("a=%d\n", a);
//	}
//	
//
//	return 0;
//}



//常量

//#define MAX 100000
int main()
{
	//1.字面常量
	//3.14;
	//34;
	//'a';
	//"asfsa";

	//2.const修饰的常变量
	//int a = 10;//变量
	//a = 20;
	//printf("a=%d\n", a);

	//const int a = 10;//a是常变量--具有常属性（不可改变）
	//a = 20;
	//printf("a=%d\n", a);
	//错误


	//int arr[10] = {0};//10个元素

	//const int n = 10;
	//int arr2[n] = { 0 };//n 是变量，这里不行


	//3.#define定义的标识符常量

	//MAX=20000//err
	/*int n = MAX;
	printf("n=%d\n", n);*/


	

	//4.枚举常量
	//可以一一列举的常量
	//性别
	enum Sex
	{
		//枚举类型可能取值
		MALE = 3,//赋初值
		FEMALE,
		SECRET
	};

	enum Sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);



	return 0;
}