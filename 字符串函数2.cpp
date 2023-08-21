/*
#include<stdio.h>
#include<string.h>
int main()
{
	char *p1="abcdef";
	char *p2="sqwer";
	int ret=strcmp(p1,p2);//str1>str2 返回1，相等返回0，<返回-1 
	printf("%d\n",ret);//结果为-1 
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<assert.h>
my_strcmp(const char* str1,const char* str2)
{
	assert(str1&&str2);
	//比较
	while(*str1==*str2)
	{
		if(*str1=='\0')
		{
			return 0;//相等 
		}
		str1++;
		str2++;
	 }
	if(*str1>*str2) 
		return 1;
	else
		return -1;
}
int main()
{
	char *p1="abcde";
	char *p2="abcd";
	int ret=my_strcmp(p1,p2);//str1>str2 返回1，相等返回0，<返回-1 
	printf("%d\n",ret);
	return 0;
 } 

//strncpy 长度受限制的copy 
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[5]="abc";
	char arr2[]="hello bit";
	//strcpy(arr1,arr2);
	strncpy(arr1,arr2,6);
	printf("%s",arr1);
	return 0; 
}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[30]="hello";
	char arr2[]="world";
	strncat(arr1,arr2,8);
	printf("%s",arr1);
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	const char* p1="abcdef";
	const char* p2="abcqwer";
	//int ret=strcmp(p1,p2);
	int ret=strncmp(p1,p2,4);
	printf("%d\n",ret);
	return 0;
}
*/
//strstr——查找子字符串 
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strstr(const char* p1,const char* p2)
{
	assert(p1!=NULL);
	assert(p2!=NULL);
	char *s1=NULL;
	char *s2=NULL;
	char *cur=(char*)p1;
	if(*p2=='\0')
	{
		return (char*)p1;
	}
	while(*cur)
	{
		s1=cur;
		s2=(char*)p2;
		while((*s1=='\0')&&(*s2=='\0')&&(*s1==*s2))
		{
			s1++;
			s2++;
		}
		if(*s2=='\0')
		{
			return cur;//找到子串	
		}
		cur++;
	}
	return NULL;//找不到子串 
 } 
int main()
{
	char* p1="abcdef";
	char* p2="def";
	char* ret=my_strstr(p1,p2);
	if(ret==NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n",ret);	
	}
	return 0;
}


