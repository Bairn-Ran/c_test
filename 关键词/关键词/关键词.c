#include<stdio.h>
/*//1.typedef�ܹ�����������������һ�����ͱ��ں�������
//������һ���ϳ��ĺ�����������һ������������

typedef unsigned int uint;//���൱�ڰ�unsigned int�ȼ���uint
typedef struct Node
{
	int data;
	struct Node* next;
}Node;//��struct Node�ṹ��ȼ���Node

int main()
{
	unsigned int num1 = 0;
	uint num2 = 0;//�������д������һ�еȼ�
	
	struct Node n;//�����ڵ�n
	Node n2;//������Ĵ����ڵ�n�Ľṹ��һ����
	
	return 0;
}*/

//2.static
//���ξֲ�/ȫ�ֱ��������κ���
//���ξֲ�������ʱ�򣬾ֲ��������������򲻻ᱻ����
//�ı��˱����Ĵ洢λ�ã��ŵ���̬��ֱ���������������
void test()//��void�ǲ���Ҫ����ֵ�͸�ֵ�ı������Σ�
{
	static int a = 1;//������a��ʼΪ1ʱ���ٴ������������ʱ���a�����ٱ�1����
	printf("%d\n", a);
	a++;
}
extern int g_val;//�����ⲿ����

int main()
{
	int i = 0;
	while (i<10)
	{
		i++;
		test();
	}
	return 0;
}

//3.register�Ĵ���
//register int num=1��
//�������������ŵ��Ĵ�����
//�ӿ��д�ٶ�