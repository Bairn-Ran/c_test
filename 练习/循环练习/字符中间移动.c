#include<stdio.h>
#include<string.h>
#include<windows.h>//包括Sleep函数
#include<stdlib.h>//包含system调用系统命令的函数
//
//字符串数组不用大括号
int main()
{
	char arr1[] = "welcome to there";
	char arr2[] = "################";
	int left = 0;
	int right = strlen(arr1)-1;//数组第一位下标是0，因此要减一（strlen是计算\0之前的元素个数）
	//或者int right=sizeof(arr1[1])/sizeof(arr1[0])-2;因为最后还有一个\0作为结束标志
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);//单位毫秒
		//system是调用系统命令的函数，其中cls是系统中的清屏命令
		system("cls");
		left++;
		right--;
	}
	printf("%s",arr2);


	return 0;
}
