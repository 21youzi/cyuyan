/*
//strtok函数 
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="zpw@bitedu.tech";
	char *p="@.";
	char buf[1024]={0};
	strcpy(buf,arr);
	
	char* ret=NULL;
	for(ret=strtok(arr,p);ret!=NULL;ret=strtok(NULL,p))
	{
		printf("%s\n",ret);
	}
//	char*ret=strtok(arr,p);
//	printf("%s\n",ret); 
//	ret=strtok(NULL,p);
//	printf("%s\n",ret); 
	return 0;
 } 

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="192.168.31.121";
	char*p=".";
	char buf[1024]={0};
	strcpy(buf,arr);
	
	char* ret=NULL;
	for(ret=strtok(arr,p);ret!=NULL;ret=strtok(NULL,p))
	{
		printf("%s\n",ret);
	}
	return 0;
}

//strerror——返回错误码 对应的错误信息 
#include<stdio.h>
#include<errno.h> 
#include<string.h>
int main()
{
	//0 ——no error
	//1——Operation not permitted 
	//2——No such file or directory
	//errrno 是一个全局的错误码的变量
	//当c语言库函数在执行过程中，发生错误，就会把对应的错误码，赋值到errno中 
//	char*str=strerror(0);
//	char*str=strerror(errno);
//	printf("%s\n",str);

	FILE* pf=fopen("text.txt","r");
	if(pf==NULL)
	{
		printf("%s\n",strerror(errno));
	}
	else
	{
		printf("open file success\n");
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
//	char ch='w';
//	int ret=islower(ch);
//	char ch='2';
//	int ret=isdigit(ch);
//	printf("%d\n",ret);

	//char ch=tolower('Q');
//	char ch=toupper('q');
//	putchar(ch);

	char arr[]="I AM A Student";
	int i=0;
	while(arr[i])
	{
		if(isupper(arr[i]))
		{
			arr[i]=tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n",arr);
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<assert.h> 
struct s
{
	char name[20];
	int age;
};
void* my_memcpy(void* dest,const void* src,size_t num)
{
	void* ret=dest;
	assert(dest!=NULL);
	assert(src!=NULL);
	 
	while(num--)
	{
		*(char*)dest=*(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[10]={0};
	struct s arr3[]={{"张三",20},{"李四",30 }};
	struct s arr4={0};
	//strcpy(arr2,arr1);
	//memcpy(arr2,arr1,sizeof(arr1));
	my_memcpy(arr3,arr4,sizeof(arr3));
	return 0;
}

//memcpy 只要处理 不重叠的内存拷贝 
//memmovve 处理重叠内存的拷贝 
#include<stdio.h>
#include<string.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	memmove(arr+2,arr,20);
	for(i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
*/
#include<stdio.h>
#include<string.h>
#include<assert.h> 
my_memcpy(void* dest,const void* src,size_t count)
{
	char* ret=dest;
	assert(dest!=NULL);
	assert(src!=NULL);
	//int i=count;
	while(count--)
	{
		*(char*)dest=*(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	 return ret;	
}
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[10]={0};
	//arr1中的数字拷贝到arr2中 
	my_memcpy(arr2,arr1,sizeof(arr1));
	return 0;
}


