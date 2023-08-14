 /*
 //结构体
#include<stdio.h>

struct——结构体关键字， Stu--结构体标签 ，struct Stu 结构体类型 
定义一个结构体类型 
struct Stu
{
	//成员变量 
	char name[20];
	short age;
	char tele[12];
	char sex[5];
	 
	
}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量（尽量少使用全局结构体变量） 

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
int main()
{
	struct Stu s1={"张三",20,"15676897543","男"}; //创建结构体变量 s （局部的结构体变量） 
	Stu s2={"李四",21,"15906897543","男"};
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
//结构体成员的访问
//结构体传参——传的地址 
#include<stdio.h>

typedef struct Stu
{	//成员变量 
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
	Stu s={"李四",21,"15906897543","男"};
	//打印结构体数据 
	Print1(s);
	Print2(&s); 
	return 0;
 } 
