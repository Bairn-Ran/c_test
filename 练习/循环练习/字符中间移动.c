#include<stdio.h>
#include<string.h>
#include<windows.h>//����Sleep����
#include<stdlib.h>//����system����ϵͳ����ĺ���
//
//�ַ������鲻�ô�����
int main()
{
	char arr1[] = "welcome to there";
	char arr2[] = "################";
	int left = 0;
	int right = strlen(arr1)-1;//�����һλ�±���0�����Ҫ��һ��strlen�Ǽ���\0֮ǰ��Ԫ�ظ�����
	//����int right=sizeof(arr1[1])/sizeof(arr1[0])-2;��Ϊ�����һ��\0��Ϊ������־
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);//��λ����
		//system�ǵ���ϵͳ����ĺ���������cls��ϵͳ�е���������
		system("cls");
		left++;
		right--;
	}
	printf("%s",arr2);


	return 0;
}
