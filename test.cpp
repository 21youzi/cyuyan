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
 */
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
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
