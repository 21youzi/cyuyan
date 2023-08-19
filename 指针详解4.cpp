/* 
#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
 } 
int main()
{
	int arr[10]={0};
	int (*p)[10]=&arr;//取出数组的地址 
	
	int (*pfArr[4])(int,int);//pfArr是一个数组，函数指针数组
	pp(*ppfArr[4])(int,int)=&pfArr;
	//ppfArr是一个数组指针。指针指向数组有4个元素 
	//指向的数组的每个数组的类型是一个函数指针 int(*)(int,int)
	
	return 0;
 } 

//回调函数——通过函数指针调用的函数 
#include<stdio.h>
void print(char *str)
{
	printf("hehe:%s",str);
}
void test(void (*p)(char*))
{
	printf("test\n");
	p("hello");
}
int main()
{
	
	test(print); 
	return 0;
 } 

#include<stdio.h>
void BubbleSort(int arr,int sz)
{
	//…… 
}

//qsort--可以排序任意类型的数据 
int main()
{
	//冒泡排序函数
	//冒泡排序函数只能排序整型数组
	int arr[]={1,3,5,7,9,2,4,6,8,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,sz); 
	return 0;
 } 

#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
 } 
int main()
{
	//指针数组
	int* arr[10];
	//数组指针
	int* (*pa)[10]=&arr; 
	//函数指针
	int (*pAdd)(int,int)=Add; //&Add也可以 
	int sum=(*pAdd)(1,2);
	printf("sum=%d\n",sum); 
	//函数指针的数组
	int(*pArr[5])(int,int);
	//指向函数指针数组的指针
	int(*(*ppArr)[5])(int,int)=&pArr; 
	return 0;
 } 

#include<stdio.h>
void BubbleSort(int arr[],int sz)
{
	int i=0;
	//趟数 
	for(i=0;i<sz-1;i++)
	{
		int j=0;
		//一趟冒泡排序 
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}

int main()
{
	//冒泡排序函数
	//冒泡排序函数只能排序整型数组
	int arr[]={1,3,5,7,9,2,4,6,8,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,sz); 
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	 } 
	return 0;
 } 
*/
#include<stdio.h>
int main()
{
	int a=10;
//	int* pa=&a;
//	char* pc=&a;
//	char ch='w';
	void* p=&a;
	p=&ch;
	//void* 类型的指针，可以接受任意类型的指针 
	//void* 类型的指针 不能进行解引用操作 
	//void* 类型的指针 不能进行+ -整数操作 
	return 0;
}
 
 
