/* 
#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
 } 
int main()
{
	int arr[10]={0};
	int (*p)[10]=&arr;//ȡ������ĵ�ַ 
	
	int (*pfArr[4])(int,int);//pfArr��һ�����飬����ָ������
	pp(*ppfArr[4])(int,int)=&pfArr;
	//ppfArr��һ������ָ�롣ָ��ָ��������4��Ԫ�� 
	//ָ��������ÿ�������������һ������ָ�� int(*)(int,int)
	
	return 0;
 } 

//�ص���������ͨ������ָ����õĺ��� 
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
	//���� 
}

//qsort--���������������͵����� 
int main()
{
	//ð��������
	//ð��������ֻ��������������
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
	//ָ������
	int* arr[10];
	//����ָ��
	int* (*pa)[10]=&arr; 
	//����ָ��
	int (*pAdd)(int,int)=Add; //&AddҲ���� 
	int sum=(*pAdd)(1,2);
	printf("sum=%d\n",sum); 
	//����ָ�������
	int(*pArr[5])(int,int);
	//ָ����ָ�������ָ��
	int(*(*ppArr)[5])(int,int)=&pArr; 
	return 0;
 } 

#include<stdio.h>
void BubbleSort(int arr[],int sz)
{
	int i=0;
	//���� 
	for(i=0;i<sz-1;i++)
	{
		int j=0;
		//һ��ð������ 
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
	//ð��������
	//ð��������ֻ��������������
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
	//void* ���͵�ָ�룬���Խ����������͵�ָ�� 
	//void* ���͵�ָ�� ���ܽ��н����ò��� 
	//void* ���͵�ָ�� ���ܽ���+ -�������� 
	return 0;
}
 
 
