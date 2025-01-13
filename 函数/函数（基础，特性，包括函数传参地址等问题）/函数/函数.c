#include<stdio.h>
//库函数  一定要包含头文件

//strcpy:拷贝字符串
//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "world";
//	printf("%s\n",str1);
//	strcpy(str1, str2);//这里将字符串2的字符串拷贝到字符串
//	printf("%s\n", str1);
//	return 0;
//}
//memset:修改字符串中字符
//int main()
//{
//	char arr[] = "Hello World";
//	memset(arr + 4, 'y', 5);//也就是把arr从第四个字符开始，后面五个字符修改为'y'
//	printf("%s",arr);
//	return 0;
//}

//自定义函数
//基本组成
//ret_type fun_name(para1,*)
//{
//	statement;//语句项目
//}
//返回类型+函数名+函数参数


//eg比较两个数并输出大的数
//int Max(int x, int y)//函数的定义
//{
//	return(x > y ? x:y);
//	//三目运算符，如果x>y,返回x,否则返回y
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = Max(a, b);//函数的调用
//	printf("较大的一个数是%d", max);
//	return 0;
//}


//eg2 调换两个数的值
void swap(int* px, int* py)
{
	int z = *px;//z=a
	*px = *py;//a=b
	*py = z;//b=z
}
//当实参传递给形参的时候,形参是实参的一份临时拷贝
//即x,y是形参，a,b是实参，对形参的修改不会影响实参
//因此选用指针变量存地址
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前%d %d\n", a, b);
	swap(&a, &b);
	printf("交换后%d %d\n", a, b);
	return 0;
}
