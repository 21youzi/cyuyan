/*
//ö�� �͹����� 
#include<stdio.h>

enum Sex
{	//ö�ٵĿ���ȡֵ �������� 
	MALE=2,//���Ը���ֵ 
	FEMALE=4,
	SECRECT=8
 };
enum Color
{
	RED,
	GREEN,
	BLUE
};
int main()
{
//	enum Sex s=MALE; 
//	enum Color=BLUE;
	printf("%d %d %d\n",RED,GREEN,BLUE);
	printf("%d %d %d\n",MALE,FEMALE,SECRECT); 
	return 0;
 } 
 

#include<stdio.h>
#define RED 0
#define GREEN 1
#define BLUE 2

int main()
{
	int color=RED;
	return 0;
}
 
//���ϣ������壩��������Ĺ���������
//����һ���ڴ�ռ�  ������������������Ǹ���Ա 
#include<stdio.h>

union Un
{
	char c;
	int i;	
 };
int main()
{
	union Un u;
	printf("%d\n",sizeof(u));
	
	printf("%p\n",&u);
	printf("%p\n",&(u.c));
	printf("%p\n",&(u.i));
	return 0;
 } 

#include<stdio.h>
int main()
{
	int a=0x11223344;
	if(1==*(char*)&a)
	{
		printf("���\n");
	}
	else
	{
		printf("С��\n");
	}
	return 0;
 } 
*/
#include<stdio.h>
union Un
{
	int a;
	char  arr[5];	
 };
int main()
{
	union Un u;
	printf("%d\n",sizeof(u));//8
	return 0;
 } 
 
 
 
 
