/*
//��1!+2!+3!+����+n! 
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
 
 //дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
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
//ָ�����͵�����
//1.ָ�����;�����ָ������ò������ܷ��ʼ����ֽ� 
//2.ָ�����;�����ָ��+1��-1���ӵĻ��߼��ļ����ֽ� 
int main()
{//����һ�� 
//	int a=1;
//	char* p=(char*)&a;
//	if(*p==1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}

//���������ú���ʵ�֣� 
	int ret=check_sys();
	if(ret==1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
  }  

#include<stdio.h>
int main()
{
	int n=9;
	float *pFloat=(float *)&n;
	printf("n��ֵΪ:%d\n",n);
	printf("*pFloat��ֵΪ��%f\n",*pFloat);
	
	*pFloat=9.0;
	printf("n��ֵΪ:%d\n",n);
	printf("*pFloat��ֵΪ��%f\n",*pFloat);
	
	return 0;
 } 

//ָ�����
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
 
 //�ַ�ָ��
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

//ָ�����顪�������飬�������ָ�� 
#include<stdio.h>
int main()
{
//	int arr[10]={0};//��������
//	char ch[5]={0};//�ַ����� 
//	int* parr[4];//�������ָ������飨ָ�����飩
//	char* pch[5];//����ַ�ָ�������

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


