#include<stdio.h>
//�⺯��  һ��Ҫ����ͷ�ļ�

//strcpy:�����ַ���
//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "world";
//	printf("%s\n",str1);
//	strcpy(str1, str2);//���ｫ�ַ���2���ַ����������ַ���
//	printf("%s\n", str1);
//	return 0;
//}
//memset:�޸��ַ������ַ�
//int main()
//{
//	char arr[] = "Hello World";
//	memset(arr + 4, 'y', 5);//Ҳ���ǰ�arr�ӵ��ĸ��ַ���ʼ����������ַ��޸�Ϊ'y'
//	printf("%s",arr);
//	return 0;
//}

//�Զ��庯��
//�������
//ret_type fun_name(para1,*)
//{
//	statement;//�����Ŀ
//}
//��������+������+��������


//eg�Ƚ�����������������
//int Max(int x, int y)//�����Ķ���
//{
//	return(x > y ? x:y);
//	//��Ŀ����������x>y,����x,���򷵻�y
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = Max(a, b);//�����ĵ���
//	printf("�ϴ��һ������%d", max);
//	return 0;
//}


//eg2 ������������ֵ
void swap(int* px, int* py)
{
	int z = *px;//z=a
	*px = *py;//a=b
	*py = z;//b=z
}
//��ʵ�δ��ݸ��βε�ʱ��,�β���ʵ�ε�һ����ʱ����
//��x,y���βΣ�a,b��ʵ�Σ����βε��޸Ĳ���Ӱ��ʵ��
//���ѡ��ָ��������ַ
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("����ǰ%d %d\n", a, b);
	swap(&a, &b);
	printf("������%d %d\n", a, b);
	return 0;
}
