/* 
//位段——二进制位 (不可跨平台)
#include<stdio.h>
struct S
{
	int _a:2;
	int _b:5;
	int _c:10;
	int _d:30;
};
int main()
{
	struct S s;
	printf("%d\n",sizeof(s));//8个字节 
	return 0;
 } 
 */ 
#include<stdio.h>
struct S
{
	char a:3;
	char b:4;
	char c:5;
	char d:4;
};

int main()
{
	struct S s={0};
	s.a=10;
	s.b=20;
	s.c=3;
	s.d=4;
	printf("%d\n",sizeof(s));//8个字节 
	return 0;
 } 

 
