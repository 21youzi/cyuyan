 /*
 //�ṹ��
#include<stdio.h>

struct�����ṹ��ؼ��֣� Stu--�ṹ���ǩ ��struct Stu �ṹ������ 
����һ���ṹ������ 
struct Stu
{
	//��Ա���� 
	char name[20];
	short age;
	char tele[12];
	char sex[5];
	 
	
}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�������������ʹ��ȫ�ֽṹ������� 

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
int main()
{
	struct Stu s1={"����",20,"15676897543","��"}; //�����ṹ����� s ���ֲ��Ľṹ������� 
	Stu s2={"����",21,"15906897543","��"};
	return 0;
 } 
 
 
#include<stdio.h>
struct S
{
	int a;
	char c;
	char arr[20];
	double d;	
};

struct T
{
	
	char ch[10];
	struct S s;
	char *pc;
};
int main()
{
	char arr[]="hello world\n";
	struct T t={"hehe",{100,'w',"hello world",3.14},arr};
	printf("%s\n",t.ch);
	printf("%s\n",t.s.arr);
	printf("%lf\n",t.s.d);
	printf("%s\n",t.pc);
	
	return 0;
 } 
*/ 
//�ṹ���Ա�ķ���
//�ṹ�崫�Ρ������ĵ�ַ 
#include<stdio.h>

typedef struct Stu
{	//��Ա���� 
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("name:%s\n",tmp.name);
	printf("age:%d\n",tmp.age);
	printf("tele:%s\n",tmp.tele);
	printf("sex:%s\n",tmp.sex);
}

void Print2(Stu* ps)
{
	printf("name:%s\n",ps->name);
	printf("age:%d\n",ps->age);
	printf("tele:%s\n",ps->tele);
	printf("sex:%s\n",ps->sex);	
}
int main()
{
	Stu s={"����",21,"15906897543","��"};
	//��ӡ�ṹ������ 
	Print1(s);
	Print2(&s); 
	return 0;
 } 
