/* 
#include<stdio.h>
#pragma pack(4) //设置默认对齐位为4 
struct S
{
	char c1;
	double d;
 };
#pragma pack()//取消设置的默认对齐数 
int main()
{
	struct S s;
	printf("%d\n",sizeof(s));
	return 0;
 } 

#include<stdio.h>
#include<stddef.h>
struct S
{
	char c;
	int i;
	double d;
 };
int main()
{
	printf("%d\n",offsetof(struct S,c));//计算偏移量 
	printf("%d\n",offsetof(struct S,i));
	printf("%d\n",offsetof(struct S,d));
	return 0;
 } 
*/
//结构体传参
#include<stdio.h>
struct S
{
	int a;
	char c;
	double d;
};
//void Init(struct S tmp)
//{
//	tmp.a=100;
//	tmp.c='w';
//	tmp.d=3.14;
//}
void Init(struct S* ps)
{
	ps->a=100;
	ps->c='w';
	ps->d=3.14;
}
//传值 
Print1(struct S tmp)
{
	printf("%d %c %lf\n",tmp.a,tmp.c,tmp.d);
}
//传地址 
Print2(struct S* ps)
{
	printf("%d %c %lf\n",ps->a,ps->c,ps->d);
}
int main()
{
	struct S s={0};
//	s.a=100;
//	s.c='w';
//	s.s=3.14;
//	printf("%d\n",s.a);

	Init(&s);
	Print1(s);
	Print1(&s);
	return 0;
 } 



