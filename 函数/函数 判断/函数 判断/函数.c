#include<stdio.h>
#include<math.h>//数学函数，包含开平方sqrt
#include<stdbool.h>//引入布尔类型
//形式参数和实际参数可以相同，也可以不同

//函数1
//判断输入值是否为素数
//通过循环求余，通过设立标志来确定是否为素数
void sushu(int x)
{
	int i = x;
	int j,flag = 0;
	for (j=2;j<=sqrt(i);j++)
	{
		if (i % j == 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		printf("%d不是素数\n", x);
	else
		printf("%d是素数\n", x);
}
//下面这个使用布尔类型返回值实现同样效果//布尔类型相当于为0和1封装false和true，其也是一个字节
void sushu2(int x)
{
	int i = x;
	int j;
	for (j = 2;j <= sqrt(i);j++)
	{
		if (i % j == 0)
		{
			return false;
		}
		return true;
	}
}//需要头文件stdbool.h，这样不是素数则返回值为false，是素数则返回值为true

//函数2
//判断是否为闰年
//1.能被4整除但不能被100整除
//2.能被四百整除也是润年
void runnian(int x)
{
	int year = x;
	if (((year % 4 == 0 )&&(year % 100 != 0)||(year % 400 == 0)))
	{
		printf("%d是闰年\n",year);
	}
	else

		printf("%d不是闰年\n",year);
}

//函数3
//整形有序数组二分查找（本函数参照完成因此用的返回值）
//相当于在一个数组中找自己要找的数的下标并返回下标值
//不过得保证这个数组是从大到小排列
int search(int arr[],int k,int sz)//输入数组，要查找的目标值，和数组的大小
{
	int left = 0;
	int right = sz - 1;//设定最左边和最右边的下标
	while (left <= right)
	{
		int mid = left + (right - left) / 2;//这样可以防止溢出，(right+left)/2二者相加可能超过最大量，相比于此可以容纳更大的数字范围，这样就成功设定了中间值
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
			return mid;//找到了返回目标值下标//这里返回之后直接程序就结束了
	}
	return -1;//找不到的情况
}
/*int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//这里的总数sz不能放在函数当中
	//因为数组作为函数传递的时候，会退化为指针，则放到函数中下面sizeof(arr)指的是指针的大小而不是数组的大小
	int sz = sizeof(arr) / sizeof(arr[0]);//数组有多少个数，由于下标从零开始因此函数内要进行减一
	//（当你将一个数组作为函数参数传递给 search 函数时，数组确实会退化为一个指针。但是，指针可以像数组一样使用下标运算符 [] 来访问元素，这是因为 C 语言中的指针算术运算的规则）
	// 而且因为传到函数函数需要再创建一个数组，这样空间浪费就太大了，数组传参传过去的是数组首元素啊的地址
	// 所以在函数内部计算一个函数参数部分的数组元素个数是不靠谱的
	//找到了返回下标
	//找不到返回-1
	int ret = search(arr,k,sz);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
		printf("找到了，下标为%d",ret);
	return 0;
}*/
//上面是主函数和不能在函数内部计算数组大小sz的原因

//函数4
//每调用一次这个函数num的值+1
void add(int *x)//这里接受地址并对地址进行操作
{
	//*x = *x + 1;
	(*x)++;//因为我们要修改的是原本的值，因此需要在函数中对该数的地址进行操作再返回地址即可
	return &x;
}
//即如果想用函数改变外面的量的时候需要用到指针和地址
//也可以通过赋值的方式实现，直接用返回值进行赋值
int main()
{
	int num = 0;
	add(&num);
	printf("%d\n", num);
	add(&num);
	printf("%d\n",num);
	return 0;
}