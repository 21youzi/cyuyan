/*
//枚举 和共用体 
#include<stdio.h>

enum Sex
{	//枚举的可能取值 ——常量 
	MALE=2,//可以赋初值 
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
 
//联合（共用体）——特殊的共用体类型
//共用一段内存空间  至少有能力保存最大那个成员 
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
		printf("大端\n");
	}
	else
	{
		printf("小端\n");
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
 
 
 
 
