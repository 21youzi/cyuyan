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
 */
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
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
