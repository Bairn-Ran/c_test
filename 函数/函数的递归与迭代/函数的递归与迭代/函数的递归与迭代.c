#include<stdio.h>
//ѭ���ǵ�����������������ѭ��

int fac1(int x)//�ݹ�ʵ��
{
	if (x > 1)
		return fac1(x-1) * x;
	else
		return 1;
}
int fac2(int x)//������ѭ����ʵ��
{
	int ret = 1;
	int i = 0;
	for (i = 1;i <= x;i++)
	{
		ret *= i;
	}
	return ret;
}


//���n����쳲�������
//쳲���������
long long fib(int x)//����ĵݹ�����ָ������ʽ�����ģ���˻���ֺܶ��ظ�����ĵط���Ч�ʼ������
{
	if (x <= 2)
		return 1;
	else
		return fib(x - 1) + fib(x - 2);
}
long long fib2(int x)//����long long��Ϊ�˷�ֹ���,��������ٶȾͻ��ܶ�
{
	long long a = 1;
	long long b = 1;
	long long c = 0;
	while (x >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}

//�ݹ�̫��Ҳ���ܳ���ջ���������
//1.�ѵݹ�ĳɷǵݹ�
//2.�þ�̬��������ռ��ջ�Ŀռ�

int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%lld",fib2(a));
	return 0;
}