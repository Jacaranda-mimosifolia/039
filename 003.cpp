#include<stdio.h>
#define n 10  //规定数组长度 
int main()
{
	int N=n,m=0,num;
	int numble[n];	//设置数组 
	printf("请输入一串数字：");
	
	
	for(int i=0;i<n;i++)
	{
		numble[i]=getchar()-48;  //获取数组元素 
	}
	
	
	for(int i=0;i<n;i++)  //总共从头到尾排n-1次 
	{
		for(int i=0;i<N-1;i++)  //从头到尾排一次，共有(N-1)+(N-2)+(N-3)+~~~+1+0次两数比较
		{
			if(numble[i]>numble[i+1])
			{
				num=numble[i+1];  //引入第三个变量，两数交换 
				numble[i+1]=((numble[i]>numble[i+1])?numble[i]:numble[i+1]);  //两数比较排序，小的在前，大的在后 
				numble[i]=num;
				m++;  //计算逆序数 
			}
		}
		N--;
	}
	
	//输出
	printf("逆序数为：%d\n",m);  //输出逆序数 
	for(int i=0;i<n;i++)
	{
		printf("numble[%d]=%d\n",i,numble[i]);  //输出数组 
	}
}

