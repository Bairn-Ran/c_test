//������������֣������䱾�����ǰ��������Ȼ���Ľ׳�֮��
#include<stdio.h>

int main()
{
	for (;;)
	{
		long long inplus = 0;

		int in = 0;
		scanf("%d", &in);//��������,in��Ϊ���������治��䣬��������ǽ���
		int inmultiply = in;
		for (;inmultiply > 0;)//�ӷ����ڻ�ѭ��in��
		{
			int in1 = inmultiply;
			int inminus = inmultiply;
			for (;in1 > 1;)
			{
				inminus = (in1 - 1) * inminus;
				in1--;
			}//�׳�ģ�飬ÿ����ó���ֵ����inminus
			inmultiply--;
			inplus = inplus + inminus;//���������ͼ���
		}
		printf("%d\n", inplus);
	}
	
	return 0;
}
