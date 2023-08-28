/* 
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
 */
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
 
 
