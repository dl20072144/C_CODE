#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//��������
	//������������= - * /
	//��λ��������<<  >>
	//λ��������&--��λ��		|��λ��		^��λ���
	//��ֵ������

	/*float a = 9 / 2.0*/;//��һ��С���Ͱ���С��ִ��
	//int a = 34543 % 34;//ȡ��
	//printf("%d\n", a);


	//���� ����
	//int a = 2;
	//int b = a << 1;    //���Ʋ����� --�ƶ�������λ
	//printf("%d\n", b);


	/*int a = 2;
	a = a + 3;
	a = 7;
	a += 5;
	printf("%d\n", a);*/

	//��Ŀ������--ֻ��һ���������Ĳ�����
	//��--�߼�ȡ��
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