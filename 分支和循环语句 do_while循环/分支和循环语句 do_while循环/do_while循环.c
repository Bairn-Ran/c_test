#include<stdio.h>
int main()
//���do 
//      ѭ�����
//      while�����ʽ����
//�൱������������֮ǰһֱִ��do�����ѭ��
//�����������ѭ��һ��

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