/*
#include<stdio.h>
#include<string.h>

void test(int arr[3][5])
{		
 } 
 //�п���ʡ�ԣ��в����� 
void test1(int arr[][5])
{	
}
int main()
{
//	char ch='w';
//	char* p=&ch;
//	const char* p2="abcdef";
//	int* arr[10];
//	char* ch[5];
//	int arr2[5];//����
//	int (*pa)[5]=&arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
//	 
	int arr[3][5]={0};
	test(arr);//��ά���鴫��
	test1(arr); 
	return 0;
}

//��ά���鴫�Ρ����п���ʡ 
//һ��ָ�봫�� 
#include<stdio.h>
void test1(int* p)
{
}

void test2(char* p)
{
}
int main()
{
	int a=10;
	int* p1=&a;
	test1(&a);
	test2(p1);
	
	char ch='w';
	char* pc=&ch;
	test2(&ch);
	test2(pc); 
	return 0;
 } 
 
//����ָ�봫�� 
#include<stdio.h>
void test(int** ptr)
{
	printf("num=%d\n",**ptr);
 } 
int main()
{
	int n=10;
	int* p=&n;
	int **pp=&p;
	test(pp);
	test(&p);
	return 0;
}

//����ָ�� ������ź�����ַ��һ��ָ�� 
#include<stdio.h>
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}
int main()
{
	int a=10;
	int b=20; 
	int arr[10]={0};
	int (*p)[10]=&arr; 
//	printf("%d\n",Add(a,b));
//	//&������ �ͺ��������Ǻ�����ַ 
//	printf("%p\n",&Add);
//	printf("%p\n",Add);
	
	int (*pa)(int,int)=Add;
	printf("%d\n",(*pa)(2,3));
	return 0;
}

#include<stdio.h>
void Print(char* str)
{
	printf("%s\n",str);
}
int main()
{
	void (*p)(char*)=Print;
	(*p)("hello");//���ú��� 
	return 0;
}

#include<stdio.h>
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}
int main()
{
	int a=10;
	int b=20; 
	int (*pa)(int,int)=Add;
	printf("%d\n",pa(2,3));	
	printf("%d\n",Add(2,3));
//	printf("%d\n",*pa(2,3));error ����Ҫ������ 
	printf("%d\n",(*pa)(2,3));
	return 0;
}

#include<stdio.h>
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}

int Sub(int x,int y)
{
	int z=0;
	z=x-y;
	return z;
}

int Mul(int x,int y)
{
	int z=0;
	z=x*y;
	return z;
}

int Div(int x,int y)
{
	int z=0;
	z=x/y;
	return z;
}
int main()
{
	//ָ������
	int* arr[5];
	//��Ҫһ�����飬���Դ��4�������ĵ�ַ��������ָ������� 
	int (*pa)(int,int)=Add; //
//	int (*pa)(int,int)=Sub;
//	int (*pa)(int,int)=Mul;
//	int (*pa)(int,int)=Div;

	int (*parr[4])(int,int)={Add,Sub,Mul,Div};//����ָ������� 
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\n",parr[i](2,3));
	}
	return 0; 
 } 
 
*/
//����ָ���������; ���������� 
#include<stdio.h>
void menu()
{
	printf("*********************\n");
	printf("**   1.add   2.sub **\n");
	printf("**   3.mul   4.div **\n");
	printf("**      0.exit     **\n");
	printf("*********************\n");
}
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}

int Sub(int x,int y)
{
	int z=0;
	z=x-y;
	return z;
}

int Mul(int x,int y)
{
	int z=0;
	z=x*y;
	return z;
}

int Div(int x,int y)
{
	int z=0;
	z=x/y;
	return z;
}
int main()
{
	int input=0;
	int x=0;
	int y=0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				printf("������������������");
				scanf("%d%d",&x,&y);
				printf("%d\n",Add(x,y));
				break;
			case 2:
				printf("������������������");
				scanf("%d%d",&x,&y);
				printf("%d\n",Sub(x,y));
				break;
			case 3:
				printf("������������������");
				scanf("%d%d",&x,&y);
				printf("%d\n",Mul(x,y));
				break;
			case 4:
				printf("������������������");
				scanf("%d%d",&x,&y);
				printf("%d\n",Div(x,y));
				break;
			case 0:
				printf("�˳�\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
			}	
	 }while(input);
	return 0;
 } 
 
 
