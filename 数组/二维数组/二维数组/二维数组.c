#include<stdio.h>
//arr[x][y]创建x行y列数组
//放元素是按照顺序按照行来题填充，不够的有元素后面是0(空)
//如果想指定位置放则像int arr[3][4]={{1,2},{3,4},{5,6}}这样的话就只在第一行第二行第三行放了两个数字
//在二维数组中可以省略行但是不能省略列(三维数组也是只能省略第一位，不能省略第二位和第三位)
//每个量的下标的行和列都是从0开始的,如果想对里面某个元素进行操作或使用直接进行定位就行了
//可以把二维数组理解成几个一维数组（按列）,即arr[][]第一个框从上到下第几行，然后再往后相当于一维数组

//二维数组地址在二维数组中也是连续存放的，按照如(0,0)(0,1)(0,2)(1,0)(1,1)(1,2)这样类似排列的，从上到下从左到右
//其中每个量的地址都相隔4，按照16进制进行相加
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int a = 0;
	int b = 0;
	for (a = 0;a < 3;a++)
	{
		for (b = 0;b < 3;b++)
		{
			printf("are[%d][%d]=%p\n", a, b, &arr[a][b]);//发现每一个地址最后都加上4等于下一个地址，按照顺序依次输出，可以知道量在二维数组中也是连续的
			//也就是说实际上arr[3][3]和arr[9]的存储是一样的

		}
	}
	printf("\n\n\n下面是数组越界的举例\n");
	//数组越界
	//数组中n个元素，访问下标小于0或者大于n-1会发生数组越界,编译器不一定报错,可能会打印一些指代别的数
	//而二维数组有下一行则这一列最后溢出的打印下一行的，没有则随意打印
	int arr2[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int c = 0;
	int d = 0;
	for (c = 0;c < 3;c++)
	{
		for (d = 0;d <= 3;d++)
		{
			printf("arr[%d][%d]=%d\n", c, d, arr[c][d]);
		}
	}
	return 0;
}