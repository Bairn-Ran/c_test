//计算输入的数字，计算其本身和其前面所有自然数的阶乘之和
#include<stdio.h>

int main()
{
	for (;;)
	{
		long long inplus = 0;

		int in = 0;
		scanf("%d", &in);//输入数字,in作为变量在下面不会变，后面变量是介质
		int inmultiply = in;
		for (;inmultiply > 0;)//加法环节会循环in次
		{
			int in1 = inmultiply;
			int inminus = inmultiply;
			for (;in1 > 1;)
			{
				inminus = (in1 - 1) * inminus;
				in1--;
			}//阶乘模组，每个项得出的值给了inminus
			inmultiply--;
			inplus = inplus + inminus;//最后的项数和计算
		}
		printf("%d\n", inplus);
	}
	
	return 0;
}
