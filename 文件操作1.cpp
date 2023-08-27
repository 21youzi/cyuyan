/*
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
*/
#include<stdio.h>
int main()
{
	int ch=fgetc(stdin);
	fputc(ch,stdout);
	return 0;
}


