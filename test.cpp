/*#include<stdio.h>
#include<string.h>
int main(){
	
��ӡ�����е�Ԫ�� 
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	while(i<10)
	{
		printf("%d",arr[i]);
		i++;
	} 
	
	
	//������λ���� 
	int a=1;
	int b=a<<2;
	printf("%d\n",b);
	
	//����� 
	int a=3;
	int b=5;
	int c=a&b;
	printf("%d",c);
	 
	int a=10;
	printf("%d\n",a);
	printf("%d\n",!a);
	
	int a=10;
	int arr[10]={0};//10������Ԫ�ص����� 
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(arr));
	
	//���������Ԫ�ظ���
	//����=�����ܴ�С/ÿ��Ԫ�صĴ�С
	int arr[10]={0};
	int sz=0;
	printf("%d\n",sizeof(arr));
	sz=sizeof(arr)/sizeof(arr[0]);
	printf("sz=%d\n",sz);
	
//���������ֵ 
	int num1=10;
	int num2=20;
	if(num1>num2)
		printf("�ϴ�ֵ�ǣ�%d\n",num1);
	else
		printf("�ϴ�ֵ�ǣ�%d\n",num2);
	
//�ú���ʵ�������ֵ
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
	printf("%d\n",sizeof(arr)/sizeof(arr[0]));//�����Ԫ�ظ��� 
	
	return 0;
}

#include<stdio.h>
int main()
{
	int a=0;
	int b=~a;//��λȡ�� 
	printf("%d\n",b);	
	
	return 0;
 } 

#include<stdio.h>
int main()
{
	int a=10;
	int b=a++;//����++����ʹ�ã���++ 
	printf("a=%d b=%d\n",a,b);//a=11,b=10 
	return 0;
	
 } 
 
 
 //ǿ������ת�� 
#include<stdio.h>
int main()
{
	int a=(int)3.14;
	printf("%d",a);
	return 0;
}

//��Ŀ 
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
	//register int a=10;//�����a����ɼĴ������� ��ȡ���ڱ�����
	int a=10;
	a=-2;
	printf("%d\n",a); 
	return 0;

}

//ָ�� 

//	int a=10;
//	int* p=&a;//p��һ������--ָ����� 
//	*p=20;//* �����ò����������ӷ��ʲ������� 
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

//�ṹ�塢�����Լ����������һ������ 
#include<stdio.h>

struct Book
{
	char name[20];//c���Գ������
	short price;//�۸�  
	
 };//ע�⡰����һ����Ҫ���� 
int main()
{

	//���ýṹ�����ʹ���һ�������͵Ľṹ����� 
//	struct Book b1={"c���Գ������",55};
//	printf("������%s\n",b1.name);
//	printf("�۸�%dԪ\n",b1.price); 
//	b1.price=15;
//	printf("�޸ĺ�ļ۸�%d\n",b1.price);
	struct Book b1={"c���Գ������",55}; 
	struct Book* pd=&b1;
//	printf("%s\n",(*pd).name);
//	printf("%d\n",(*pd).price);

	// . �ṹ�����.��Ա
	//-> �ṹ�����->��Ա 
	printf("%s\n",pd->name);
	printf("%d\n",pd->price);
	return 0;
} 
//switch���
#include<stdio.h>
int main()
{
	int day=0;
	scanf("%d",&day);
	switch(day)         //switch ���ͱ��ʽ 
	{
		case 1:             //case ���ͳ������ʽ 
			printf("����һ\n");
			break; 
		case 2:
			printf("���ڶ�\n");
			break;
		case 3:
			printf("������\n");
			break;
		case 4:
			printf("������\n");
			break;
		case 5:
			printf("������\n");
			break;
		case 6:
			printf("������\n");
			break;
		case 7:
			printf("������\n");
			break;
	}
	return 0;
 } 

#include<stdio.h>
int main()
{
	int day=0;
	scanf("%d",&day);
	switch(day)         //switch ���ͱ��ʽ 
	{
		case 1:             //case ���ͳ������ʽ  
		case 2:
		case 3:
		case 4:
		case 5:
			printf("������");
			break; 
		case 6:
		case 7:
			printf("��Ϣ��\n");
			break;
		default:     //��������������㣬����Ƿ�״�� 
		printf("�������\n"); 
	}
	return 0;
 } 
 
 #include<stdio.h>
 int main()
 {
 	int ch=0;
	while((ch=getchar())!=EOF) //EOF -end of file �ļ�������־ 
	{
		putchar(ch);
	}
//	int ch=getchar(); //getchar()���ܼ��������һ���ַ� ����ch���� 
// 	putchar(ch);//�������Ļ ��ͬprintf 
 	return 0;
  } 


#include<stdio.h>
int main()
{
	int ret=0;
	char passward[20]={0};
	printf("���������룺>");
	scanf("%s",passward);
	//��������ʣ��һ��'\n'
	//��ȡ��һ��'\n'
	getchar(); 
	printf("��ȷ�ϣ�Y/N��");
	ret=getchar();
	if(ret=='Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("����ȷ��\n");
	return 0;
 } 


//#include<stdio.h>
//int main()
//{
//	int ch=0;
//	while((ch=getchar())!=EOF)
//	{
//		if(ch<'0' ||ch>'9')//ֻ��������� 
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i=0;//��ʼ�� 
//	//�жϡ����� 
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
//	for(i=0,k=0;k=0;i++,k++) //ѭ������k=0����ֵ��,Ϊ�٣�ѭ��0�� 
//		k++;
//	return 0;
//}
//do whileѭ��������ִ��һ��
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
//1.����n�Ľ׳�
//#include<stdio.h>
//int main()
//{	
//	int i=0;
//	int s=1;//�����ʼ��Ϊ0�Ļ�������nΪ��ֵ�������Ϊ0 
//	int n=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		s*=i;
//		
//	}
//	printf("n�Ľ׳�Ϊ%d",s);
//	return 0;
// } 
//2. ����1��+2��+����+10����ֵ
#include<stdio.h>
int main()
{	
	int i=0;
	int s=1;//�����ʼ��Ϊ0�Ļ�������nΪ��ֵ�������Ϊ0 
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
	//дһ�����룬��arr���飨����ģ����ҵ�7
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz;i++)
	{
		if(k==arr[i])
		{
			printf("�ҵ��ˣ��±��ǣ�%d",i);
			break;
		}
	 } 
	if(i==sz)
		printf("�Ҳ���"); 
	return 0;
}

//3.���ַ����ң��۰���ң� 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ���
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
		printf("�ҵ���,�±���%d\n",mid);
		break;
	}
	}
	if(left>right)
		printf("�Ҳ���\n");
	return 0;
 } 

//4.��д���룬��ʾ����ַ��������ƶ������м��� 
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h> 
int main()
{
	char arr1[]="welcome to bit!!!!!!";
	char arr2[]="####################";
	int left=0;
//	int right=size(arr1)/sizeof(arr1[0])-2;//��Ϊĩβ�ǡ�\0��������-1-1=-2 
	int right=strlen(arr1)-1;
	
	while(left<=right)
	{
	
	arr2[left]=arr1[left];
	arr2[right]=arr1[right]; 
	printf("%s\n",arr2);
	//��Ϣ1��
	Sleep(1000);
	system("cls");//ִ��ϵͳ�����һ������ 
	left++;
	right--;
	}
	printf("%s\n",arr2);
	return 0;
 } 
//5.��д����ʵ�֣�ģ���û���½����������ֻ�ܵ�¼���� 
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char password[20]={0};
	for(i=0;i<3;i++)
	{
		printf("����������:>");
		scanf("%s",password);
		if(strcmp(password,"123456")==0)//����ֱ�ӱȽ������ַ����Ƿ���ȣ�Ӧʹ�ÿ⺯��-strcmp 
		{
			printf("��¼�ɹ�\n");
			break;
		 } 
		 else
		 {
		 	printf("�������\n");
		 }
		
	 } 
	 if(i==3)
	 	printf("��������������˳�����\n");
	return 0;
}


//�Ӵ�С���
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

//��ӡ3�ı���
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

//�������������������������Լ��
#include<stdio.h> 
int main()
{
	int m=24;
	int n=18;
	int r=0;
	scanf("%d%d",&m,&n);
	while(m%n)//շת����� 
	{
		r=m%n;
		m=n;
		n=r;
	}
	printf("%d\n",n);
	return 0;
}

//��ӡ1000��2000֮�������
#include<stdio.h>
int main()
{
	int year=0;
	int count=0;
	for(year=1000;year<=2000;year++)
	{
		//�ж�year�Ƿ�Ϊ����
		//1.�ܱ�4�������Ҳ��ܱ�100���� 
		//2.�ܱ�400������������
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

//��ӡ������100��200֮������� 
#include<stdio.h>
int main()
{
	int i=0;
	int count=0;
	for(i=100;i<=200;i++)
	{
		//�ж�num�Ƿ�Ϊ���� 
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

//��д������һ��1��100�����������г����˶��ٸ�9 
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

//������� 1/1-1/2+1/3����-1/100 
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
 
//��10�����е����ֵ
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

//����Ļ�����9*9�Ŀھ���
#include<stdio.h>
int main()
{
	int i=0;
	for(i=1;i<=9;i++)
	{
		//��ӡһ��
		int j=1;
		for(j=1;j<=i;j++)
		{
			printf(" %d*%d=%-2d",i,j,i*j);
		 } 
		 printf("\n");
	}
	return 0;
 } 

//��������Ϸ 
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
	
	//1.���������
	int ret=0;
	int guess=0;
	//��ʱ����������������������ʼ��
	//time_t time(time_t *time)
	ret=rand()%100+1;//����1-100֮�������� 
//	printf("%d\n",ret);//������ɵĴ𰸣������
	//2.������ 
	while(1)
	{
		printf("������֣�\n");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("�´���\n"); 
		 } 
		 else if(guess<ret)
		 {
		 	printf("��С��\n");
		 }
		 else
		 {
		 	printf("��ϲ�㣬�¶��ˣ�\n");
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
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		 } 
	 }while(input);
	return 0;
 } 


//goto ��䣬������ʹ��goto��� 
//һ���ػ����� 
#include<stdio.h>
#include<windows.h>
int main()
{
	char input[10]={0};
	system("shutdown -s -t 60");
	again:
	printf("��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ���\n �����룺");
	scanf("%s",input);
	if(0==strcmp(input,"������"))
	{
		system("shutdown -a"); 
	 } 
	 else
	 {
	 	goto again;
	 }
	return 0;
 } 

//strlen���� 
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="hello";
	char arr2[]="######";
	strcpy(arr2,arr1);//��arr1������arr2 
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

//���������е����ֵ
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
 
 //������������ֵ
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

//��100-200֮�������
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
 
//дһ�������ж��Ƿ�Ϊ����
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
 
//�ú���ʵ�ֶ��ֲ��� 
#include<stdio.h>

int binarry_search(int arr[],int k,int sz)
{
	//�㷨ʵ��
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
		printf("�Ҳ���ָ��������\n");
	 } 
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
	}
	return 0;
}

//дһ��������ÿ����һ�Σ�num+1
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
 
//������Ƕ�׵�Ӷ
#include<stdio.h>
#include<string.h> 
int main()
{
//	int len=0;
//	//��1�� 
//	len=strlen("abc");
//	printf("%d\n",len);
//	//��2�� 
//	printf("%d\n",strlen("abc"));
	printf("%d",printf("%d",printf("%d",43)));
	return 0;
 } 
 
 //��������
 #include<stdio.h>
 //��������  һ�����ͷ�ļ�������������ʹ�� 
int add(int a,int b);//�������� 

int main()
 {
 	int a=10;
	int b=20;
	int sum=0;
	sum=add(a,b);
	printf("sum=%d\n",sum);
 	return 0;
  } 
  //���� 
int add(int a,int b)
{
 	int sum;
 	sum=a+b;
 	return sum;
 }

 //�ݹ�
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

//������ʱ���������ַ�������
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
	int len=my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ���׵�ַ 
	printf("len=%d\n",len);
	return 0;
 } 

//n�Ľ׳� 
#include<stdio.h>
int facl(int n)
{
	int i=0;
	int ret =1;
	for(i=1;i<=n;i++)//ѭ����ʽ 
	{
		ret*=i;
	}
	return ret;
}
int fac2(int n)
{
	if(n<=1)    //�ݹ鷽�� 
		return 1;
	else
		return n*fac2(n-1);
 } 
int main()
{
	int n=0;
	int ret=0; 
	scanf("%d",&n);
	facl(n);//ѭ���ķ�ʽ 
	ret=facl(n);
	printf("%d\n",ret);
	return 0; 
}
 
//쳲��������У�1 1 2 3 5 8 13 21 34 55 
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
	//TDD-������������
	ret =Fib(n);
	printf("ret=%d\n",ret);
	return 0;
 } 

#include<stdio.h>
int main()
{
	
	return 0;
 } 

//��������
#include<stdio.h>
#include<string.h>
int main()
{
	//int arr[10]={1,2,3};//����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0 
	//char arr2[5];
	char arr4[]={"abcdef"};
	printf("%d\n",sizeof(arr4));//sizeof ����arr4��ռ�ռ�Ĵ�С 
	printf("%d\n",strlen(arr4));//strlen ���ַ����ĳ��ȣ�'\0'֮ǰ���ַ����� 
	return 0;
 } 
//1��strlen ��sizeof û��ʲô����
//2��strlen�����ַ������ȵġ���ֻ������ַ����󳤶ȡ����⺯��-ʹ�õ�����ͷ�ļ�
//3��sizeof ������������飬���͵Ĵ�С����λ���ֽ�- - ������ 

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
 
//һά�������ڴ��еĴ洢
//�������ڴ������������ڵ� 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("&arr[%d]=%p\n",i,&arr[i]);//������ÿ��Ԫ�صĵ�ַ 
	}
	return 0;
 } 
 
 //һά�������ڴ��еĴ洢
//�������ڴ������������ڵ� 
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("&arr[%d]=%p\n",i,&arr[i]);//������ÿ��Ԫ�صĵ�ַ 
	}
	return 0;
 } 

//��ά�������ڴ��еĴ洢,ͨ���±���� 
//��ά������п���ʡ�ԣ��о��Բ���ʡ�� 
#include<stdio.h>
int main()
{
	int arr[3][4]={{1,2,3},{4,5}};//3��4��,��һ�� 1 2 3���ڶ��� 4 5 
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

 //��ά�������ڴ��еĴ洢
#include<stdio.h>
int main()
{
	int arr[3][4]={{1,2,3},{4,5}};//3��4��,��һ�� 1 2 3���ڶ��� 4 5 
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

//ð������ 
#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	//ȷ��ð�����������
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		//ÿһ��ð������
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
	//��arr���������ų�����
	bubble_sort(arr,sz);//ð������
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
 
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

//ָ������
#include<stdio.h>
int main()
{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n",arr);//��ַ--��Ԫ�ص�ַ 
//	printf("%p\n",&arr[0]);
//	printf("%p\n",&arr);
////1.&arr-&������-������������Ԫ�ص�ַ����������ʾ�������顪��&������ ȡ��������������ĵ�ַ 
////2.sizeof(arr) -sizeof(������)������������ʾ�������� sizeof(������)�����ʱ�������Ĵ�С 
//	

	int a=10;
	int b=20;
	int c=30;
//	int* pa=&a; 
//	int* pb=&b; 
//	int* pc=&c;
//�������顪���������
//�ַ����顪������ַ�
//ָ�����顪�����ָ�� 

	int* arr[3]={&a,&b,&c}; 
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("%d ",*(arr[i]));
	}
	return 0;
 } 
 
 //�ṹ��
#include<stdio.h>

struct�����ṹ��ؼ��֣� Stu--�ṹ���ǩ ��struct Stu �ṹ������ 
����һ���ṹ������ 
struct Stu
{
	//��Ա���� 
	char name[20];
	short age;
	char tele[12];
	char sex[5];
	 
	
}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�������������ʹ��ȫ�ֽṹ������� 

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
int main()
{
	struct Stu s1={"����",20,"15676897543","��"}; //�����ṹ����� s ���ֲ��Ľṹ������� 
	Stu s2={"����",21,"15906897543","��"};
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

//�ṹ���Ա�ķ���
//�ṹ�崫�Ρ������ĵ�ַ 
#include<stdio.h>

typedef struct Stu
{	//��Ա���� 
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
	Stu s={"����",21,"15906897543","��"};
	//��ӡ�ṹ������ 
	Print1(s);
	Print2(&s); 
	return 0;
 } 

//��1!+2!+3!+����+n! 
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
 
 //дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
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
//ָ�����͵�����
//1.ָ�����;�����ָ������ò������ܷ��ʼ����ֽ� 
//2.ָ�����;�����ָ��+1��-1���ӵĻ��߼��ļ����ֽ� 
int main()
{//����һ�� 
//	int a=1;
//	char* p=(char*)&a;
//	if(*p==1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}

//���������ú���ʵ�֣� 
	int ret=check_sys();
	if(ret==1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
  }  

#include<stdio.h>
int main()
{
	int n=9;
	float *pFloat=(float *)&n;
	printf("n��ֵΪ:%d\n",n);
	printf("*pFloat��ֵΪ��%f\n",*pFloat);
	
	*pFloat=9.0;
	printf("n��ֵΪ:%d\n",n);
	printf("*pFloat��ֵΪ��%f\n",*pFloat);
	
	return 0;
 } 

//ָ�����
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
 
 //�ַ�ָ��
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

//ָ�����顪�������飬�������ָ�� 
#include<stdio.h>
int main()
{
//	int arr[10]={0};//��������
//	char ch[5]={0};//�ַ����� 
//	int* parr[4];//�������ָ������飨ָ�����飩
//	char* pch[5];//����ַ�ָ�������

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
//	int *p=NULL;//p������ָ�� ����������͵ĵ�ַ 
//	char *pc=NULL
//	//����ָ�롪���������ĵ�ַ 
//	int arr[10]={0};
	//arr--��Ԫ�ص�ַ
	//&arr[0]������Ԫ�ص�ַ
	//&arr���������ַ 
	
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int* p[10]=&arr; //����ĵ�ַҪ������
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
 //�п���ʡ�ԣ��в����� 
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
//	int arr2[5];//����
//	int (*pa)[5]=&arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
//	 
	int arr[3][5]={0};
	test(arr);//��ά���鴫��
	test1(arr); 
	return 0;
}

//��ά���鴫�Ρ����п���ʡ 
//һ��ָ�봫�� 
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
 
//����ָ�봫�� 
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

//����ָ�� ������ź�����ַ��һ��ָ�� 
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
//	//&������ �ͺ��������Ǻ�����ַ 
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
	(*p)("hello");//���ú��� 
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
//	printf("%d\n",*pa(2,3));error ����Ҫ������ 
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
	//ָ������
	int* arr[5];
	//��Ҫһ�����飬���Դ��4�������ĵ�ַ��������ָ������� 
	int (*pa)(int,int)=Add; //
//	int (*pa)(int,int)=Sub;
//	int (*pa)(int,int)=Mul;
//	int (*pa)(int,int)=Div;

	int (*parr[4])(int,int)={Add,Sub,Mul,Div};//����ָ������� 
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\n",parr[i](2,3));
	}
	return 0; 
 } 
 

//����ָ���������; ���������� 
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
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				printf("������������������");
				scanf("%d%d",&x,&y);
				printf("%d\n",Add(x,y));
				break;
			case 2:
				printf("������������������");
				scanf("%d%d",&x,&y);
				printf("%d\n",Sub(x,y));
				break;
			case 3:
				printf("������������������");
				scanf("%d%d",&x,&y);
				printf("%d\n",Mul(x,y));
				break;
			case 4:
				printf("������������������");
				scanf("%d%d",&x,&y);
				printf("%d\n",Div(x,y));
				break;
			case 0:
				printf("�˳�\n");
				break;
			default:
				printf("ѡ�����\n");
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
	int (*p)[10]=&arr;//ȡ������ĵ�ַ 
	
	int (*pfArr[4])(int,int);//pfArr��һ�����飬����ָ������
	pp(*ppfArr[4])(int,int)=&pfArr;
	//ppfArr��һ������ָ�롣ָ��ָ��������4��Ԫ�� 
	//ָ��������ÿ�������������һ������ָ�� int(*)(int,int)
	
	return 0;
 } 

//�ص���������ͨ������ָ����õĺ��� 
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
	//���� 
}

//qsort--���������������͵����� 
int main()
{
	//ð��������
	//ð��������ֻ��������������
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
	//ָ������
	int* arr[10];
	//����ָ��
	int* (*pa)[10]=&arr; 
	//����ָ��
	int (*pAdd)(int,int)=Add; //&AddҲ���� 
	int sum=(*pAdd)(1,2);
	printf("sum=%d\n",sum); 
	//����ָ�������
	int(*pArr[5])(int,int);
	//ָ����ָ�������ָ��
	int(*(*ppArr)[5])(int,int)=&pArr; 
	return 0;
 } 

#include<stdio.h>
void BubbleSort(int arr[],int sz)
{
	int i=0;
	//���� 
	for(i=0;i<sz-1;i++)
	{
		int j=0;
		//һ��ð������ 
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
	//ð��������
	//ð��������ֻ��������������
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
	//void* ���͵�ָ�룬���Խ����������͵�ָ�� 
	//void* ���͵�ָ�� ���ܽ��н����ò��� 
	//void* ���͵�ָ�� ���ܽ���+ -�������� 
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
	//1.��str�ַ�����׷��һ��str1�ַ��� 
	//strncat(str1,str2);error 
	strncat(str1,str2,6);
	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ��� 
	//strstr���������ַ��� 
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

//���Ͼ��󡪡������� ���ϵ����ǵ����� 
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
	//�Ҳ���	
return 0;
}
int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int k=7;
	int x=3;
	int y=3;
	
	//�����Ͳ��� 
	int ret=FindNum(arr,k,&x,&y);
	if(ret==1)
	{
		printf("�ҵ���\n");
		printf("�±���:%d %d",x,y);
	}
	else
	{
		printf("�Ҳ���\n");
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
	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0' 
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

//strcat ���� ��һ���ַ���׷�ӵ�ǰһ���ַ����ĺ��� 
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
	int ret=strcmp(p1,p2);//str1>str2 ����1����ȷ���0��<����-1 
	printf("%d\n",ret);//���Ϊ-1 
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<assert.h>
my_strcmp(const char* str1,const char* str2)
{
	assert(str1&&str2);
	//�Ƚ�
	while(*str1==*str2)
	{
		if(*str1=='\0')
		{
			return 0;//��� 
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
	int ret=my_strcmp(p1,p2);//str1>str2 ����1����ȷ���0��<����-1 
	printf("%d\n",ret);
	return 0;
 } 

//strncpy ���������Ƶ�copy 
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

//strstr�����������ַ��� 
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
			return cur;//�ҵ��Ӵ�	
		}
		cur++;
	}
	return NULL;//�Ҳ����Ӵ� 
 } 
int main()
{
	char* p1="abcdef";
	char* p2="def";
	char* ret=my_strstr(p1,p2);
	if(ret==NULL)
	{
		printf("�Ӵ�������\n");
	}
	else
	{
		printf("%s\n",ret);	
	}
	return 0;
}

//strtok���� 
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

//strerror�������ش����� ��Ӧ�Ĵ�����Ϣ 
#include<stdio.h>
#include<errno.h> 
#include<string.h>
int main()
{
	//0 ����no error
	//1����Operation not permitted 
	//2����No such file or directory
	//errrno ��һ��ȫ�ֵĴ�����ı���
	//��c���Կ⺯����ִ�й����У��������󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno�� 
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
	struct s arr3[]={{"����",20},{"����",30 }};
	struct s arr4={0};
	//strcpy(arr2,arr1);
	//memcpy(arr2,arr1,sizeof(arr1));
	my_memcpy(arr3,arr4,sizeof(arr3));
	return 0;
}

//memcpy ֻҪ���� ���ص����ڴ濽�� 
//memmovve �����ص��ڴ�Ŀ��� 
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
	//arr1�е����ֿ�����arr2�� 
	my_memcpy(arr2,arr1,sizeof(arr1));
	return 0;
}

//�ṹ��
#include<stdio.h>

//�����ṹ������ 
struct Stu
{
	//�ṹ���Ա���� 
	char name[20];
	char tele[12];
	char sex[10];
	int age;	
};
int main()
{
	//�����Ľṹ����� 
	struct Stu s1;
	struct Stu s2; 
	return 0;
 } 

#include<stdio.h>

//�����ṹ������ 
//�����ṹ������ 
struct 
{
	//�ṹ���Ա���� 
	int a;
	char c;	
}sa;
int main()
{
	return 0;
 } 

//�ṹ��������� 
#include<stdio.h>

//�����ṹ������ 
struct Node 
{
	int data;//4
//	struct Node n;//error
	struct Node* next;	
};
int main()
{
	//�����Ľṹ����� 
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

//�ṹ������Ķ������ʼ�� 
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

//�ṹ���ڴ���� 
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
#pragma pack(4) //����Ĭ�϶���λΪ4 
struct S
{
	char c1;
	double d;
 };
#pragma pack()//ȡ�����õ�Ĭ�϶����� 
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
	printf("%d\n",offsetof(struct S,c));//����ƫ���� 
	printf("%d\n",offsetof(struct S,i));
	printf("%d\n",offsetof(struct S,d));
	return 0;
 } 

//�ṹ�崫��
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
//��ֵ 
Print1(struct S tmp)
{
	printf("%d %c %lf\n",tmp.a,tmp.c,tmp.d);
}
//����ַ 
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

//λ�Ρ���������λ (���ɿ�ƽ̨)
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
	printf("%d\n",sizeof(s));//8���ֽ� 
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
	printf("%d\n",sizeof(s));//8���ֽ� 
	return 0;
 } 

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

//��̬�ڴ����
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

//��̬�ڴ濪�� 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h> 
int main()
{
	//���ڴ�����10�����͵Ŀռ� 
	int* p=(int*)malloc(10*sizeof(int));
	if(p==NULL)
	{	//��ӡ����ԭ���һ����ʽ 
		printf("%s\n",strerror(errno));
	 } 
	else
	{
		//����ʹ�ÿռ�
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
	 //����̬����Ŀռ䲻��ʹ��ʱ��Ҫ�ͷſռ� 
	 //free �ͷſռ� 
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
	{	//��ӡ����ԭ���һ����ʽ 
		printf("%s\n",strerror(errno));
	 } 
	else
	{
		//����ʹ�ÿռ�
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
	//����̬����Ŀռ䲻��ʹ��ʱ��Ҫ�ͷſռ� 
	//free()�ͷŶ�̬���ٵĿռ�
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
	{	//��ӡ����ԭ���һ����ʽ 
		printf("%s\n",strerror(errno));
	 } 
	else
	{
		//����ʹ�ÿռ�
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
//{	//1.��NULL���н����ò��� 
//	int *p=(int*)malloc(40);
//	//��һmalloc ʧ���ˣ�p�ͱ���ֵΪNULL 
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		*(p+i)=i;
//	} 
//	free(p);
//	p=NULL;

 
//	//2 .�Զ�̬���ٵ��ڴ��Խ�����
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
	//3.�ԷǶ�̬�ڴ���ͷ� 
	free(p);
	p=NULL;
	return 0;
}

//�����Ķ�̬�ڴ���� 
#include<stdio.h>
#include<stdlib.h>
int main()
{
//	int* p=(int*)malloc(40);
//	if(p=NULL)
//	{
//		return 0;
//	 } 
//	 //ʹ��realloc 
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
{	//1.��NULLָ������ò��� 
	int* p=malloc(40);
	//p��������ж�
	*p=10;//malloc���ٿռ�ʧ�ܡ�����NULLָ������� 
	
	//2 .�Զ�̬���ٵ��ڴ��Խ�����
	int *p=(int*)malloc(40); //10��int 0-9 
	if(p==NULL)
	{
		return 0;
	 } 
	int i=0;
	//Խ�� 
	for(i=0;i<10;i++)
	{
		*(p+i)=i;
	} 
	free(p);
	p=NULL; 
	
	
	//3.�ԷǶ�̬�ڴ���ͷ� 
	int a=10;
	int* p=&a;
	*p=20; 
	//�ԷǶ�̬�ڴ���ͷ� 
	free(p);
	p=NULL;
	
	
	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
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
	//���տռ� 
	free(p);
	p=NULL;  
	
	//5.��̬�ڴ�Ķ���ͷ�
	int *p=(int*)malloc(40);
	if(p=NULL)
	{
		return 0;
	 }
	 //ʹ��
	 //�ͷ� 
	free(p);
	p=NULL;
	free(p);  
	
	
	//6.��̬���ٵ��ڴ������ͷţ��ڴ�й¶�� 
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
//�������� ���������С�ɱ� 
//struct S
//{
//	int n;
//	int arr[];//δ֪��С 
//};
struct S
{
	int n;
	int arr[0];//δ֪��С ����������
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
//	inr arr[0];//���������Ա 
//}

struct S
{
	int n;
	char c;
	int arr[];//���������Ա 
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


//�ļ�����
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
//�ļ�ָ��
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
	//д�ļ� 
	fputc('b',pfwrite);
	fputc('i',pfwrite);
	fputc('t',pfwrite);
	//�ر��ļ� 
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
	//���ļ� 
	printf("%c",fgetc(pfread)); 
	printf("%c",fgetc(pfread));
	printf("%c",fgetc(pfread));
	//�ر��ļ� 
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
	//���ļ� 
	fgets(buf,1024,pf); 
	//printf("%s",buf);
	puts(buf);
	fgets(buf,1024,pf);
	 
	//printf("%s",buf);
	puts(buf);
	//�ر��ļ� 
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
	//д�ļ� 
	fputs("hello\n",pf);
	fputs("world\n",pf);
	
	//�ر��ļ� 
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
	//��ʽ��д�ļ�  
	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
	
	//�ر��ļ� 
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
	//��ʽ����������  
	fscanf(pf,"%d %f %s",&(s.n),&(s.score),s.arr);
	printf(pf,"%d %f %s",s.n,s.score,s.arr);
	//�ر��ļ� 
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
	//��ʽ����������  
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
	struct S s={"����",20,55.6};
	FILE* pf=fopen("test.txt","wb");
	if(pf==NULL)
	{
		return 0; 
	}
	//��ʽ��д�ļ�  
	fwrite(&s,sizeof(struct S),1,pf);
	
	//�ر��ļ� 
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
	
	//�ر��ļ� 
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
	else if(feof(pf))//feof �ļ������ж� 
	{
		printf("end of file\n");
	}
	fclose(pf);
	pf=NULL;
	return 0;
 } 
*/

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
