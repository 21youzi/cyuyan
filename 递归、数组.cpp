/*
 //�ݹ�
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

//������ʱ���������ַ�������
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
	int len=my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ���׵�ַ 
	printf("len=%d\n",len);
	return 0;
 } 

//n�Ľ׳� 
#include<stdio.h>
int facl(int n)
{
	int i=0;
	int ret =1;
	for(i=1;i<=n;i++)//ѭ����ʽ 
	{
		ret*=i;
	}
	return ret;
}
int fac2(int n)
{
	if(n<=1)    //�ݹ鷽�� 
		return 1;
	else
		return n*fac2(n-1);
 } 
int main()
{
	int n=0;
	int ret=0; 
	scanf("%d",&n);
	facl(n);//ѭ���ķ�ʽ 
	ret=facl(n);
	printf("%d\n",ret);
	return 0; 
}
 
//쳲��������У�1 1 2 3 5 8 13 21 34 55 
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
	//TDD-������������
	ret =Fib(n);
	printf("ret=%d\n",ret);
	return 0;
 } 

#include<stdio.h>
int main()
{
	
	return 0;
 } 

//��������
#include<stdio.h>
#include<string.h>
int main()
{
	//int arr[10]={1,2,3};//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0 
	//char arr2[5];
	char arr4[]={"abcdef"};
	printf("%d\n",sizeof(arr4));//sizeof ����arr4��ռ�ռ�Ĵ�С 
	printf("%d\n",strlen(arr4));//strlen ���ַ����ĳ��ȣ�'\0'֮ǰ���ַ����� 
	return 0;
 } 
//1��strlen ��sizeof û��ʲô����
//2��strlen�����ַ������ȵġ���ֻ������ַ����󳤶ȡ����⺯��-ʹ�õ�����ͷ�ļ�
//3��sizeof ������������飬���͵Ĵ�С����λ���ֽ�- - ������ 

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
 
//һά�������ڴ��еĴ洢
//�������ڴ������������ڵ� 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("&arr[%d]=%p\n",i,&arr[i]);//������ÿ��Ԫ�صĵ�ַ 
	}
	return 0;
 } 
 
 //һά�������ڴ��еĴ洢
//�������ڴ������������ڵ� 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("&arr[%d]=%p\n",i,&arr[i]);//������ÿ��Ԫ�صĵ�ַ 
	}
	return 0;
 } 

//��ά�������ڴ��еĴ洢,ͨ���±���� 
//��ά������п���ʡ�ԣ��о��Բ���ʡ�� 
#include<stdio.h>
int main()
{
	int arr[3][4]={{1,2,3},{4,5}};//3��4��,��һ�� 1 2 3���ڶ��� 4 5 
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
 //��ά�������ڴ��еĴ洢
#include<stdio.h>
int main()
{
	int arr[3][4]={{1,2,3},{4,5}};//3��4��,��һ�� 1 2 3���ڶ��� 4 5 
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
 
 
