#define _CRT_SECURE_NO_WARNINGS
//��һ�����������в��Ҿ���ĳ������n��������ֲ��ң�


//�ó�������ҵ������������������е��±�
//aizeof()���Բ鿴����������ռ���ֽ�����������ÿ��Ԫ�ص��ֽ�����ͬ
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k;
//	scanf("%d",&k); 
//	//��һ������������Ҿ����ĳ������n
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����������������������ĳ���
//	for (i = 0;i < sz;i++)//���������鰴˳��˲�һ�飬ֱ���ҵ��������
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ����±�Ϊ%d\n",i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k;
	scanf("%d",&k);

	int sz = sizeof(arr) / sizeof(arr[0]);//szΪ����ĳ���

	
	//���������±�,����м�ֵ�±�
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;
	
	//�����±�С�ڵ������±�ʱ����ѭ��
	while (left <= right)
	{
		if (arr[mid] < k)
			left= mid + 1;
		else if (arr[mid] > k)
			right= mid - 1;
		else
		{
			printf("�ҵ� �±�Ϊ%d\n", mid);
			break;
		}
		mid = (left + right) / 2;
	}
	if (left > right)
		printf("�Ҳ���");
	return 0;
}