#include<stdio.h>
#include <cstdlib>
#include<time.h>
//���������
//��
//�´�or��С
//ֱ���¶��ˣ�����
void menu()//�˵�
{
	printf("*******************\n");
	printf("*******1.play******\n");
	printf("*******0.exit******\n");
	printf("*******************\n");
}


void game()//��Ϸ����
{
	int guess = 0;
	//1.���������
	//RAND_MAX;//���������Ҫ2 #include <cstdlib>���ͷ�ļ�//����0~32767
	int ret = rand() % 100 + 1;//����ģ100��������������0~99������1������0~100
	printf("�������:>");
	while (1)
	{
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if(guess<ret)
			printf("��С��\n");
		else
		{
			printf("��ϲ������\n");
			break;
		}
	}
	
}

int main()
{
	srand((unsigned int)time(NULL));//Ҫ��srand����rand����Ȼ���ɵ���α�������ÿ�����������������˳����һ���ġ����ֱ����srand������ֵ���������趨��ͬ������ÿ�����ɵ����������һ����
	//�����������ʹ��ʱ������᲻ͣ�仯��unsigned int��srand�е����ͣ�ǿ��ת��Ϊ������ͣ�
	//�����������Ϸ���Ͽ�ʼ���ʱ��϶̣����ɵ�����������ܽ�����˷ŵ���������ֻ������һ��
	int input = 0;
	//ѡ��ģʽ��ѭ���жϣ���������������Ϸ��ʼ������ѭ���߼�
	do{
		menu();
		printf("��ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();//������Ϸ���߼�������ֱ�����Զ���������ȥ
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);//������ֵ��1�����ѭ������0ֱ�ӽ���ѭ������
	return 0;
}