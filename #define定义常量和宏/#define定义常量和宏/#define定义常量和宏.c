//define�������ڶ��峣��
#define NUM 100//��ʱ�и�����NUM��ֵΪ100
#include<stdio.h>
//define�����Զ����
//�е����ƺ���
#define ADD(x,y) x+y//�൱��ADD(x,y)�ж�x��y���мӷ�����
int main()
{
	printf("%d\n", NUM);
	int a = NUM;
	printf("%d\n", a);
	int arr[NUM] = { 0 };//��ֱ�Ӱ�NUM���ɳ�����
	
	int x = 100;
	int y = 200;
	int z = ADD(x,y);
	printf("%d\n",z);//����ADD�Ǻ�
	return 0;
}