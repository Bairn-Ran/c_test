//ֻҪwhile��������Ϊ�棬������������ݾͻ�һֱѭ��
#include<stdio.h>
/*int main()
{
	int a = 1;
	while (1)
	{
		printf("%d\n",a);
		a++;
		if (a == 5)
		{
			a++;
			continue;//continue�����ó�����������Ĵ��������һ��ѭ��	
		}
		if (a == 11)
			break;//����break��ǰ��ֹ����
	}
	return 0;
}
*/


//int ch=getchar();//��ȡһ���ַ��İ�˹��ֵ��ch
// printf("%c\n",ch);//�ٽ�ch���ַ��ķ�ʽ��ӡ����
// �������Ҳ�൱��putchar(ch);
//���ûͨ���Ļ��᷵��EOF//end of file�ļ�������־,��ֵΪ-1
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//!=����˼�ǲ�����,�����������ʱֹͣ���ѭ��
//	{
//		//getchar����ʶ������ʱ�Ļس���������������س������ʱҲ���ں�����һ���س�,�γ����Զ����е��ص� 
//		putchar(ch);//���ch�а�˹��ֵ��������ַ�
//		//����ֹͣ��������ctrl+zֹͣ����
//	}
//	
//	return 0;
//}
int main()
{
	char password[20] = { 0 };
	printf("����������");
	scanf("%s", password);

	//getchar();//��ȡ��\n //������������������������пո�scanf��Ȼ�����ȡ�����ں����if�ж����ͻ�������⣬��Ҫ�����getchar������
	//���뻺��������scanf������֮���Ļس�����ȷ�ϣ�����س�����浽scanf֮�ж��ǻ�浽���뻺����������������ʹ����getchar���ѿո�Ҳ�ŵ�����,������޷��ճ�����
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}//�����Ļ������̵����еĿո�

	printf("��ȷ�����루Y/N��:>");
	int ret = getchar();
	if ('Y' == ret)
		printf("YES\n");
	else if ('N' == ret)
		printf("NO\n");
	else
		printf("����");
	return 0;


}
