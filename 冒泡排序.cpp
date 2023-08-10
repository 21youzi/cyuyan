/*
//冒泡排序 
#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	//确定冒泡排序的趟数
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		//每一趟冒泡排序
		int j=0;
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
	int arr[]={8,9,7,6,5,4,3,2,1,0};
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	//对arr进行排序，排成升序
	bubble_sort(arr,sz);//冒泡排序
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
 
 //数组名是什么 ——数组名是数组首元素的地址（有两个例外） 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	//int sz=sizeof(arr)/sizeof(arr[0]);
	//两个例外 
	//1.sizeof(数组名)--数组名表示整个数组，计算的是整个数组的大小，单位私字节
	//2.&数组名，数组名代表整个数组，取出的是整个数组的地址
	 
	printf("%p\n",arr);
	printf("%p\n",arr+1);
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[0]+1);
	printf("%p\n",&arr);
	printf("%p\n",&arr+1);
	printf("%p\n",*arr);
	return 0;
}
*/
