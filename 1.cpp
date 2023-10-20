/* 
//前n项求和 
#include<stdio.h>
int main()
{
	int n;
	int i;
	double sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("f(%d)=%.2f\n",n,sum);
	return 0;
 } 
 

//计算1-1/2+1/3+……+1/n
#include<stdio.h>
int main()
{
	int n;
	int i;
	double sum=0;
	int sign=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=sign*1.0/i;
		sign=-sign;
	}
	printf("f(%d)=%.2f\n",n,sum);
	return 0;
 } 
 
 //分解整数 
#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	do
	{
		int d=x%10;
		printf("%d",d);
		if(x>=10)
		{
			printf(" ");
		}
		x/=10;
	}while(x>0);
	printf("\n");
	return 0;
 } 

//求最大公约数 
#include<stdio.h>
int main()
{
	int a,b,i;
	int min;
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		min=a;
	}
	else
	{
		min=b;
	}
	int ret=0;
	for(i=1;i<=min;i++)
	{
		if(a%i==0)
		{
			if(b%i==0)
			{
				ret=i;
			}
		}
	}
	printf("%d和%d的最大公约数是%d.\n",a,b,ret);
	return 0;
 } 
*/
//水仙花数
#include "stdio.h"
main()
{
int i,j,k,n;
printf("水仙花数是:");
for(n=100;n<1000;n++)
 {
	i=n/100;/*分解出百位*/
	j=n/10%10;/*分解出十位*/
	k=n%10;/*分解出个位*/
	if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
	printf("%-5d",n);
	}
}
 
 
 
 
 
 
 

