/*
#include<stdio.h>
int main()
{
//	int *p=NULL;//p是整型指针 ——存放整型的地址 
//	char *pc=NULL
//	//数组指针——存放数组的地址 
//	int arr[10]={0};
	//arr--首元素地址
	//&arr[0]——首元素地址
	//&arr——数组地址 
	
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int* p[10]=&arr; //数组的地址要存起来
//	 
//	char* arr[5];
//	char* (*pa)[5]=&arr;

	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int (*pa)[10]=&arr;
	int *p=arr;
	int i=0;
	for(i=0;i<10;i++)
	{
	//	printf("%d ",(*pa)[i]);
		printf("%d ",*(p+i));
	}
	return 0;
 } 

#include<stdio.h>
void print1(int arr[3][5],int x,int y)
{
	int i=0;
	int j=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
}

void print2(int (*p)[5],int x,int y)
{
	int i=0;
	for(i=0;i<x;i++)
	{
		int j=0;
		for(j=0;j<y;j++)
		{
			printf("%d ",*(*(p+i)+j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print1(arr,3,5);
	printf("\n");
	print2(arr,3,5);
	return 0;
 } 
*/
#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	int* p=arr;
	for(i=0;i<10;i++)
	{
		printf("%d ",p[i]);	
		printf("%d ",*(p+i));
		printf("%d ",*(arr+i));
		printf("%d ",arr[i]);
	}
	return 0;
 } 


