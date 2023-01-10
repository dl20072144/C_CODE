#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//操作符：
	//算数操作符：= - * /
	//移位操作符：<<  >>
	//位操作符：&--按位与		|按位或		^按位异或
	//赋值操作符

	/*float a = 9 / 2.0*/;//有一个小数就按照小数执行
	//int a = 34543 % 34;//取余
	//printf("%d\n", a);


	//左移 右移
	//int a = 2;
	//int b = a << 1;    //左移操作符 --移动二进制位
	//printf("%d\n", b);


	/*int a = 2;
	a = a + 3;
	a = 7;
	a += 5;
	printf("%d\n", a);*/

	//单目操作符--只有一个操作数的操作符
	//！--逻辑取反
	/*int a = 54;
	printf("%d\n", !a);*/

	/*int a = 0;
	printf("%d\n", !a);*/


	/*int a = 7;
	printf("%d\n",sizeof(a));*/


	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[2]));
	int num = sizeof(arr) / sizeof(arr[2]);
	printf("%d\n", num);
	


	return 0;
}