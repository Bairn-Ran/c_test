#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		char password[] = { 0 };
		printf("请输入密码\n");
		scanf("%s", password);//数组名本来就是地址，因此不用加&符号
		//比较两个字符串是否相等，要使用库函数strcmp
		if (strcmp(password,"sjw518")==0)//如果返回值为0，则证明两个字符串相等
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
		if (i == 3)
			printf("三次密码均输入错误，退出程序");
	}
	return 0;

}

