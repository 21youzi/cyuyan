/*
 //递归
#include<stdio.h>
void print(int n)
{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
}
int main()
{
	unsigned int num=0;
	scanf("%d",&num);
	print(num);
	return 0;
 } 

//不设临时变量，求字符串长度
#include<stdio.h>
#include<string.h> 

int my_strlen(char *str)
{
	int count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[]="hello";
	//int len=strlen(arr);
	int len=my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个首地址 
	printf("len=%d\n",len);
	return 0;
 } 

//n的阶乘 
#include<stdio.h>
int facl(int n)
{
	int i=0;
	int ret =1;
	for(i=1;i<=n;i++)//循环方式 
	{
		ret*=i;
	}
	return ret;
}
int fac2(int n)
{
	if(n<=1)    //递归方法 
		return 1;
	else
		return n*fac2(n-1);
 } 
int main()
{
	int n=0;
	int ret=0; 
	scanf("%d",&n);
	facl(n);//循环的方式 
	ret=facl(n);
	printf("%d\n",ret);
	return 0; 
}
 
//斐波拉契数列，1 1 2 3 5 8 13 21 34 55 
#include<stdio.h>
int Fib(int n)
{
	if(n<=2)
		return 1;
	else
	{
		return Fib(n-1)+Fib(n-2);
	}
}
int main()
{
	int n=0;
	int ret=0;
	scanf("%d",&n);
	//TDD-测试驱动开发
	ret =Fib(n);
	printf("ret=%d\n",ret);
	return 0;
 } 

#include<stdio.h>
int main()
{
	
	return 0;
 } 

//创建数组
#include<stdio.h>
#include<string.h>
int main()
{
	//int arr[10]={1,2,3};//不完全初始化,剩下的元素默认初始化为0 
	//char arr2[5];
	char arr4[]={"abcdef"};
	printf("%d\n",sizeof(arr4));//sizeof 计算arr4所占空间的大小 
	printf("%d\n",strlen(arr4));//strlen 求字符串的长度，'\0'之前的字符个数 
	return 0;
 } 
//1、strlen 和sizeof 没有什么关联
//2、strlen是求字符串长度的——只能针对字符串求长度——库函数-使用得引用头文件
//3、sizeof 计算变量，数组，类型的大小，单位是字节- - 操作符 

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="abc";
	char arr2[]={'a','b','c'};
	printf("%d\n",sizeof(arr1));
	printf("%d\n",sizeof(arr2));
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr1));
	return 0;
 } 

#include<stdio.h>
#include<string.h>
int main()
{
//	char arr[]="abcdef";//[a][b][c][d][e][f]['\0']
////	printf("%c\n",arr[3]);
//	int i=0;
//	for(i=0;i<6;i++)
//	{
//		printf("%c ",arr[i]);
//	}
	
	int arr[]={1,2,3,4,5,6,7,8,9,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 } 
 
//一维数组在内存中的存储
//数组在内存中是连续存在的 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("&arr[%d]=%p\n",i,&arr[i]);//数组中每个元素的地址 
	}
	return 0;
 } 
 
 //一维数组在内存中的存储
//数组在内存中是连续存在的 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("&arr[%d]=%p\n",i,&arr[i]);//数组中每个元素的地址 
	}
	return 0;
 } 

//二维数组在内存中的存储,通过下标访问 
//二维数组的行可以省略，列绝对不能省略 
#include<stdio.h>
int main()
{
	int arr[3][4]={{1,2,3},{4,5}};//3行4列,第一行 1 2 3，第二行 4 5 
	//char ch[5][6];
	int i=0;
	for(i=0;i<3;i++)
	{
		int j=0;
		for(j=0;j<4;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	 } 

	return 0;
 }
*/
 //二维数组在内存中的存储
#include<stdio.h>
int main()
{
	int arr[3][4]={{1,2,3},{4,5}};//3行4列,第一行 1 2 3，第二行 4 5 
	//char ch[5][6];
	int i=0;
	for(i=0;i<3;i++)
	{
		int j=0;
		for(j=0;j<4;j++)
		{
			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
		}
		printf("\n");
	 } 

	return 0;
 } 
 
 
