#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

////������
////�ֲ������������򣺱������ڵľֲ���Χ
////ȫ�ֱ�������������������
//
//int c = 5;//ȫ�ֱ���
////printf("c=%d", c);ִ���Դ������ŵ���������
//
//int main()
//{
//
//	//����������
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




//��������
//�������������ڣ������Ĵ���������֮���ʱ���

//�ֲ��������������ڣ�����ֲ���Χ�������ڿ�ʼ�����ֲ���Χ�������ڽ���
//ȫ�ֱ������������ڣ��������������
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



//����

//#define MAX 100000
int main()
{
	//1.���泣��
	//3.14;
	//34;
	//'a';
	//"asfsa";

	//2.const���εĳ�����
	//int a = 10;//����
	//a = 20;
	//printf("a=%d\n", a);

	//const int a = 10;//a�ǳ�����--���г����ԣ����ɸı䣩
	//a = 20;
	//printf("a=%d\n", a);
	//����


	//int arr[10] = {0};//10��Ԫ��

	//const int n = 10;
	//int arr2[n] = { 0 };//n �Ǳ��������ﲻ��


	//3.#define����ı�ʶ������

	//MAX=20000//err
	/*int n = MAX;
	printf("n=%d\n", n);*/


	

	//4.ö�ٳ���
	//����һһ�оٵĳ���
	//�Ա�
	enum Sex
	{
		//ö�����Ϳ���ȡֵ
		MALE = 3,//����ֵ
		FEMALE,
		SECRET
	};

	enum Sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);



	return 0;
}