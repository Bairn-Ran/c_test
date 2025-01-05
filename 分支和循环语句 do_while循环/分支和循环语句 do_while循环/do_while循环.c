#include<stdio.h>
int main()
//语句do 
//      循环语句
//      while（表达式）；
//相当于在条件成立之前一直执行do后面的循环
//无论如何至少循环一次

{
	int i = 1;

	do
	{
		if (i == 5)
			break;
		printf("%d\n", i++);
	}
	while (i <= 10);
	return 0;
}