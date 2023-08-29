/*#include<stdio.h>
#include<string.h>
int main(){
	
打印数组中的元素 
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	while(i<10)
	{
		printf("%d",arr[i]);
		i++;
	} 
	
	
	//进行移位操作 
	int a=1;
	int b=a<<2;
	printf("%d\n",b);
	
	//与操作 
	int a=3;
	int b=5;
	int c=a&b;
	printf("%d",c);
	 
	int a=10;
	printf("%d\n",a);
	printf("%d\n",!a);
	
	int a=10;
	int arr[10]={0};//10个整型元素的数组 
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(arr));
	
	//计算数组的元素个数
	//个数=数组总大小/每个元素的大小
	int arr[10]={0};
	int sz=0;
	printf("%d\n",sizeof(arr));
	sz=sizeof(arr)/sizeof(arr[0]);
	printf("sz=%d\n",sz);
	
//两个数最大值 
	int num1=10;
	int num2=20;
	if(num1>num2)
		printf("较大值是：%d\n",num1);
	else
		printf("较大值是：%d\n",num2);
	
//用函数实现求最大值
#include<stdio.h>
#include<string.h>
int MAX(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}
int main(){

	int num1=10;
	int num2=20;
	int max=0;
	max=MAX(num1,num2);
	printf("max=%d\n",max);	
	return 0;
} 

#include<stdio.h>
#include<string.h>
int main(){
	int a=10;
	int arr[]={1,2,3,4,5,6};
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));//数组的元素个数 
	
	return 0;
}

#include<stdio.h>
int main()
{
	int a=0;
	int b=~a;//按位取反 
	printf("%d\n",b);	
	
	return 0;
 } 

#include<stdio.h>
int main()
{
	int a=10;
	int b=a++;//后置++，先使用，再++ 
	printf("a=%d b=%d\n",a,b);//a=11,b=10 
	return 0;
	
 } 
 
 
 //强制类型转换 
#include<stdio.h>
int main()
{
	int a=(int)3.14;
	printf("%d",a);
	return 0;
}

//三目 
#include<stdio.h>
int main()
{
	int a=100; 
	int b=20;
	int max=0;
	
	max=(a>b?a:b);
	if (a>b)
		max=a;
	else
		max=b; 
	return 0;
}


#include<stdio.h>
int main()
{
	//register int a=10;//建议把a定义成寄存器变量 ，取决于编译器
	int a=10;
	a=-2;
	printf("%d\n",a); 
	return 0;

}

//指针 

//	int a=10;
//	int* p=&a;//p是一个变量--指针变量 
//	*p=20;//* 解引用操作符（或间接访问操作符） 
//	printf("a=%d\n",a); 
//
//	double d=3.14;
//	double* pd=&d;
//	*pd=5.5;
//	printf("%lf\n",d); 
//	printf("%d\n",sizeof(pd));
//	printf("%d\n",sizeof( int*));
//	printf("%d\n",sizeof( double*)); 
//	return 0;  
// }     

//结构体、我们自己创造出来的一种类型 
#include<stdio.h>

struct Book
{
	char name[20];//c语言程序设计
	short price;//价格  
	
 };//注意“；”一定不要忘了 
int main()
{

	//利用结构体类型创建一个该类型的结构体变量 
//	struct Book b1={"c语言程序设计",55};
//	printf("书名：%s\n",b1.name);
//	printf("价格：%d元\n",b1.price); 
//	b1.price=15;
//	printf("修改后的价格：%d\n",b1.price);
	struct Book b1={"c语言程序设计",55}; 
	struct Book* pd=&b1;
//	printf("%s\n",(*pd).name);
//	printf("%d\n",(*pd).price);

	// . 结构体变量.成员
	//-> 结构体变量->成员 
	printf("%s\n",pd->name);
	printf("%d\n",pd->price);
	return 0;
} 
//switch语句
#include<stdio.h>
int main()
{
	int day=0;
	scanf("%d",&day);
	switch(day)         //switch 整型表达式 
	{
		case 1:             //case 整型常量表达式 
			printf("星期一\n");
			break; 
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
		case 7:
			printf("星期天\n");
			break;
	}
	return 0;
 } 

#include<stdio.h>
int main()
{
	int day=0;
	scanf("%d",&day);
	switch(day)         //switch 整型表达式 
	{
		case 1:             //case 整型常量表达式  
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日");
			break; 
		case 6:
		case 7:
			printf("休息日\n");
			break;
		default:     //以上情况都不满足，处理非法状况 
		printf("输入错误\n"); 
	}
	return 0;
 } 
 
 #include<stdio.h>
 int main()
 {
 	int ch=0;
	while((ch=getchar())!=EOF) //EOF -end of file 文件结束标志 
	{
		putchar(ch);
	}
//	int ch=getchar(); //getchar()接受键盘输入的一个字符 ，用ch接受 
// 	putchar(ch);//输出到屏幕 ，同printf 
 	return 0;
  } 


#include<stdio.h>
int main()
{
	int ret=0;
	char passward[20]={0};
	printf("请输入密码：>");
	scanf("%s",passward);
	//缓冲区还剩下一个'\n'
	//读取下一个'\n'
	getchar(); 
	printf("请确认（Y/N）");
	ret=getchar();
	if(ret=='Y')
		printf("确认成功\n");
	else
		printf("放弃确认\n");
	return 0;
 } 


//#include<stdio.h>
//int main()
//{
//	int ch=0;
//	while((ch=getchar())!=EOF)
//	{
//		if(ch<'0' ||ch>'9')//只会输出数字 
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i=0;//初始化 
//	//判断、调整 
//	for(i=1;i<=10;i++)
//	{
//		if(i==5)
//			break;
//		printf("%d",i);
//	 } 
//	return 0;
// } 

//#include<stdio.h>
//int main()
//{
////	int i=0;
////	int j=0;
////	for(;i<10;i++)
////	{
////		for(;j<10;j++)
////		{
////		
////			printf("hehe\n");
////		}
////	}
//	int x,y;
//	for(x=0,y=0;x<2&&y<5;++x,y++)
//	printf("hehe\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i=0;
//	int k=0;
//	for(i=0,k=0;k=0;i++,k++) //循环条件k=0（赋值）,为假，循环0次 
//		k++;
//	return 0;
//}
//do while循环，至少执行一次
//
//#include<stdio.h>
//int main()
//{
//	int i=1;
//	do
//	{
//		if(i==5)
//			continue;
//		printf(" %d",i);
//		i++;
//	}
//	while(i<=10);
//	return 0;
// } 
//1.计算n的阶乘
//#include<stdio.h>
//int main()
//{	
//	int i=0;
//	int s=1;//如果初始化为0的话，无论n为何值，结果均为0 
//	int n=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		s*=i;
//		
//	}
//	printf("n的阶乘为%d",s);
//	return 0;
// } 
//2. 计算1！+2！+……+10！的值
#include<stdio.h>
int main()
{	
	int i=0;
	int s=1;//如果初始化为0的话，无论n为何值，结果均为0 
	int n=0;
	int sum=0;
//	//scanf("%d",&n);
//	for(n=1;n<=3;n++)
//	{
//		s=1;  
//		for(i=1;i<=n;i++)
//		{
//			s*=i;
//			
//		}
//		sum+=s;
//	}
	for(n=1;n<=3;n++)
	{
		s=s*n;
		sum=sum+s;
	}
	printf("sum=%d",sum);
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	//写一个代码，在arr数组（有序的）中找到7
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		if(k==arr[i])
		{
			printf("找到了，下标是：%d",i);
			break;
		}
	 } 
	if(i==sz)
		printf("找不到"); 
	return 0;
}

//3.二分法查找（折半查找） 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);//计算元素个数
	int left=0;
	int k=7;
	int right=sz-1;
	while(left<=right)
	{
	
	
	int mid=(left+right)/2;
	if(arr[mid]>k)
	{
		right=mid-1;
	}
	else if(arr[mid]<k)
	{
		left=mid+1;
	}
	else
	{
		printf("找到了,下标是%d\n",mid);
		break;
	}
	}
	if(left>right)
		printf("找不到\n");
	return 0;
 } 

//4.编写代码，演示多个字符从两端移动，向中间汇聚 
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h> 
int main()
{
	char arr1[]="welcome to bit!!!!!!";
	char arr2[]="####################";
	int left=0;
//	int right=size(arr1)/sizeof(arr1[0])-2;//因为末尾是“\0”，所以-1-1=-2 
	int right=strlen(arr1)-1;
	
	while(left<=right)
	{
	
	arr2[left]=arr1[left];
	arr2[right]=arr1[right]; 
	printf("%s\n",arr2);
	//休息1秒
	Sleep(1000);
	system("cls");//执行系统命令的一个函数 
	left++;
	right--;
	}
	printf("%s\n",arr2);
	return 0;
 } 
//5.编写代码实现，模拟用户登陆场景，并且只能登录三次 
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char password[20]={0};
	for(i=0;i<3;i++)
	{
		printf("请输入密码:>");
		scanf("%s",password);
		if(strcmp(password,"123456")==0)//不能直接比较两个字符串是否相等，应使用库函数-strcmp 
		{
			printf("登录成功\n");
			break;
		 } 
		 else
		 {
		 	printf("密码错误\n");
		 }
		
	 } 
	 if(i==3)
	 	printf("三次密码均错误，退出程序\n");
	return 0;
}


//从大到小输出
#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		int tmp=a;
		a=b;
		b=tmp;
		
	}
	if(a<c)
	{
		int tmp=a;
		a=c;
		c=tmp;
	}
	if(b<c)
	{
		int tmp=b;
		b=c;
		c=tmp;
	}
	printf("%d %d %d\n",a,b,c);
	return 0; 
}

//打印3的倍数
#include<stdio.h>
int main()
{
	int i=0;
	for(i=1;i<=100;i++)
	{
		if(i%3==0)
			printf(" %d",i);
	}
	
	return 0;
 } 

//给定两个数，求两个数的最大公约数
#include<stdio.h> 
int main()
{
	int m=24;
	int n=18;
	int r=0;
	scanf("%d%d",&m,&n);
	while(m%n)//辗转相除法 
	{
		r=m%n;
		m=n;
		n=r;
	}
	printf("%d\n",n);
	return 0;
}

//打印1000到2000之间的闰年
#include<stdio.h>
int main()
{
	int year=0;
	int count=0;
	for(year=1000;year<=2000;year++)
	{
		//判断year是否为闰年
		//1.能被4整除并且不能被100整除 
		//2.能被400整除的是闰年
		if(year%4==0 &&year%100!=0)
		{
			printf("%d ",year);
			count++;
		 }
		 else if(year%400==0) 
		 {
		 	printf("%d ",year);
		 	count++;
		 }
	}
	printf("\ncount=%d",count);
	return 0;
 } 

//打印素数，100到200之间的素数 
#include<stdio.h>
int main()
{
	int i=0;
	int count=0;
	for(i=100;i<=200;i++)
	{
		//判断num是否为素数 
		int j=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		 } 
		 if(j==i)
		 {
		 	count++;
			printf("%d ",i);
			
		 }
	}
	printf("\n%d",count);
	return 0;
 } 

//编写程序数一下1到100的所有整数中出现了多少个9 
#include<stdio.h>
int main()
{
	int i=0;
	int count=0;
	for(i=1;i<=100;i++)
	{
		if(i%10==9)
			count++;
		if(i/10==9)
			count++:
	}
	printf("count=%d",count);
	return 0;
}

//分数求和 1/1-1/2+1/3……-1/100 
#include<stdio.h>
int main()
{
	int i=0;
	double sum=0.0;
	int flag=1;
	for(i=1;i<=100;i++)
	{
		sum+=flag*1.0/i;
		flag=-flag;
	 } 
	 printf("%lf\n",sum);
	return 0;
 } 
 
//求10个数中的最大值
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	//int max=0;
	int max=arr[0];
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("max=%d\n",max);
	return 0;
 } 

//在屏幕上输出9*9的口诀表
#include<stdio.h>
int main()
{
	int i=0;
	for(i=1;i<=9;i++)
	{
		//打印一行
		int j=1;
		for(j=1;j<=i;j++)
		{
			printf(" %d*%d=%-2d",i,j,i*j);
		 } 
		 printf("\n");
	}
	return 0;
 } 

//猜数字游戏 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("************************\n");
	printf("***  1.play  0.exit  ***\n");
	printf("************************\n");
}
void game()
{
	
	//1.生成随机数
	int ret=0;
	int guess=0;
	//拿时间戳来设置随机数的生成起始点
	//time_t time(time_t *time)
	ret=rand()%100+1;//生成1-100之间的随机数 
//	printf("%d\n",ret);//随机生成的答案，不输出
	//2.猜数字 
	while(1)
	{
		printf("请猜数字：\n");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("猜大了\n"); 
		 } 
		 else if(guess<ret)
		 {
		 	printf("猜小了\n");
		 }
		 else
		 {
		 	printf("恭喜你，猜对了！\n");
			 break; 
		 }
	 } 
}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
		 } 
	 }while(input);
	return 0;
 } 


//goto 语句，尽量少使用goto语句 
//一个关机程序 
#include<stdio.h>
#include<windows.h>
int main()
{
	char input[10]={0};
	system("shutdown -s -t 60");
	again:
	printf("你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机！\n 请输入：");
	scanf("%s",input);
	if(0==strcmp(input,"我是猪"))
	{
		system("shutdown -a"); 
	 } 
	 else
	 {
	 	goto again;
	 }
	return 0;
 } 

//strlen函数 
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="hello";
	char arr2[]="######";
	strcpy(arr2,arr1);//把arr1拷贝到arr2 
	printf("%s\n",arr2);
	return 0;
}

//memset
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="hello world";
	memset(arr,'*',5);
	printf("%s\n",arr);
	return 0;
}

//求两个数中的最大值
#include<stdio.h>
int get_max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}
int main()
{
	int a;
	int b;
	scanf("%d%d",&a,&b);
	int max=get_max(a,b);
	printf("max=%d\n",max);
	max=get_max(122,34);
	printf("max=%d\n",max);
	return 0;
 } 
 
 //交换两个数的值
#include<stdio.h>
void swap(int* pa,int* pb)
{
	int temp=0;
	temp=*pa;
	*pa=*pb;
	*pb=temp;
}
int main() 
{
	int a=10;
	int b=20;
	//int temp=0;
	printf("a=%d b=%d\n",a,b);
	swap(&a,&b);
//	temp=a;
//	a=b;
//	b=temp;
	printf("a=%d b=%d",a,b);
	return 0;
}

//找100-200之间的素数
#include<stdio.h>

int is_prime(int n)
{
	int j=0;
	for(j=2;j<n;j++)
	{
		if(n%j==0)
			return 0;
	}
	return 1;
}
int main()
{
	int i=0;
	int count=0; 
	for(i=100;i<=200;i++)
	{
		if(is_prime(i)==1)
			printf("%d ",i);
		
	}

	return 0;
 } 
 
//写一个函数判断是否为闰年
#include<stdio.h>
int is_leap_year(int y)
{
	if(y%4==0&&y%100!=0||(y%400==0))
		return 1;
	else
		return 0;
}
int main()
{
	int year=0;
	for(year=1000;year<=2000;year++)
	{
		if(1==is_leap_year(year))
		{
			printf("%d ",year);
		}
	}
	return 0;
 } 
 
//用函数实现二分查找 
#include<stdio.h>

int binarry_search(int arr[],int k,int sz)
{
	//算法实现
	int left=0;
	int right=sz-1; 
	
	while(left<=right)
  {
	int mid=(left+right)/2;
	if(arr[mid]<k)
	{
		left=mid+1;
	}
	else if((arr[mid]>k))
	{
		right=mid-1;
	}
	else
	{
		return mid;
	}
 }
 return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	int sz=sizeof(arr)/sizeof(arr[0]);
	
	int ret=binarry_search(arr,k,sz);
	if(ret==-1)
	{
		printf("找不到指定的数字\n");
	 } 
	else
	{
		printf("找到了，下标是：%d\n",ret);
	}
	return 0;
}

//写一个函数，每调用一次，num+1
#include<stdio.h>

void add(int *p)
{
	(*p)++;
}
int main()
{
	int num=0;
	add(&num);
	printf("num=%d\n",num);
	add(&num);
	printf("num=%d\n",num);
	add(&num);
	printf("num=%d\n",num);
	return 0;
 } 
 
//函数的嵌套调佣
#include<stdio.h>
#include<string.h> 
int main()
{
//	int len=0;
//	//法1： 
//	len=strlen("abc");
//	printf("%d\n",len);
//	//法2： 
//	printf("%d\n",strlen("abc"));
	printf("%d",printf("%d",printf("%d",43)));
	return 0;
 } 
 
 //函数声明
 #include<stdio.h>
 //函数声明  一般放在头文件，先声明，后使用 
int add(int a,int b);//函数声明 

int main()
 {
 	int a=10;
	int b=20;
	int sum=0;
	sum=add(a,b);
	printf("sum=%d\n",sum);
 	return 0;
  } 
  //函数 
int add(int a,int b)
{
 	int sum;
 	sum=a+b;
 	return sum;
 }

 //递归
#include<stdio.h>
void print(int n)
{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ",n%10);
}
int main()
{
	unsigned int num=0;
	scanf("%d",&num);
	print(num);
	return 0;
 } 

//不设临时变量，求字符串长度
#include<stdio.h>
#include<string.h> 

int my_strlen(char *str)
{
	int count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[]="hello";
	//int len=strlen(arr);
	int len=my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个首地址 
	printf("len=%d\n",len);
	return 0;
 } 

//n的阶乘 
#include<stdio.h>
int facl(int n)
{
	int i=0;
	int ret =1;
	for(i=1;i<=n;i++)//循环方式 
	{
		ret*=i;
	}
	return ret;
}
int fac2(int n)
{
	if(n<=1)    //递归方法 
		return 1;
	else
		return n*fac2(n-1);
 } 
int main()
{
	int n=0;
	int ret=0; 
	scanf("%d",&n);
	facl(n);//循环的方式 
	ret=facl(n);
	printf("%d\n",ret);
	return 0; 
}
 
//斐波拉契数列，1 1 2 3 5 8 13 21 34 55 
#include<stdio.h>
int Fib(int n)
{
	if(n<=2)
		return 1;
	else
	{
		return Fib(n-1)+Fib(n-2);
	}
}
int main()
{
	int n=0;
	int ret=0;
	scanf("%d",&n);
	//TDD-测试驱动开发
	ret =Fib(n);
	printf("ret=%d\n",ret);
	return 0;
 } 

#include<stdio.h>
int main()
{
	
	return 0;
 } 

//创建数组
#include<stdio.h>
#include<string.h>
int main()
{
	//int arr[10]={1,2,3};//不完全初始化,剩下的元素默认初始化为0 
	//char arr2[5];
	char arr4[]={"abcdef"};
	printf("%d\n",sizeof(arr4));//sizeof 计算arr4所占空间的大小 
	printf("%d\n",strlen(arr4));//strlen 求字符串的长度，'\0'之前的字符个数 
	return 0;
 } 
//1、strlen 和sizeof 没有什么关联
//2、strlen是求字符串长度的——只能针对字符串求长度——库函数-使用得引用头文件
//3、sizeof 计算变量，数组，类型的大小，单位是字节- - 操作符 

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="abc";
	char arr2[]={'a','b','c'};
	printf("%d\n",sizeof(arr1));
	printf("%d\n",sizeof(arr2));
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr1));
	return 0;
 } 

#include<stdio.h>
#include<string.h>
int main()
{
//	char arr[]="abcdef";//[a][b][c][d][e][f]['\0']
////	printf("%c\n",arr[3]);
//	int i=0;
//	for(i=0;i<6;i++)
//	{
//		printf("%c ",arr[i]);
//	}
	
	int arr[]={1,2,3,4,5,6,7,8,9,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 } 
 
//一维数组在内存中的存储
//数组在内存中是连续存在的 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("&arr[%d]=%p\n",i,&arr[i]);//数组中每个元素的地址 
	}
	return 0;
 } 
 
 //一维数组在内存中的存储
//数组在内存中是连续存在的 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("&arr[%d]=%p\n",i,&arr[i]);//数组中每个元素的地址 
	}
	return 0;
 } 

//二维数组在内存中的存储,通过下标访问 
//二维数组的行可以省略，列绝对不能省略 
#include<stdio.h>
int main()
{
	int arr[3][4]={{1,2,3},{4,5}};//3行4列,第一行 1 2 3，第二行 4 5 
	//char ch[5][6];
	int i=0;
	for(i=0;i<3;i++)
	{
		int j=0;
		for(j=0;j<4;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	 } 

	return 0;
 }

 //二维数组在内存中的存储
#include<stdio.h>
int main()
{
	int arr[3][4]={{1,2,3},{4,5}};//3行4列,第一行 1 2 3，第二行 4 5 
	//char ch[5][6];
	int i=0;
	for(i=0;i<3;i++)
	{
		int j=0;
		for(j=0;j<4;j++)
		{
			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
		}
		printf("\n");
	 } 

	return 0;
 } 

//冒泡排序 
#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	//确定冒泡排序的趟数
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		//每一趟冒泡排序
		int j=0;
		for(j=0;j<sz-1-i;j++) 
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				
			}
		}
	 } 
 } 
int main()
{
	int arr[]={8,9,7,6,5,4,3,2,1,0};
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	//对arr进行排序，排成升序
	bubble_sort(arr,sz);//冒泡排序
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
 
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

//指针数组
#include<stdio.h>
int main()
{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n",arr);//地址--首元素地址 
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr);
////1.&arr-&数组名-数组名不是首元素地址，数组名表示整个数组——&数组名 取出的是整个数组的地址 
////2.sizeof(arr) -sizeof(数组名)——数组名表示整个数组 sizeof(数组名)计算的时针各数组的大小 
//	

	int a=10;
	int b=20;
	int c=30;
//	int* pa=&a; 
//	int* pb=&b; 
//	int* pc=&c;
//整型数组——存放整型
//字符数组——存放字符
//指针数组——存放指针 

	int* arr[3]={&a,&b,&c}; 
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("%d ",*(arr[i]));
	}
	return 0;
 } 
 
 //结构体
#include<stdio.h>

struct——结构体关键字， Stu--结构体标签 ，struct Stu 结构体类型 
定义一个结构体类型 
struct Stu
{
	//成员变量 
	char name[20];
	short age;
	char tele[12];
	char sex[5];
	 
	
}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量（尽量少使用全局结构体变量） 

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
int main()
{
	struct Stu s1={"张三",20,"15676897543","男"}; //创建结构体变量 s （局部的结构体变量） 
	Stu s2={"李四",21,"15906897543","男"};
	return 0;
 } 
 
 
#include<stdio.h>
struct S
{
	int a;
	char c;
	char arr[20];
	double d;	
};

struct T
{
	
	char ch[10];
	struct S s;
	char *pc;
};
int main()
{
	char arr[]="hello world\n";
	struct T t={"hehe",{100,'w',"hello world",3.14},arr};
	printf("%s\n",t.ch);
	printf("%s\n",t.s.arr);
	printf("%lf\n",t.s.d);
	printf("%s\n",t.pc);
	
	return 0;
 } 

//结构体成员的访问
//结构体传参——传的地址 
#include<stdio.h>

typedef struct Stu
{	//成员变量 
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("name:%s\n",tmp.name);
	printf("age:%d\n",tmp.age);
	printf("tele:%s\n",tmp.tele);
	printf("sex:%s\n",tmp.sex);
}

void Print2(Stu* ps)
{
	printf("name:%s\n",ps->name);
	printf("age:%d\n",ps->age);
	printf("tele:%s\n",ps->tele);
	printf("sex:%s\n",ps->sex);	
}
int main()
{
	Stu s={"李四",21,"15906897543","男"};
	//打印结构体数据 
	Print1(s);
	Print2(&s); 
	return 0;
 } 

//求1!+2!+3!+……+n! 
#include<stdio.h>
int main()
{
	int i=0;
	int sum=0;
	int n=0;
	int ret=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int j=0;
		for(j=1;j<=i;j++)
		{
			ret*=j;
		}
		sum+=ret;
	}
	printf("sum=%d\n",sum);
	return 0;
 } 
 
 //写一段代码告诉我们当前机器的字节序是什么
#include<stdio.h>

int check_sys()
{
	int a=1;
	char*p=(char*)&a;
	if(*p==1)
		return 1;
	else
		return 0;	
}
//指针类型的意义
//1.指针类型决定了指针解引用操作符能访问几个字节 
//2.指针类型决定了指针+1，-1，加的或者减的几个字节 
int main()
{//方法一： 
//	int a=1;
//	char* p=(char*)&a;
//	if(*p==1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}

//方法二（用函数实现） 
	int ret=check_sys();
	if(ret==1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
  }  

#include<stdio.h>
int main()
{
	int n=9;
	float *pFloat=(float *)&n;
	printf("n的值为:%d\n",n);
	printf("*pFloat的值为：%f\n",*pFloat);
	
	*pFloat=9.0;
	printf("n的值为:%d\n",n);
	printf("*pFloat的值为：%f\n",*pFloat);
	
	return 0;
 } 

//指针进阶
#include<stdio.h>

void test(int arr[])
{
	int sz=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",sz);
}
int main()
{
	int arr[10]={0};
	test(arr);
	return 0;
 } 
 
 //字符指针
#include<stdio.h>
#include<string.h>
int main()
{
//	char ch='w';
//	char* pc=&ch;
//
//	char arr[]="abcdef";
//	char* pc=arr;
//	printf("%s\n",arr);
//	printf("%s\n",pc);	

//	char* p="abcdef";
//	printf("%s\n",p);
	return 0;
 } 

#include<stdio.h>
int main()
{
	char arr1[]="abcdef";
	char arr2[]="abcdef";
	char* p1="abcdef";
	char* p2="abcdef";
	//if(arr1==arr2)
	if(p1==p2)
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
 } 

//指针数组——是数组，用来存放指针 
#include<stdio.h>
int main()
{
//	int arr[10]={0};//整型数组
//	char ch[5]={0};//字符数组 
//	int* parr[4];//存放整型指针的数组（指针数组）
//	char* pch[5];//存放字符指针的数组

	int a=10;
	int b=20;
	int c=30;
	int d=40;
	int* arr[4]={&a,&b,&c,&d}; 
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d ",*(arr[i]));
	}
	return 0;
 } 

#include<stdio.h>
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={2,3,4,5,6};
	int arr3[]={3,4,5,6,7};
	
	int* parr[]={arr1,arr2,arr3};
	int i=0;
	for(i=0;i<3;i++)
	{
		int j=0;
		for(j=0;j<5;j++)
		{
			printf("%d ",*(parr[i]+j));
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
//	int *p=NULL;//p是整型指针 ——存放整型的地址 
//	char *pc=NULL
//	//数组指针——存放数组的地址 
//	int arr[10]={0};
	//arr--首元素地址
	//&arr[0]——首元素地址
	//&arr——数组地址 
	
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int* p[10]=&arr; //数组的地址要存起来
//	 
//	char* arr[5];
//	char* (*pa)[5]=&arr;

	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int (*pa)[10]=&arr;
	int *p=arr;
	int i=0;
	for(i=0;i<10;i++)
	{
	//	printf("%d ",(*pa)[i]);
		printf("%d ",*(p+i));
	}
	return 0;
 } 

#include<stdio.h>
void print1(int arr[3][5],int x,int y)
{
	int i=0;
	int j=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
}

void print2(int (*p)[5],int x,int y)
{
	int i=0;
	for(i=0;i<x;i++)
	{
		int j=0;
		for(j=0;j<y;j++)
		{
			printf("%d ",*(*(p+i)+j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print1(arr,3,5);
	printf("\n");
	print2(arr,3,5);
	return 0;
 } 
 
#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	int* p=arr;
	for(i=0;i<10;i++)
	{
		printf("%d ",p[i]);	
		printf("%d ",*(p+i));
		printf("%d ",*(arr+i));
		printf("%d ",arr[i]);
	}
	return 0;
 } 

#include<stdio.h>
#include<string.h>

void test(int arr[3][5])
{		
 } 
 //行可以省略，列不可以 
void test1(int arr[][5])
{	
}
int main()
{
//	char ch='w';
//	char* p=&ch;
//	const char* p2="abcdef";
//	int* arr[10];
//	char* ch[5];
//	int arr2[5];//数组
//	int (*pa)[5]=&arr2;//取出数组的地址，pa就是一个数组指针
//	 
	int arr[3][5]={0};
	test(arr);//二维数组传参
	test1(arr); 
	return 0;
}

//二维数组传参——行可以省 
//一级指针传参 
#include<stdio.h>
void test1(int* p)
{
}

void test2(char* p)
{
}
int main()
{
	int a=10;
	int* p1=&a;
	test1(&a);
	test2(p1);
	
	char ch='w';
	char* pc=&ch;
	test2(&ch);
	test2(pc); 
	return 0;
 } 
 
//二级指针传参 
#include<stdio.h>
void test(int** ptr)
{
	printf("num=%d\n",**ptr);
 } 
int main()
{
	int n=10;
	int* p=&n;
	int **pp=&p;
	test(pp);
	test(&p);
	return 0;
}

//函数指针 ——存放函数地址的一个指针 
#include<stdio.h>
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}
int main()
{
	int a=10;
	int b=20; 
	int arr[10]={0};
	int (*p)[10]=&arr; 
//	printf("%d\n",Add(a,b));
//	//&函数名 和函数名都是函数地址 
//	printf("%p\n",&Add);
//	printf("%p\n",Add);
	
	int (*pa)(int,int)=Add;
	printf("%d\n",(*pa)(2,3));
	return 0;
}

#include<stdio.h>
void Print(char* str)
{
	printf("%s\n",str);
}
int main()
{
	void (*p)(char*)=Print;
	(*p)("hello");//调用函数 
	return 0;
}

#include<stdio.h>
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}
int main()
{
	int a=10;
	int b=20; 
	int (*pa)(int,int)=Add;
	printf("%d\n",pa(2,3));	
	printf("%d\n",Add(2,3));
//	printf("%d\n",*pa(2,3));error 必须要括起来 
	printf("%d\n",(*pa)(2,3));
	return 0;
}

#include<stdio.h>
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}

int Sub(int x,int y)
{
	int z=0;
	z=x-y;
	return z;
}

int Mul(int x,int y)
{
	int z=0;
	z=x*y;
	return z;
}

int Div(int x,int y)
{
	int z=0;
	z=x/y;
	return z;
}
int main()
{
	//指针数组
	int* arr[5];
	//需要一个数组，可以存放4个函数的地址——函数指针的数组 
	int (*pa)(int,int)=Add; //
//	int (*pa)(int,int)=Sub;
//	int (*pa)(int,int)=Mul;
//	int (*pa)(int,int)=Div;

	int (*parr[4])(int,int)={Add,Sub,Mul,Div};//函数指针的数组 
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\n",parr[i](2,3));
	}
	return 0; 
 } 
 

//函数指针数组的用途 ——计算器 
#include<stdio.h>
void menu()
{
	printf("*********************\n");
	printf("**   1.add   2.sub **\n");
	printf("**   3.mul   4.div **\n");
	printf("**      0.exit     **\n");
	printf("*********************\n");
}
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}

int Sub(int x,int y)
{
	int z=0;
	z=x-y;
	return z;
}

int Mul(int x,int y)
{
	int z=0;
	z=x*y;
	return z;
}

int Div(int x,int y)
{
	int z=0;
	z=x/y;
	return z;
}
int main()
{
	int input=0;
	int x=0;
	int y=0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				printf("请输入两个操作数：");
				scanf("%d%d",&x,&y);
				printf("%d\n",Add(x,y));
				break;
			case 2:
				printf("请输入两个操作数：");
				scanf("%d%d",&x,&y);
				printf("%d\n",Sub(x,y));
				break;
			case 3:
				printf("请输入两个操作数：");
				scanf("%d%d",&x,&y);
				printf("%d\n",Mul(x,y));
				break;
			case 4:
				printf("请输入两个操作数：");
				scanf("%d%d",&x,&y);
				printf("%d\n",Div(x,y));
				break;
			case 0:
				printf("退出\n");
				break;
			default:
				printf("选择错误\n");
				break;
			}	
	 }while(input);
	return 0;
 } 
 
#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
 } 
int main()
{
	int arr[10]={0};
	int (*p)[10]=&arr;//取出数组的地址 
	
	int (*pfArr[4])(int,int);//pfArr是一个数组，函数指针数组
	pp(*ppfArr[4])(int,int)=&pfArr;
	//ppfArr是一个数组指针。指针指向数组有4个元素 
	//指向的数组的每个数组的类型是一个函数指针 int(*)(int,int)
	
	return 0;
 } 

//回调函数——通过函数指针调用的函数 
#include<stdio.h>
void print(char *str)
{
	printf("hehe:%s",str);
}
void test(void (*p)(char*))
{
	printf("test\n");
	p("hello");
}
int main()
{
	
	test(print); 
	return 0;
 } 

#include<stdio.h>
void BubbleSort(int arr,int sz)
{
	//…… 
}

//qsort--可以排序任意类型的数据 
int main()
{
	//冒泡排序函数
	//冒泡排序函数只能排序整型数组
	int arr[]={1,3,5,7,9,2,4,6,8,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,sz); 
	return 0;
 } 

#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
 } 
int main()
{
	//指针数组
	int* arr[10];
	//数组指针
	int* (*pa)[10]=&arr; 
	//函数指针
	int (*pAdd)(int,int)=Add; //&Add也可以 
	int sum=(*pAdd)(1,2);
	printf("sum=%d\n",sum); 
	//函数指针的数组
	int(*pArr[5])(int,int);
	//指向函数指针数组的指针
	int(*(*ppArr)[5])(int,int)=&pArr; 
	return 0;
 } 

#include<stdio.h>
void BubbleSort(int arr[],int sz)
{
	int i=0;
	//趟数 
	for(i=0;i<sz-1;i++)
	{
		int j=0;
		//一趟冒泡排序 
		for(j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}

int main()
{
	//冒泡排序函数
	//冒泡排序函数只能排序整型数组
	int arr[]={1,3,5,7,9,2,4,6,8,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,sz); 
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	 } 
	return 0;
 } 

#include<stdio.h>
int main()
{
	int a=10;
//	int* pa=&a;
//	char* pc=&a;
//	char ch='w';
	void* p=&a;
	p=&ch;
	//void* 类型的指针，可以接受任意类型的指针 
	//void* 类型的指针 不能进行解引用操作 
	//void* 类型的指针 不能进行+ -整数操作 
	return 0;
}

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

//结构体
#include<stdio.h>

//声明结构体类型 
struct Stu
{
	//结构体成员变量 
	char name[20];
	char tele[12];
	char sex[10];
	int age;	
};
int main()
{
	//创建的结构体变量 
	struct Stu s1;
	struct Stu s2; 
	return 0;
 } 

#include<stdio.h>

//声明结构体类型 
//匿名结构体类型 
struct 
{
	//结构体成员变量 
	int a;
	char c;	
}sa;
int main()
{
	return 0;
 } 

//结构体的自引用 
#include<stdio.h>

//声明结构体类型 
struct Node 
{
	int data;//4
//	struct Node n;//error
	struct Node* next;	
};
int main()
{
	//创建的结构体变量 
	sizeof(struct Node);
	return 0;
 }  

#include<stdio.h>
typedef struct Node 
{
	int data;//4
	struct Node* next;	
}Node;
int main()
{
	struct Node n1;
	Node n2;
	return 0;
}

//结构体变量的定义与初始化 
#include<stdio.h>
struct S
{
	char c;
	int a;
	double d;
	char arr[20];
 };
int main()
{
	struct S s={'c',100,3.14,"hello world"};
	printf("%c %d %lf %s \n",s.c,s.a,s.d,s.arr);
	return 0;
}

//结构体内存对齐 
#include<stdio.h>
struct S1
{
	char c1;
	int a;
	char c2; 
 };
 struct S2
{
	char c1;
	char c2; 
	int a;
 };
int main()
{
	struct S1 s1={0};
	printf("%d\n",sizeof(s1));
	struct S2 s2={0};
	printf("%d\n",sizeof(s2));
	return 0;
}

#include<stdio.h>
#pragma pack(4) //设置默认对齐位为4 
struct S
{
	char c1;
	double d;
 };
#pragma pack()//取消设置的默认对齐数 
int main()
{
	struct S s;
	printf("%d\n",sizeof(s));
	return 0;
 } 

#include<stdio.h>
#include<stddef.h>
struct S
{
	char c;
	int i;
	double d;
 };
int main()
{
	printf("%d\n",offsetof(struct S,c));//计算偏移量 
	printf("%d\n",offsetof(struct S,i));
	printf("%d\n",offsetof(struct S,d));
	return 0;
 } 

//结构体传参
#include<stdio.h>
struct S
{
	int a;
	char c;
	double d;
};
//void Init(struct S tmp)
//{
//	tmp.a=100;
//	tmp.c='w';
//	tmp.d=3.14;
//}
void Init(struct S* ps)
{
	ps->a=100;
	ps->c='w';
	ps->d=3.14;
}
//传值 
Print1(struct S tmp)
{
	printf("%d %c %lf\n",tmp.a,tmp.c,tmp.d);
}
//传地址 
Print2(struct S* ps)
{
	printf("%d %c %lf\n",ps->a,ps->c,ps->d);
}
int main()
{
	struct S s={0};
//	s.a=100;
//	s.c='w';
//	s.s=3.14;
//	printf("%d\n",s.a);

	Init(&s);
	Print1(s);
	Print1(&s);
	return 0;
 } 

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

//动态内存管理
#include<stdio.h>
struct S
{
	char name[20];
	int age;
};
int main()
{
	
	struct S arr[50];
	return 0;
 } 

//动态内存开辟 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h> 
int main()
{
	//向内存申请10个整型的空间 
	int* p=(int*)malloc(10*sizeof(int));
	if(p==NULL)
	{	//打印错误原因的一个方式 
		printf("%s\n",strerror(errno));
	 } 
	else
	{
		//正常使用空间
		int i=0;
		for(i=0;i<10;i++)
		{
			*(p+i)=i;
		 } 
		for(i=0;i<10;i++)
		{
			printf("%d ",*(p+i));
		 } 
	 } 
	 //当动态申请的空间不再使用时，要释放空间 
	 //free 释放空间 
	 free(p); 
	 p=NULL;
	return 0;
 } 
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>  

int main()
{
	int* p=(int*)calloc(10,sizeof(int));
	if(p==NULL)
	{	//打印错误原因的一个方式 
		printf("%s\n",strerror(errno));
	 } 
	else
	{
		//正常使用空间
		int i=0;
		for(i=0;i<10;i++)
		{
			*(p+i)=i;
		 } 
		for(i=0;i<10;i++)
		{
			printf("%d ",*(p+i));
		 } 
	 } 
	//当动态申请的空间不再使用时，要释放空间 
	//free()释放动态开辟的空间
	free(p);
	p=NULL; 
	return 0;
}

 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>  

int main()
{
	int* p=(int*)malloc(20);
	if(p==NULL)
	{	//打印错误原因的一个方式 
		printf("%s\n",strerror(errno));
	 } 
	else
	{
		//正常使用空间
		int i=0;
		for(i=5;i<10;i++)
		{
			*(p+i)=i;
		 }  
	 } 
	 
	p=realloc(p,40); 
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d ",*(p+i));
	 } 
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
//{	//1.对NULL进行解引用操作 
//	int *p=(int*)malloc(40);
//	//万一malloc 失败了，p就被赋值为NULL 
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=i;
//	} 
//	free(p);
//	p=NULL;

 
//	//2 .对动态开辟的内存的越界访问
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
	//3.对非动态内存的释放 
	free(p);
	p=NULL;
	return 0;
}

//常见的动态内存错误 
#include<stdio.h>
#include<stdlib.h>
int main()
{
//	int* p=(int*)malloc(40);
//	if(p=NULL)
//	{
//		return 0;
//	 } 
//	 //使用realloc 
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
{	//1.对NULL指针解引用操作 
	int* p=malloc(40);
	//p进行相关判断
	*p=10;//malloc开辟空间失败——对NULL指针解引用 
	
	//2 .对动态开辟的内存的越界访问
	int *p=(int*)malloc(40); //10个int 0-9 
	if(p==NULL)
	{
		return 0;
	 } 
	int i=0;
	//越界 
	for(i=0;i<10;i++)
	{
		*(p+i)=i;
	} 
	free(p);
	p=NULL; 
	
	
	//3.对非动态内存的释放 
	int a=10;
	int* p=&a;
	*p=20; 
	//对非动态内存的释放 
	free(p);
	p=NULL;
	
	
	//4.使用free释放动态开辟内存的一部分
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
	//回收空间 
	free(p);
	p=NULL;  
	
	//5.动态内存的多次释放
	int *p=(int*)malloc(40);
	if(p=NULL)
	{
		return 0;
	 }
	 //使用
	 //释放 
	free(p);
	p=NULL;
	free(p);  
	
	
	//6.动态开辟的内存忘记释放（内存泄露） 
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

#include<stdio.h>
#include<stdlib.h> 
//struct S
//{
//	int n;
//	int arr[10];
//};
//柔性数组 ——数组大小可变 
//struct S
//{
//	int n;
//	int arr[];//未知大小 
//};
struct S
{
	int n;
	int arr[0];//未知大小 ，柔性数组
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
 
#include<stdio.h>
#include<stdlib.h>
//struct S
//{
//	int n;
//	char c;
//	inr arr[0];//柔性数组成员 
//}

struct S
{
	int n;
	char c;
	int arr[];//柔性数组成员 
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


//文件操作
#include<stdio.h>
int main()
{
	int a=10000;
	FILE* pf=fopen("test.txt","wb");
	fwrite(&a,4,1,pf);
	fclose(pf);
	pf=NULL;
	return 0;
 } 
//文件指针
#include<stdio.h>
#include<string.h>
#include<errno.h> 
int main()
{
	FILE* pf=fopen("test.txt","r");
	if(pf==NULL)
	{
		printf("%s\n",strerror(errno));
		return 0; 
	}
	fclose(pf);
	pf=NULL;
	return 0;
 } 

#include<stdio.h>
#include<string.h>
#include<errno.h> 
int main()
{
	FILE* pfwrite=fopen("test.txt","w");
	if(pfwrite==NULL)
	{
		printf("%s\n",strerror(errno));
		return 0; 
	}
	//写文件 
	fputc('b',pfwrite);
	fputc('i',pfwrite);
	fputc('t',pfwrite);
	//关闭文件 
	fclose(pfwrite);
	pfwrite=NULL;
	return 0;
 } 
 
#include<stdio.h>
#include<string.h>
#include<errno.h> 
int main()
{
	FILE* pfread=fopen("test.txt","r");
	if(pfread==NULL)
	{
		printf("%s\n",strerror(errno));
		return 0; 
	}
	//读文件 
	printf("%c",fgetc(pfread)); 
	printf("%c",fgetc(pfread));
	printf("%c",fgetc(pfread));
	//关闭文件 
	fclose(pfread);
	pfread=NULL;
	return 0;
 } 

#include<stdio.h>
int main()
{
	int ch=fgetc(stdin);
	fputc(ch,stdout);
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<errno.h> 
int main()
{
	char buf[1024]={0};
	FILE* pf=fopen("test.txt","r");
	if(pf==NULL)
	{
		printf("%s\n",strerror(errno));
		return 0; 
	}
	//读文件 
	fgets(buf,1024,pf); 
	//printf("%s",buf);
	puts(buf);
	fgets(buf,1024,pf);
	 
	//printf("%s",buf);
	puts(buf);
	//关闭文件 
	fclose(pf);
	pf=NULL;
	return 0;
 } 


#include<stdio.h>
#include<string.h>
#include<errno.h> 
int main()
{
	char buf[1024]={0};
	FILE* pf=fopen("test.txt","w");
	if(pf==NULL)
	{
		printf("%s\n",strerror(errno));
		return 0; 
	}
	//写文件 
	fputs("hello\n",pf);
	fputs("world\n",pf);
	
	//关闭文件 
	fclose(pf);
	pf=NULL;
	return 0;
 } 

#include<stdio.h>
int main()
{
	char buf[1024]={0};
	fgets(buf,1024,stdin);
	fputs(buf,stdout);
	
	gets(buf);
	puts(buf);
	return 0;
}

#include<stdio.h>
struct S
{
	int n;
	float score;
	char arr[10];
};
int main()
{
	struct S s={100,3.14f,"hello"};
	FILE* pf=fopen("test.txt","w");
	if(pf==NULL)
	{
		return 0; 
	}
	//格式化写文件  
	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
	
	//关闭文件 
	fclose(pf);
	pf=NULL;
	return 0;
}

#include<stdio.h>
struct S
{
	int n;
	float score;
	char arr[10];
};
int main()
{
	struct S s={0};
	FILE* pf=fopen("test.txt","r");
	if(pf==NULL)
	{
		return 0; 
	}
	//格式化输入数据  
	fscanf(pf,"%d %f %s",&(s.n),&(s.score),s.arr);
	printf(pf,"%d %f %s",s.n,s.score,s.arr);
	//关闭文件 
	fclose(pf);
	pf=NULL;
	return 0;
}

#include<stdio.h>
struct S
{
	int n;
	float score;
	char arr[10];
};
int main()
{
	struct S s={0};
	//格式化输入数据  
	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),s.arr);
	fprintf(stdout,"%d %.2f %s",s.n,s.score,s.arr);
	return 0;
}

#include<stdio.h>
struct S
{
	char name[20];
	int age;
	double score;
};
int main()
{
	struct S s={"张三",20,55.6};
	FILE* pf=fopen("test.txt","wb");
	if(pf==NULL)
	{
		return 0; 
	}
	//格式化写文件  
	fwrite(&s,sizeof(struct S),1,pf);
	
	//关闭文件 
	fclose(pf);
	pf=NULL;
	return 0;
}

#include<stdio.h>
struct S
{
	char name[20];
	int age;
	double score;
};
int main()
{
	struct S tmp={0};
	FILE* pf=fopen("test.txt","rb");
	if(pf==NULL)
	{
		return 0; 
	}
 
	fread(&tmp,sizeof(struct S),1,pf);
	printf("%s %d %lf\n",tmp.name,tmp.age,tmp.score);
	
	//关闭文件 
	fclose(pf);
	pf=NULL;
	return 0;
}
 
#include<stdio.h>
int main()
{
	FILE* pf=fopen("test.txt","r");
	if(pf==NULL)
	{
		return 0; 
	}
 	int ch=fgetc(pf);
 	printf("%d\n",ch);//-1
	
	fclose(pf);
	pf=NULL;
	return 0;
 } 
 
#include<stdio.h>
int main()
{
	FILE* pf=fopen("test.txt","r");
	if(pf==NULL)
	{
		perror("open file test2.txt");
		return 0; 
	}
 	int ch=0;
 	while((ch=fgetc(pf))!=EOF)
 	{
 		putchar(ch);
	 }
	if(ferror(pf))
	{
		printf("error\n");
	}
	else if(feof(pf))//feof 文件结束判定 
	{
		printf("end of file\n");
	}
	fclose(pf);
	pf=NULL;
	return 0;
 } 
*/

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
