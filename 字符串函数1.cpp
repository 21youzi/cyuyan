/* 
#include<stdio.h>
int main()
{
	int a[]={1,2,3,4};
	printf("%d\n",sizeof(a));//4*4=16
	printf("%d\n",sizeof(a+0));// 
	printf("%d\n",sizeof(*a));
	printf("%d\n",sizeof(a+1));
	printf("%d\n",sizeof(a[1]));
	printf("%d\n",sizeof(&a));
	printf("%d\n",sizeof(*&a));
	printf("%d\n",sizeof(&a+1));
	printf("%d\n",sizeof(&a[0]));
	printf("%d\n",sizeof(&a[0]+1));
	return 0;
 } 

#include<stdio.h>
int main()
{
	char arr[]="abcdef";
	printf("%d\n",sizeof(arr));//4*4=16
	printf("%d\n",sizeof(arr+0));// 
	printf("%d\n",sizeof(*arr));
	printf("%d\n",sizeof(arr[1]));
	printf("%d\n",sizeof(&arr));
	printf("%d\n",sizeof(&arr+1));
	printf("%d\n",sizeof(&arr[0]+1));
	
	return 0;
}

#include<stdio.h>
#include<string.h>
int is_left_move(char* str1,char* str2)
{
	int len1=strlen(str1);
	int len2=strlen(str2);
	if (len1!=len2)
		return 0;
	//1.在str字符串中追加一个str1字符串 
	//strncat(str1,str2);error 
	strncat(str1,str2,6);
	//2.判断str2指向的字符串是否是str1指向的字符串 
	//strstr——找子字符串 
	char* ret=strstr(str1,str2);
	if(ret==NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}	
}
int main()
{
	char arr1[30]="abcdef";
	char arr2[]="cdefabc";
	int ret=is_left_move(arr1,arr2);
	if(ret==1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}

//杨氏矩阵——从左到右 从上到下是递增的 
#include<stdio.h>
int FindNum(int arr[3][3],int k,int *px,int *py)
{
	int x=0;
//	int y=col-1;
	int y=*py-1;
	while(x<=*px-1&&y>=0){
	
	if(arr[x][y]>k)
	{
		y--;
	}
	else if(arr[x][y]<k)
	{
		x++;
	}
	else
	{
		*px=x;
		*py=y;
		return 1;
	}
	}
	//找不到	
return 0;
}
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int k=7;
	int x=3;
	int y=3;
	
	//返回型参数 
	int ret=FindNum(arr,k,&x,&y);
	if(ret==1)
	{
		printf("找到了\n");
		printf("下标是:%d %d",x,y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<assert.h>
my_strlen(char* str)
{
	int count=0;
	assert(str!=NULL);
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	//int len=strlen("abcdef");
	char arr[]={'a','b','c','d','e','f'};
	int len=my_strlen(arr);
	printf("%d\n",len);
	return 0;
 } 

#include<stdio.h>
#include<string.h>
int main()
{
	if(strlen("abc")-strlen("abcdef")>0)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<assert.h>
void my_strcpy(char* dest,char* src)
{
	assert(dest!=NULL);
	assert(src!=NULL);
//	char* ret=dest;
	//拷贝src指向的字符串到dest指向的空间，包含'\0' 
	while(*src!='\0')
	{
		*dest=*src;
		dest++;
		src++;
	}
	*dest=*src;
}
int main()
{
	char arr1[]="abcdefghi";
	char arr2[]="hello";
	//strcpy(arr1,arr2);
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}
*/
//strcat 函数 后一个字符串追加到前一个字符串的后面 
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[30]="hello";
	char arr2[]="world";
	strcat(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
 } 



