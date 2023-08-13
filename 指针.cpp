 /*
 //数组名是什么 ——数组名是数组首元素的地址（有两个例外） 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	//int sz=sizeof(arr)/sizeof(arr[0]);
	//两个例外 
	//1.sizeof(数组名)--数组名表示整个数组，计算的是整个数组的大小，单位私字节
	//2.&数组名，数组名代表整个数组，取出的是整个数组的地址
	 
	printf("%p\n",arr);
	printf("%p\n",arr+1);
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[0]+1);
	printf("%p\n",&arr);
	printf("%p\n",&arr+1);
	printf("%p\n",*arr);
	return 0;
}
*
//找出只出现一次的数 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,1,2,3,4};
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	
	for(i=0;i<sz;i++)
	{
		//统计arr[i]在arr数组中出现的次数 
		int count=0;
		int j=0;
		for(j=0;j<sz;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			printf("单身狗：%d\n",arr[i]);
			break;
		}
	}
	return 0;
}
//操作符详解 
#include<stdio.h>
 int main()
{
//	int a=5%2;
//	double b=5/2;
//	printf("a=%d\n",a);
//	printf("b=%lf\n",b);
//	int a=16;
//	int b=a>>1;
//	printf("%d\n",b);
	int a=3;
	int b=5;
	printf("before:a=%d b=%d\n",a,b);
//	int tmp=0;
//	tmp=a;
//	a=b;
//	b=tmp;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after:a=%d b=%d\n",a,b);
	return 0;
 } 
 
//编写代码，求一个整数存储在内存中的二进制中的1的个数 
#include<stdio.h>
int main()
{
	int num=0;
	int count=0;
	scanf("%d",&num);
	while(num)
	{
		if(num%2==1)
			count++;
		num=num/2;			
	}
	printf("二进制中1的个数=%d\n",count);
	return 0;
}
 
 //二进制中有多少个1 
#include<stdio.h>
int main()
{
	int num=0;
	int count=0;
	scanf("%d",&num);
	int i=0;
	for(i=0;i<32;i++)
	{
		if(1==((num>>i)&1))
			count++;
	 }
	 printf("二进制中1的个数=%d\n",count); 
	return 0;
}

#include<stdio.h>
int main()
{
//	int a=10;
//	a=a+2;
//	a+=2;//符合赋值运算符 
//	int a=0;
//	if(a)
//	{
//		printf("haha"); 
//	}
//	if(!a)
//	{
//		printf("呵呵\n");
//	}
	
	return 0;
 } 

#include<stdio.h>
int main()
{
//	int a=10;
//	p=&a;//取地址操作符
//	*p=20;//解引用操作符 
//	
//	int a=10;
//	char c='r';
//	char* p=&c;
//	int arr[10]={0};
//	printf("%d\n",sizeof(a));
//	printf("%d\n",sizeof(c));
//	printf("%d\n",sizeof(p));
//	printf("%d\n",sizeof(arr));
	short s=0;
	int a=10;
	printf("%d\n",sizeof(s=a+5));
	printf("%d\n",s);
	
	return 0;
 } 

#include<stdio.h>
int main()
{
	int a=11;
	a=a|(1<<2);
	printf("%d\n",~a);
	printf("%d\n",a);
	return 0;
 } 

#include<stdio.h>
int main()
{
//	int a=3;
//	int b=5;
//	int c=a&&b;
//	int d=a||b;
//	printf("%d\n",c);
//	printf("%d\n",d);
	
	//逻辑与 如果左边为假，右边直接不运算 
	//逻辑或 如果左边为真，右边直接 不运算 
	int i=0,a=0,b=2,c=3,d=4;
	i=a++&&++b&&d++;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	printf("d=%d\n\n",d);
	i=a++&&++b&&d++;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	return 0;
 } 

//条件操作符（三目运算符）
#include<stdio.h>
int main()
{
//	int a=6;
//	int b=0;
//	if(a>5)
//		b=3;
//	else
//		b=-3;
//		
//	b=(a>5?3:-3);
//	printf("%d\n",b);
	int a=10;
	int b=20;
	int max;
	max=(a>b?a:b);
	printf("%d\n",max);
	return 0;
 } 

//逗号表达式 ,从左向右一次计算 
#include<stdio.h>
int main()
{
	int a=1;
	int b=2;
	int c=(a>b,a=b+10,a,b=a+1);
	printf("%d\n",c); 
	return 0;
}

#include<stdio.h>
int get_max(int x,int y)
{
	return x>y?x:y;
 } 
int main()
{
	int a=10;
	int b=20;
	//调用函数的时候的（）就是函数调用操作符 
	int max=get_max(a,b);
	printf("max=%d\n",max);
	return 0;
 } 

//访问结构体成员 
#include<stdio.h>
//创建一个结构体类型 struct Stu 
struct Stu
{
	char name[20];
	int age;
	char id[20];
 }; 
int main()
{
	int a=10;
	//使用struct Stu这个类型创建一个学生对象s1，并初始化 
	struct Stu s1={"张三",20,"201932942"};
//	printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%s\n",s1.id);

	struct Stu* ps=&s1;
//	printf("%s\n",(*ps).name);
//	printf("%d\n",(*ps).age);

//结构体指针 ->成员名 
	printf("%s\n",ps->name);
	printf("%d\n",ps->age);
	return 0;
 } 

//表达式求值 
#include<stdio.h>
int main()
{
//	char a=3;
//	char b=127;
//	char c=a+b;
//	printf("%d\n",c); 

//	char a=0xb6;
//	short b=0xb600;
//	int c=0xb6000000;
//	if(a==0xb6)
//		printf("a");
//	if(b==0xb600)
//		printf("b");
//	if(c==0xb6000000)
//		printf("c");
//		
	
	char c=1;
	printf("%u\n",sizeof(c));
	printf("%u\n",sizeof(+c));
	printf("%u\n",sizeof(!c));		
	return 0;
 } 

#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int c=b+a*3;
	printf("%d\n",c);
	return 0;
}
 
//指针  是一个变量，存放内存单元的地址 
#include<stdio.h>
int main()
{
	int a=10;
	int* p=&a;//指针变量 
	printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(int*));
	printf("%d\n",sizeof(double*)); 
	return 0;
 } 

//指针类型决定指针进行解引用操作的时候，能够访问的空间大小 
// int* p; *p能够访问4个字节
// char* p; *p能够访问1个字节
// double* p; *p能够访问8个字节 
#include<stdio.h>
int main()
{
	int a=0x11223344;
	char b=131;
	int* pa=&a;
	char* pc=&b;
	//*pa=0;
	printf("%p\n",pa);
	printf("%p\n",pa+1);

//指针类型决定了指针一步走多远 
	
	printf("%p\n",pc);
	printf("%p\n",pc+1);
	return 0;
 } 

#include<stdio.h>
int main()
{
	int arr[10]={0};
	int* p=arr;//数组名-首元素地址
	int i=0;
	for(i=0;i<10;i++)
	{
		*(p+i)=1;
	} 
	return 0;
 } 
 

//野指针 --指针只想的位置不可知（随机的，不正确的，没有明确限制的） 

#include<stdio.h>
int main()
{
	//1.指针未初始化 
//	int a;//局部变量不初始化，默认是随机值
//	int* p;// 局部的指针变量，就被初始化随机值
//	return 0;

	//2.指针越界访问 
//	int arr[10]={0};
//	int* p=arr;//数组名-首元素地址
//	int i=0;
//	for(i=0;i<=11;i++)//越界访问了 
//	{
//		*(p+i)=1;
//	} 
	  
	return 0;
 } 
//3.指针指向的内存空间释放
#include<stdio.h>
int* test()
{
	
	int a=10;
	return &a;
}
int main()
{
	 int *p=test();
	 *p=20;	
}

#include<stdio.h>
int main()
{
//	int a=10;//创建变量 
//	int*pa=&a;//初始化 
//	int* p=NULL;//NULL--用来初始化，给指针赋值
//	 
	int a=10;
	int *pa=&a;
	*pa=20; 
	pa=NULL;//避免野指针，置为空 
	return 0;	
}	
 
//指针运算
#include<stdio.h>
int main()
{
	int  arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[1]);
	int* p=arr;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",*p);
//		p++;
//	}
	for(i=0;i<5;i++)
	{
		printf("%d ",*p);
		p+=2;
		//p-=2;
	}
	return 0;
 } 
 
#include<stdio.h>
int main()
{
	int ch[5]={0}; 
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	//指针-指针=相差的元素个数 
	printf("%d\n",&arr[9]-&arr[0]);
//	printf("%d\n",&arr[9]-&ch[0]);//error
	return 0;
}
 
#include<stdio.h>
#include<string.h>
int my_strlen(char* str)
{
	char* start=str;
	char* end=str;
	while(*end!='\0')
	{
		end++;	
	}
	return end-start;
	
}
int main()
{
	//strlen-求字符串长度
	//递归--模拟实现strlen 计数器的方式1，方式2 
	
	char arr[]="hello";
	int len=my_strlen(arr);
	printf("%d\n",len); 
	return 0;
}
*/
//指针数组
#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	printf("%p\n",arr);//地址--首元素地址 
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr);
//1.&arr-&数组名-数组名不是首元素地址，数组名表示整个数组——&数组名 取出的是整个数组的地址 
//2.sizeof(arr) -sizeof(数组名)——数组名表示整个数组 sizeof(数组名)计算的时针各数组的大小 
	return 0;
 } 
 
 
 
