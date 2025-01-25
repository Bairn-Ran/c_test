#include<stdio.h>
//循环是迭代但迭代不仅仅是循环

int fac1(int x)//递归实现
{
	if (x > 1)
		return fac1(x-1) * x;
	else
		return 1;
}
int fac2(int x)//迭代（循环）实现
{
	int ret = 1;
	int i = 0;
	for (i = 1;i <= x;i++)
	{
		ret *= i;
	}
	return ret;
}


//求第n个的斐波那契数
//斐波那契数列
long long fib(int x)//这里的递归是以指数的形式增长的，因此会出现很多重复计算的地方，效率及其低下
{
	if (x <= 2)
		return 1;
	else
		return fib(x - 1) + fib(x - 2);
}
long long fib2(int x)//都用long long是为了防止溢出,这里面的速度就会快很多
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

//递归太深也可能出现栈溢出的问题
//1.把递归改成非递归
//2.用静态变量，不占用栈的空间

int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%lld",fib2(a));
	return 0;
}