/*
//�ṹ��
#include<stdio.h>

//�����ṹ������ 
struct Stu
{
	//�ṹ���Ա���� 
	char name[20];
	char tele[12];
	char sex[10];
	int age;	
};
int main()
{
	//�����Ľṹ����� 
	struct Stu s1;
	struct Stu s2; 
	return 0;
 } 

#include<stdio.h>

//�����ṹ������ 
//�����ṹ������ 
struct 
{
	//�ṹ���Ա���� 
	int a;
	char c;	
}sa;
int main()
{
	return 0;
 } 

//�ṹ��������� 
#include<stdio.h>

//�����ṹ������ 
struct Node 
{
	int data;//4
//	struct Node n;//error
	struct Node* next;	
};
int main()
{
	//�����Ľṹ����� 
	sizeof(struct Node);
	return 0;
 }  

#include<stdio.h>
typedef struct Node 
{
	int data;//4
	struct Node* next;	
}Node;
int main()
{
	struct Node n1;
	Node n2;
	return 0;
}

//�ṹ������Ķ������ʼ�� 
#include<stdio.h>
struct S
{
	char c;
	int a;
	double d;
	char arr[20];
 };
int main()
{
	struct S s={'c',100,3.14,"hello world"};
	printf("%c %d %lf %s \n",s.c,s.a,s.d,s.arr);
	return 0;
}
*/
//�ṹ���ڴ���� 
#include<stdio.h>
struct S1
{
	char c1;
	int a;
	char c2; 
 };
 struct S2
{
	char c1;
	char c2; 
	int a;
 };
int main()
{
	struct S1 s1={0};
	printf("%d\n",sizeof(s1));
	struct S2 s2={0};
	printf("%d\n",sizeof(s2));
	return 0;
}



