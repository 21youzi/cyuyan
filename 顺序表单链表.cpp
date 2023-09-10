/*
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50

typedef int ElemType;
typedef struct
{
	int data[MaxSize];//用静态的数组存放数据元素 
	int length;//顺序表的当前长度 
}SqList;//顺序表的类型定义 

//顺序表的基本运算实现 
//1.初始化线性表 
void InitList(SqList *&L)
{
	L=(SqList *)malloc(sizeof(SqList));//分配存放线性表的空间 
	L->length=0;//置线性表的长度为空 
 }
//2.销毁线性表
void DestoryList(SqList *&L) 
{
	free(L);//释放L所指的顺序表的空间 
}
//3.判断线性表是否为空表
bool ListEmpty(SqList *L) 
{
	return(L->length==0);	
 } 
//4.求线性表的长度
int ListLength(SqList *L)
{
	return(L->length);
 }
//5.输出线性表
void DispList(SqList *L)
{
	int i=0;
	for(i=0;i<L->length;i++)
		printf("%d",L->data[i]);
	printf("\n"); 
 } 
//6.按序号求线性表中的长度
bool GetElem(SqList *L,int i,ElemType &e)
{
	if(i<0||i>L->length)
		return false;
	else
		e=L->data[i-1];
		return true;
 } 
//7.按元素值查找
int LocateElem(SqList *L,ElemType e)
{
	int i=0;
	while(i<L->length&&L->data[i]!=e);
		i++;
	if(i>L->length)
		return false;
	else
		return i+1;
 }
 //8.插入数据元素
bool ListInsert(SqList *&L,int i,ElemType e)
{
	int j;
	if(i<1||i>L->length+1||L->length==MaxSize)
		return false;
	i--;
	for(j=L->length;j>i;j--)
		L->data[j]=L->data[j-1];
	L->data[i]=e;
	L->length++;
	return true;	
 } 
 //9.删除数据元素
bool ListDelete(SqList *&L,int i,ElemType &e)
{
	int j;
	if(i<1||i>L->length)
		return false;
	i--;
	e=L->data[i];
	for(j=i;j<L->length-1;j++)
		L->data[j]=L->data[j+1];
	L->length--;
	return true;
 } 
//例1 设计一个算法，删除其中所有=x的值
void delnode1(SqList *&L,ElemType x)
{
	int k=0,i;
	for(i=0;i<L->length-1;i++)
	{
		if(L->data[i]!=x)
		{
			L->data[k]=L->data[i];
			k++;
		}
	}
	L->length=k;
 }
 //例2 以第一个元素为基准，将所有<=它的元素放到该数的前面
//函数声明
int swap(int *p1,int*p2) 
int partition(SqList *&L)
{
	int i=0,j=L->length-1;
	ElemType base=L->data[0];
	while(i<j)
	{
		while(i<j&&L->data[j]>base)
			j--;
		while(i<j&&L->data[i]<=base)
			i++;
		if(i<j)
			swap(L->data[i],L->data[j]);
	}
	swap(L->data[0],L->data[i]);
 } 
//例3 将所有奇数移到偶数之前
void move(SqList *&L)
{
	int i=0,j=L->length-1;
	while(i<j)
	{
		while(i<j&&L->data[j]%2==0)
			j--;
		while(i<j&&L->data[i]%2==1)
			i++;
		if(i<j)
			swap(L->data[i],L->data[j]);
	}
 } 
int main()
{
	
	return 0;
}
*/
//单链表的相关操作 
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50

typedef struct LNode
{
	ElemType data;
	struct LNode *next;
 } LNode;
//建立单链表（头插法）
void createlistF(LNode *&L,ElemType a[],int n)
{
	LNode *s;
	L=(LNode *)malloc(sizeof(LNode)); //创建头结点，并置于空 
	L->next=NULL;
	for(int i=0;i<n;i++)
	{
		s=(LNode *)malloc(sizeof(LNode)); //创建数据节点 
		s->data[i]=e;
		s->next=L->next;
		L->next=s;
	}
 } 
//尾插法 
void createlistR(LNode *&L,ElemType a[],int n)
{
	LNode *s,r;
	L=(LNode *)malloc(sizeof(LNode));
	r=L;
	for(int i=0;i<n;i++)
	{
		s=(LNode*)malloc(sizeof(LNode));
		s->data[i]=e;
		r->next=s;
		r=s;
	}
	r->next=NULL;
}
//1.初始化 单链表
void InitList(LNode *&L) 
{
	L=(LNode *)malloc(sizeof(LNode));
	L->next=NULL;
}
//2.销毁单链表
void DestoryList(LNode *&L)
{
	LNode *pre=L,*p=L->next;
	while(p!=NULL)
	{
		free(pre);
		pre=p;
		p=pre->next;
	}
	free(pre);
 } 
//3. 判断线性表是否为空
bool listempty(LNode *L)
{
	return(L->next=NULL); 
 } 
int main()
{
	
	return 0;
 } 

