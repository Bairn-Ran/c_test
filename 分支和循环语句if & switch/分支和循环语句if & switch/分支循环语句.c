#include<stdio.h>
/*int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)//�������������Ƕ�ף��������һ����Ҫ�״�����
	{
		if (age <= 0)
			printf("û���������\n");
		else
			printf("����\n");
	}
	else if (age >= 18 && age < 28) //��c���������ֱ�Ӵ���ʲôС��ʲô��Ҫ�ֿ���д����Ȼǰ��ᰴ���Ƿ�����0��1�����к���ıȽ�
		printf("����\n");
	else if (age >= 28 && age < 40)
		printf("����\n");
	else
		printf("�곤\n");
	return 0;
}
*/
//switch���
int main()
{
	int day = 0;
	scanf("%d",&day);
	switch (day)
	{
	/*case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
		*/

	//����ʡ��д��
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
	defult://����case����ƥ��ģ�����defult
		printf("����");
		break;

	}
	return 0;
}
