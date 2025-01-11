#include<stdio.h>
#include <cstdlib>
#include<time.h>
//生成随机数
//猜
//猜大or猜小
//直到猜对了，结束
void menu()//菜单
{
	printf("*******************\n");
	printf("*******1.play******\n");
	printf("*******0.exit******\n");
	printf("*******************\n");
}


void game()//游戏主体
{
	int guess = 0;
	//1.生成随机数
	//RAND_MAX;//其中这个需要2 #include <cstdlib>这个头文件//生成0~32767
	int ret = rand() % 100 + 1;//由于模100，这样余数就是0~99，最后加1则生成0~100
	printf("请猜数字:>");
	while (1)
	{
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if(guess<ret)
			printf("猜小了\n");
		else
		{
			printf("恭喜，对了\n");
			break;
		}
	}
	
}

int main()
{
	srand((unsigned int)time(NULL));//要用srand调用rand，不然生成的是伪随机数，每次启动生成随机数的顺序都是一样的。如果直接往srand里面填值，则由于设定相同，所以每次生成的随机数都是一样的
	//因此这里我们使用时间戳，会不停变化（unsigned int是srand中的类型，强制转换为这个类型）
	//而如果随着游戏不断开始间隔时间较短，生成的随机数相间隔很近，因此放到主函数中只会生成一次
	int input = 0;
	//选择模式的循环判断，清晰表明整个游戏开始结束的循环逻辑
	do{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();//整个游戏的逻辑，这里直接用自定义来塞进去
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);//括号中值是1会继续循环，是0直接结束循环结束
	return 0;
}