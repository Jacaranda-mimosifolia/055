#include<stdio.h>

int main()
{
//定义数组 
	static int numble[100];   // 数字 
	static int character[100];   // 字母 
	static int other[100];   // 符号 


//用户输入元素，并分类 
	int n1=0,n2=0,n3=0;  // 定义数组长度 
	printf("请输入一串字符:");
	for(;;)
	{
		char n=0;
		n=getchar();  // 用getchar逐个获取字符 
		if(n=='\n')
		{
			break;
		}
		else if(48<=n && n<=57)  // numble[] 
		{
			numble[n1]=n;
			n1++;
		}
		else if((65<=n && n<=90)||(97<=n && n<=122))  //character[]
		{
			character[n2]=n;
			n2++;
		}
		else if((48>n)||(57<n && 65>n)||(90<n && 97>n)||(122<n))  // other[]
		{
			other[n3]=n;
			n3++;
		}
	}
	
	 
// 打印numble[]
//	printf("numble=(48<=n && n<=57)\n");
	printf("numble=[");   
	for(int i=0;i<n1;i++)
	{
		if(0<=i && i<n1-1)
		{
			printf("%c, ",numble[i]);
		}
		else if(i<n1)
		{
			printf("%c",numble[i]);	
		}
	}
	printf("]\n");
	
	
// 打印character[] 	
//	printf("character=((65<=n && n<=90)||(97<=n && n<=122))\n")
	printf("character=[");  
	for(int i=0;i<n2;i++)
	{
		if(0<=i && i<n2-1)
		{
			printf("%c, ",character[i]);
		}
		else if(i<n2)
		{
			printf("%c",character[i]);	
		}
	}
	printf("]\n"); 
	
	
// 打印other[] 	
//	printf("other=((48>n)||(57<n && 65>n)||(90<n && 97>n)||(122<n))\n")
	printf("other=[");  
	for(int i=0;i<n3;i++)
	{
		if(0<=i && i<n3-1)
		{
			printf("%c, ",other[i]);
		}
		else if(i<n3)
		{
			printf("%c",other[i]);	
		}
	}
	printf("]\n");
}
