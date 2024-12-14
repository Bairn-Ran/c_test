#include<stdio.h>
/*//1.typedef能够给类型重命名，简化一个类型便于后面输入
//如遇到一个较长的函数可以用另一串东西代替它

typedef unsigned int uint;//就相当于把unsigned int等价于uint
typedef struct Node
{
	int data;
	struct Node* next;
}Node;//把struct Node结构体等价于Node

int main()
{
	unsigned int num1 = 0;
	uint num2 = 0;//其中这行代码和上一行等价
	
	struct Node n;//创建节点n
	Node n2;//和上面的创建节点n的结构是一样的
	
	return 0;
}*/

//2.static
//修饰局部/全局变量，修饰函数
//修饰局部变量的时候，局部变量出了作用域不会被销毁
//改变了变量的存储位置，放到静态区直到程序结束才销毁
void test()//（void是不需要返回值和赋值的变量修饰）
{
	static int a = 1;//当定义a初始为1时，再次运行这个函数时这个a不会再被1覆盖
	printf("%d\n", a);
	a++;
}
extern int g_val;//声明外部链接

int main()
{
	int i = 0;
	while (i<10)
	{
		i++;
		test();
	}
	return 0;
}

//3.register寄存器
//register int num=1；
//建议把这个变量放到寄存器中
//加快读写速度