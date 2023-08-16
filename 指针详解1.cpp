/*
//求1!+2!+3!+……+n! 
#include<stdio.h>
int main()
{
	int i=0;
	int sum=0;
	int n=0;
	int ret=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int j=0;
		for(j=1;j<=i;j++)
		{
			ret*=j;
		}
		sum+=ret;
	}
	printf("sum=%d\n",sum);
	return 0;
 } 
 
 //写一段代码告诉我们当前机器的字节序是什么
#include<stdio.h>

int check_sys()
{
	int a=1;
	char*p=(char*)&a;
	if(*p==1)
		return 1;
	else
		return 0;	
}
//指针类型的意义
//1.指针类型决定了指针解引用操作符能访问几个字节 
//2.指针类型决定了指针+1，-1，加的或者减的几个字节 
int main()
{//方法一： 
//	int a=1;
//	char* p=(char*)&a;
//	if(*p==1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}

//方法二（用函数实现） 
	int ret=check_sys();
	if(ret==1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
  }  

#include<stdio.h>
int main()
{
	int n=9;
	float *pFloat=(float *)&n;
	printf("n的值为:%d\n",n);
	printf("*pFloat的值为：%f\n",*pFloat);
	
	*pFloat=9.0;
	printf("n的值为:%d\n",n);
	printf("*pFloat的值为：%f\n",*pFloat);
	
	return 0;
 } 

//指针进阶
#include<stdio.h>

void test(int arr[])
{
	int sz=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",sz);
}
int main()
{
	int arr[10]={0};
	test(arr);
	return 0;
 } 
 
 //字符指针
#include<stdio.h>
#include<string.h>
int main()
{
//	char ch='w';
//	char* pc=&ch;
//
//	char arr[]="abcdef";
//	char* pc=arr;
//	printf("%s\n",arr);
//	printf("%s\n",pc);	

//	char* p="abcdef";
//	printf("%s\n",p);
	return 0;
 } 

#include<stdio.h>
int main()
{
	char arr1[]="abcdef";
	char arr2[]="abcdef";
	char* p1="abcdef";
	char* p2="abcdef";
	//if(arr1==arr2)
	if(p1==p2)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
 } 

//指针数组——是数组，用来存放指针 
#include<stdio.h>
int main()
{
//	int arr[10]={0};//整型数组
//	char ch[5]={0};//字符数组 
//	int* parr[4];//存放整型指针的数组（指针数组）
//	char* pch[5];//存放字符指针的数组

	int a=10;
	int b=20;
	int c=30;
	int d=40;
	int* arr[4]={&a,&b,&c,&d}; 
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d ",*(arr[i]));
	}
	return 0;
 } 
*/
#include<stdio.h>
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={2,3,4,5,6};
	int arr3[]={3,4,5,6,7};
	
	int* parr[]={arr1,arr2,arr3};
	int i=0;
	for(i=0;i<3;i++)
	{
		int j=0;
		for(j=0;j<5;j++)
		{
			printf("%d ",*(parr[i]+j));
		}
		printf("\n");
	}
	return 0;
}


