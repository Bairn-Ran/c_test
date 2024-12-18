#include<stdio.h>
/*int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)//可以在里面进行嵌套，如果超过一行需要套大括号
	{
		if (age <= 0)
			printf("没有这个年龄\n");
		else
			printf("少年\n");
	}
	else if (age >= 18 && age < 28) //在c中这个不能直接大于什么小于什么，要分开来写，不然前面会按照是否生成0或1来进行后面的比较
		printf("青年\n");
	else if (age >= 28 && age < 40)
		printf("中年\n");
	else
		printf("年长\n");
	return 0;
}
*/
//switch语句
int main()
{
	int day = 0;
	scanf("%d",&day);
	switch (day)
	{
	/*case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
		*/

	//还有省略写法
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n");
		break;
	case 6:
	case 7:
		printf("weekend\n");
		break;
	defult://所有case不能匹配的，进行defult
		printf("错误");
		break;

	}
	return 0;
}
