#include<stdio.h>
//�����Σ�����ȵȣ����ṹ��������Զ������͵�����
//struct
//�൱�ڴ���һ�����ͽ������
//������ʽ��ѧ����
struct stu
{
	//��Ա����
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
/*/int main()
{//�ṹ��������еĶ����õ��ǵ�������������е�s.name
	struct stu s = { "zhangsan",20,"nan","11111111111" };
	printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tele);
	return 0;
}*/
//�����������÷�
//�����õ�ָ��͵�ַ�������������ṹ��

void print(struct stu* ps)//���ﴴ��һ������print��������ָ����s�ĵ�ַ��ps��ָ����������s�ĵ�ַ
{
	printf("%s %d %s %s\n", (*ps).name,(*ps).age,(*ps).sex,(*ps).tele);//��������ʹ��ʱʹ�õ���s
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);//�������Ǹ�һ������psָ���Ǹ�����ĳ�Ա

}
int main()
{
	struct stu s = { "zhangsan",20,"nan","11111111111" };
	print(&s);//����ȡ����s�ĵ�ַ��ȡ����s�ĵ�ַ�浽ָ�������ȥ
	return 0;
}
//����÷����ṹ�����.��Ա��
//->
//�ṹ��ָ�����->��Ա��
//ȡ��ַ��