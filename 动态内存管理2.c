/*
#include<stdio.h>
#include<stdlib.h>
int main()
//{	//1.��NULL���н����ò��� 
//	int *p=(int*)malloc(40);
//	//��һmalloc ʧ���ˣ�p�ͱ���ֵΪNULL 
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=i;
//	} 
//	free(p);
//	p=NULL;

 
//	//2 .�Զ�̬���ٵ��ڴ��Խ�����
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
	//3.�ԷǶ�̬�ڴ���ͷ� 
	free(p);
	p=NULL;
	return 0;
}

//�����Ķ�̬�ڴ���� 
#include<stdio.h>
#include<stdlib.h>
int main()
{
//	int* p=(int*)malloc(40);
//	if(p=NULL)
//	{
//		return 0;
//	 } 
//	 //ʹ��realloc 
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
{	//1.��NULLָ������ò��� 
	int* p=malloc(40);
	//p��������ж�
	*p=10;//malloc���ٿռ�ʧ�ܡ�����NULLָ������� 
	
	//2 .�Զ�̬���ٵ��ڴ��Խ�����
	int *p=(int*)malloc(40); //10��int 0-9 
	if(p==NULL)
	{
		return 0;
	 } 
	int i=0;
	//Խ�� 
	for(i=0;i<10;i++)
	{
		*(p+i)=i;
	} 
	free(p);
	p=NULL; 
	
	
	//3.�ԷǶ�̬�ڴ���ͷ� 
	int a=10;
	int* p=&a;
	*p=20; 
	//�ԷǶ�̬�ڴ���ͷ� 
	free(p);
	p=NULL;
	
	
	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
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
	//���տռ� 
	free(p);
	p=NULL;  
	
	//5.��̬�ڴ�Ķ���ͷ�
	int *p=(int*)malloc(40);
	if(p=NULL)
	{
		return 0;
	 }
	 //ʹ��
	 //�ͷ� 
	free(p);
	p=NULL;
	free(p);  
	
	
	//6.��̬���ٵ��ڴ������ͷţ��ڴ�й¶�� 
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

 
 
