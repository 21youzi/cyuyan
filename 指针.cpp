 /*
 //��������ʲô ������������������Ԫ�صĵ�ַ�����������⣩ 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	//int sz=sizeof(arr)/sizeof(arr[0]);
	//�������� 
	//1.sizeof(������)--��������ʾ�������飬���������������Ĵ�С����λ˽�ֽ�
	//2.&�������������������������飬ȡ��������������ĵ�ַ
	 
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
//�ҳ�ֻ����һ�ε��� 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,1,2,3,4};
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	
	for(i=0;i<sz;i++)
	{
		//ͳ��arr[i]��arr�����г��ֵĴ��� 
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
			printf("������%d\n",arr[i]);
			break;
		}
	}
	return 0;
}
//��������� 
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
 
//��д���룬��һ�������洢���ڴ��еĶ������е�1�ĸ��� 
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
	printf("��������1�ĸ���=%d\n",count);
	return 0;
}
 
 //���������ж��ٸ�1 
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
	 printf("��������1�ĸ���=%d\n",count); 
	return 0;
}

#include<stdio.h>
int main()
{
//	int a=10;
//	a=a+2;
//	a+=2;//���ϸ�ֵ����� 
//	int a=0;
//	if(a)
//	{
//		printf("haha"); 
//	}
//	if(!a)
//	{
//		printf("�Ǻ�\n");
//	}
	
	return 0;
 } 

#include<stdio.h>
int main()
{
//	int a=10;
//	p=&a;//ȡ��ַ������
//	*p=20;//�����ò����� 
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
	
	//�߼��� ������Ϊ�٣��ұ�ֱ�Ӳ����� 
	//�߼��� ������Ϊ�棬�ұ�ֱ�� ������ 
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

//��������������Ŀ�������
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

//���ű��ʽ ,��������һ�μ��� 
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
	//���ú�����ʱ��ģ������Ǻ������ò����� 
	int max=get_max(a,b);
	printf("max=%d\n",max);
	return 0;
 } 

//���ʽṹ���Ա 
#include<stdio.h>
//����һ���ṹ������ struct Stu 
struct Stu
{
	char name[20];
	int age;
	char id[20];
 }; 
int main()
{
	int a=10;
	//ʹ��struct Stu������ʹ���һ��ѧ������s1������ʼ�� 
	struct Stu s1={"����",20,"201932942"};
//	printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%s\n",s1.id);

	struct Stu* ps=&s1;
//	printf("%s\n",(*ps).name);
//	printf("%d\n",(*ps).age);

//�ṹ��ָ�� ->��Ա�� 
	printf("%s\n",ps->name);
	printf("%d\n",ps->age);
	return 0;
 } 

//���ʽ��ֵ 
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
 
//ָ��  ��һ������������ڴ浥Ԫ�ĵ�ַ 
#include<stdio.h>
int main()
{
	int a=10;
	int* p=&a;//ָ����� 
	printf("%d\n",sizeof(char*));
	printf("%d\n",sizeof(short*));
	printf("%d\n",sizeof(int*));
	printf("%d\n",sizeof(double*)); 
	return 0;
 } 

//ָ�����;���ָ����н����ò�����ʱ���ܹ����ʵĿռ��С 
// int* p; *p�ܹ�����4���ֽ�
// char* p; *p�ܹ�����1���ֽ�
// double* p; *p�ܹ�����8���ֽ� 
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

//ָ�����;�����ָ��һ���߶�Զ 
	
	printf("%p\n",pc);
	printf("%p\n",pc+1);
	return 0;
 } 

#include<stdio.h>
int main()
{
	int arr[10]={0};
	int* p=arr;//������-��Ԫ�ص�ַ
	int i=0;
	for(i=0;i<10;i++)
	{
		*(p+i)=1;
	} 
	return 0;
 } 
 

//Ұָ�� --ָ��ֻ���λ�ò���֪������ģ�����ȷ�ģ�û����ȷ���Ƶģ� 

#include<stdio.h>
int main()
{
	//1.ָ��δ��ʼ�� 
//	int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;// �ֲ���ָ��������ͱ���ʼ�����ֵ
//	return 0;

	//2.ָ��Խ����� 
//	int arr[10]={0};
//	int* p=arr;//������-��Ԫ�ص�ַ
//	int i=0;
//	for(i=0;i<=11;i++)//Խ������� 
//	{
//		*(p+i)=1;
//	} 
	  
	return 0;
 } 
//3.ָ��ָ����ڴ�ռ��ͷ�
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
//	int a=10;//�������� 
//	int*pa=&a;//��ʼ�� 
//	int* p=NULL;//NULL--������ʼ������ָ�븳ֵ
//	 
	int a=10;
	int *pa=&a;
	*pa=20; 
	pa=NULL;//����Ұָ�룬��Ϊ�� 
	return 0;	
}	
 
//ָ������
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
	//ָ��-ָ��=����Ԫ�ظ��� 
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
	//strlen-���ַ�������
	//�ݹ�--ģ��ʵ��strlen �������ķ�ʽ1����ʽ2 
	
	char arr[]="hello";
	int len=my_strlen(arr);
	printf("%d\n",len); 
	return 0;
}
*/
//ָ������
#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	printf("%p\n",arr);//��ַ--��Ԫ�ص�ַ 
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr);
//1.&arr-&������-������������Ԫ�ص�ַ����������ʾ�������顪��&������ ȡ��������������ĵ�ַ 
//2.sizeof(arr) -sizeof(������)������������ʾ�������� sizeof(������)�����ʱ�������Ĵ�С 
	return 0;
 } 
 
 
 
