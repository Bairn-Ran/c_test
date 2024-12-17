#include<stdio.h>
//有整形，浮点等等，而结构体给了能自定义类型的能力
//struct
//相当于创造一个类型进行输出
//描述方式：学生↓
struct stu
{
	//成员变量
	char name[20];
	int age;
	char sex[10];
	char tele[12];
};
/*/int main()
{//结构体访问其中的对象用的是点操作符，如其中的s.name
	struct stu s = { "zhangsan",20,"nan","11111111111" };
	printf("%s %d %s %s\n",s.name,s.age,s.sex,s.tele);
	return 0;
}*/
//上面是正常用法
//下面用到指针和地址来进行输出这个结构体

void print(struct stu* ps)//这里创建一个变量print，括号里指的是s的地址，ps是指针变量，存的s的地址
{
	printf("%s %d %s %s\n", (*ps).name,(*ps).age,(*ps).sex,(*ps).tele);//即在下面使用时使用的是s
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);//和上面那个一样，是ps指的那个对象的成员

}
int main()
{
	struct stu s = { "zhangsan",20,"nan","11111111111" };
	print(&s);//这里取出了s的地址，取出的s的地址存到指针变量里去
	return 0;
}
//点的用法：结构体对象.成员名
//->
//结构体指针变量->成员名
//取地址符