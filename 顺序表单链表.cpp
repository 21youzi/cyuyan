/*
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50

typedef int ElemType;
typedef struct
{
	int data[MaxSize];//�þ�̬������������Ԫ�� 
	int length;//˳���ĵ�ǰ���� 
}SqList;//˳�������Ͷ��� 

//˳���Ļ�������ʵ�� 
//1.��ʼ�����Ա� 
void InitList(SqList *&L)
{
	L=(SqList *)malloc(sizeof(SqList));//���������Ա�Ŀռ� 
	L->length=0;//�����Ա�ĳ���Ϊ�� 
 }
//2.�������Ա�
void DestoryList(SqList *&L) 
{
	free(L);//�ͷ�L��ָ��˳���Ŀռ� 
}
//3.�ж����Ա��Ƿ�Ϊ�ձ�
bool ListEmpty(SqList *L) 
{
	return(L->length==0);	
 } 
//4.�����Ա�ĳ���
int ListLength(SqList *L)
{
	return(L->length);
 }
//5.������Ա�
void DispList(SqList *L)
{
	int i=0;
	for(i=0;i<L->length;i++)
		printf("%d",L->data[i]);
	printf("\n"); 
 } 
//6.����������Ա��еĳ���
bool GetElem(SqList *L,int i,ElemType &e)
{
	if(i<0||i>L->length)
		return false;
	else
		e=L->data[i-1];
		return true;
 } 
//7.��Ԫ��ֵ����
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
 //8.��������Ԫ��
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
 //9.ɾ������Ԫ��
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
//��1 ���һ���㷨��ɾ����������=x��ֵ
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
 //��2 �Ե�һ��Ԫ��Ϊ��׼��������<=����Ԫ�طŵ�������ǰ��
//��������
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
//��3 �����������Ƶ�ż��֮ǰ
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
//���������ز��� 
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 50

typedef struct LNode
{
	ElemType data;
	struct LNode *next;
 } LNode;
//����������ͷ�巨��
void createlistF(LNode *&L,ElemType a[],int n)
{
	LNode *s;
	L=(LNode *)malloc(sizeof(LNode)); //����ͷ��㣬�����ڿ� 
	L->next=NULL;
	for(int i=0;i<n;i++)
	{
		s=(LNode *)malloc(sizeof(LNode)); //�������ݽڵ� 
		s->data[i]=e;
		s->next=L->next;
		L->next=s;
	}
 } 
//β�巨 
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
//1.��ʼ�� ������
void InitList(LNode *&L) 
{
	L=(LNode *)malloc(sizeof(LNode));
	L->next=NULL;
}
//2.���ٵ�����
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
//3. �ж����Ա��Ƿ�Ϊ��
bool listempty(LNode *L)
{
	return(L->next=NULL); 
 } 
int main()
{
	
	return 0;
 } 

