#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		char password[] = { 0 };
		printf("����������\n");
		scanf("%s", password);//�������������ǵ�ַ����˲��ü�&����
		//�Ƚ������ַ����Ƿ���ȣ�Ҫʹ�ÿ⺯��strcmp
		if (strcmp(password,"sjw518")==0)//�������ֵΪ0����֤�������ַ������
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
		if (i == 3)
			printf("�����������������˳�����");
	}
	return 0;

}

