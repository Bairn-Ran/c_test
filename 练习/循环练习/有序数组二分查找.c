#define _CRT_SECURE_NO_WARNINGS
//在一个有序数组中查找具体某个数字n（讲解二分查找）


//该程序可以找到所输入数字在数组中的下标
//aizeof()可以查看数据类型所占的字节数，数组中每个元素的字节数相同
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k;
//	scanf("%d",&k); 
//	//在一个有序数组查找具体的某个数字n
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//因此这里可以用这个计算数组的长度
//	for (i = 0;i < sz;i++)//把整个数组按顺序核查一遍，直到找到这个数字
//	{
//		if (arr[i] == k)
//		{
//			printf("找到，下标为%d\n",i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k;
	scanf("%d",&k);

	int sz = sizeof(arr) / sizeof(arr[0]);//sz为数组的长度

	
	//定义左右下标,算出中间值下标
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;
	
	//当左下标小于等于又下标时进行循环
	while (left <= right)
	{
		if (arr[mid] < k)
			left= mid + 1;
		else if (arr[mid] > k)
			right= mid - 1;
		else
		{
			printf("找到 下标为%d\n", mid);
			break;
		}
		mid = (left + right) / 2;
	}
	if (left > right)
		printf("找不到");
	return 0;
}