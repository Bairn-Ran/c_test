//define可以用于定义常量
#define NUM 100//此时有个常量NUM其值为100
#include<stdio.h>
//define还可以定义宏
//有点类似函数
#define ADD(x,y) x+y//相当于ADD(x,y)中对x和y进行加法运算
int main()
{
	printf("%d\n", NUM);
	int a = NUM;
	printf("%d\n", a);
	int arr[NUM] = { 0 };//就直接把NUM当成常量了
	
	int x = 100;
	int y = 200;
	int z = ADD(x,y);
	printf("%d\n",z);//这里ADD是宏
	return 0;
}