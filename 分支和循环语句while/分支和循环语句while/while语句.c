//只要while后面括号为真，大括号里的内容就会一直循环
#include<stdio.h>
/*int main()
{
	int a = 1;
	while (1)
	{
		printf("%d\n",a);
		a++;
		if (a == 5)
		{
			a++;
			continue;//continue可以让程序跳过下面的代码进入下一个循环	
		}
		if (a == 11)
			break;//利用break提前终止程序
	}
	return 0;
}
*/


//int ch=getchar();//获取一个字符的阿斯玛值给ch
// printf("%c\n",ch);//再将ch用字符的方式打印出来
// 上面这个也相当于putchar(ch);
//如果没通过的话会返回EOF//end of file文件结束标志,其值为-1
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//!=的意思是不等于,即程序不能输出时停止这个循环
//	{
//		//getchar可以识别输入时的回车，所以在输入后点回车在输出时也会在后面有一个回车,形成了自动换行的特点 
//		putchar(ch);//输出ch中阿斯玛值所代表的字符
//		//若想停止可以输入ctrl+z停止进程
//	}
//	
//	return 0;
//}
int main()
{
	char password[20] = { 0 };
	printf("请输入密码");
	scanf("%s", password);

	//getchar();//读取了\n //但是这种情况如果在密码最后有空格scanf依然不会读取掉，在后面的if判断语句就会出现问题，需要更多的getchar来消耗
	//输入缓冲区：在scanf中输入之后点的回车进行确认，这个回车不会存到scanf之中而是会存到输入缓冲区里，所以下面如果使用了getchar则会把空格也放到里面,程序就无法照常运行
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}//这样的话就能吞掉所有的空格

	printf("请确认密码（Y/N）:>");
	int ret = getchar();
	if ('Y' == ret)
		printf("YES\n");
	else if ('N' == ret)
		printf("NO\n");
	else
		printf("错误");
	return 0;


}
