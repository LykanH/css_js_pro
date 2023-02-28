#include<stdio.h>
#include<string.h>
#define N 5
	typedef struct{  //声明联系人结构体。
		char name[10];
		char tel[15];
	}Contact;
	int find(Contact a[],int n,char *name){ //定义查找函数.
		int i;
		for(i = 0;i < n; i++)
			if(0==strcmp(name,a[i].name))//利用strcmp比较名字是否相同。
			return i;	
		return -1;
		}	 
int main(){	
	Contact a[N] = {{"张一"，"13567834567"},{"张二"，"13567890342"},
					{"张三"，"13567890342"},{"张四"，"13567890342"},
					{"张五"，"13567890342"}};//定义并初始化结构体数组。
	char name[10];
	int i;
	printf("输入要查找的姓名：");
	gets(name);
	i =find(a,N,name);
	if(i!=-1){
		printf("姓名：\t电话：\t");
		printf("%s\t%s\n",a[i],a[i].tel);
	}
	else
		printf("查找不到该联系人。");
	return 0;
	}
