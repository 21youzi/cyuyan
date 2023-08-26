/*
#include<stdio.h>
#include<stdlib.h>
int main()
//{	//1.对NULL进行解引用操作 
//	int *p=(int*)malloc(40);
//	//万一malloc 失败了，p就被赋值为NULL 
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=i;
//	} 
//	free(p);
//	p=NULL;

 
//	//2 .对动态开辟的内存的越界访问
//	int *p=(int*)malloc(5*sizeof(int));
//	if(p==NULL)
//	{
//		return 0
//	}
//	else
//	{
//	int i=0;
//		for(i=0;i<10;i++)
//		{
//			*(p+i)=i;
//		} 	
//	}
//	free(p);
//	p=NULL; 

	int a=10;
	int* p=&a;
	*p=20; 
	//3.对非动态内存的释放 
	free(p);
	p=NULL;
	return 0;
}

//常见的动态内存错误 
#include<stdio.h>
#include<stdlib.h>
int main()
{
//	int* p=(int*)malloc(40);
//	if(p=NULL)
//	{
//		return 0;
//	 } 
//	 //使用realloc 
//	int *p2=realloc(p,80);
//	if(p2!=NULL)
//	{
//		p=p2;
//	 } 

	int *p=realloc(NULL,80); 
	return 0;
 } 

#include<stdio.h>
#include<stdlib.h>
int main()
{	//1.对NULL指针解引用操作 
	int* p=malloc(40);
	//p进行相关判断
	*p=10;//malloc开辟空间失败——对NULL指针解引用 
	
	//2 .对动态开辟的内存的越界访问
	int *p=(int*)malloc(40); //10个int 0-9 
	if(p==NULL)
	{
		return 0;
	 } 
	int i=0;
	//越界 
	for(i=0;i<10;i++)
	{
		*(p+i)=i;
	} 
	free(p);
	p=NULL; 
	
	
	//3.对非动态内存的释放 
	int a=10;
	int* p=&a;
	*p=20; 
	//对非动态内存的释放 
	free(p);
	p=NULL;
	
	
	//4.使用free释放动态开辟内存的一部分
	int *p=(int*)malloc(40);
	if(p=NULL)
	{
		return 0;
	 }
	int i=0;
	for(i=0;i<10;i++)
	{
		*(p+i)=i;
	}
	//回收空间 
	free(p);
	p=NULL;  
	
	//5.动态内存的多次释放
	int *p=(int*)malloc(40);
	if(p=NULL)
	{
		return 0;
	 }
	 //使用
	 //释放 
	free(p);
	p=NULL;
	free(p);  
	
	
	//6.动态开辟的内存忘记释放（内存泄露） 
	while(1)
	{
		malloc(1);
		Sleep(1000);
	 }	 
	return 0;
 } 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void GetMemory(char *p)
{
	p=(char*)malloc(100);
	return p;
}
void Test(void)
{
	char* str=NULL;
	GetMemory(str);
	strcpy(str,"hello world");
	printf(str);
	
	free(str);
	str=NULL;
}
int main()
{
	Test();

	return 0;
 } 
*/ 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void *GetMemory(void)
{
	char p[]="hello world";
	return p;
}
void Test(void)
{
	char *str=NULL;
	str=GetMemory();
	printf(str);

}
int main()
{
	Test();

	return 0;
 } 

 
 
