/*
#include<stdio.h>
#include<stdlib.h> 
//struct S
//{
//	int n;
//	int arr[10];
//};
//�������� ���������С�ɱ� 
//struct S
//{
//	int n;
//	int arr[];//δ֪��С 
//};
struct S
{
	int n;
	int arr[0];//δ֪��С ����������
};
int main()
{
	struct S s;
	printf("%d\n",sizeof(s));
	struct S* ps=(struct S*)malloc(sizeof(struct S)+5*sizeof(int));
	ps->n=100;
	int i=0;
	for(i=0;i<5;i++)
	{
		ps->arr[i]=i;
	}
	struct S* ptr=realloc(ps,44);
	if(ptr!=NULL)
	{
		ps->arr=ptr;
	}
	for(i=5;i<10;i++)
	{
		ps->arr[i]=i;
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",ps->arr[i]);
	}
	free(ps);
	ps=NULL;
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct S
{
	int n;
	int* arr; 
 };
int main()
{
	struct S*ps=(struct S*)malloc(sizeof(struct S));
	ps->arr=malloc(5*sizeof(int));
	int i=0;
	for(i=0;i<5;i++)
	{
		ps->arr[i]=i;
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",ps->arr[i]);
	}
	int *ptr=realloc(ps->arr,10*sizeof(int));
	if(ptr!=NULL)
	{
		ps->arr=ptr;
	}
	for(i=5;i<10;i++)
	{
		ps->arr[i]=i;
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",ps->arr[i]);
	}
	free(ps);
	ps=NULL;
	return 0; 
 } 
 */
#include<stdio.h>
#include<stdlib.h>
//struct S
//{
//	int n;
//	char c;
//	inr arr[0];//���������Ա 
//}

struct S
{
	int n;
	char c;
	int arr[];//���������Ա 
};
int main()
{
	printf("%d\n",sizeof(struct S)); 
	struct S* p=(struct S*)malloc(sizeof(struct S)+10*sizeof(int));
	p->n=100;
	int i=0;
	for(i=0;i<10;i++)
	{
		p->arr[i]=i;
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",p->arr[i]);
	}
	free(p);
	p=NULL;
	return 0;
}
