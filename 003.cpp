#include<stdio.h>
#define n 10  //�涨���鳤�� 
int main()
{
	int N=n,m=0,num;
	int numble[n];	//�������� 
	printf("������һ�����֣�");
	
	
	for(int i=0;i<n;i++)
	{
		numble[i]=getchar()-48;  //��ȡ����Ԫ�� 
	}
	
	
	for(int i=0;i<n;i++)  //�ܹ���ͷ��β��n-1�� 
	{
		for(int i=0;i<N-1;i++)  //��ͷ��β��һ�Σ�����(N-1)+(N-2)+(N-3)+~~~+1+0�������Ƚ�
		{
			if(numble[i]>numble[i+1])
			{
				num=numble[i+1];  //����������������������� 
				numble[i+1]=((numble[i]>numble[i+1])?numble[i]:numble[i+1]);  //�����Ƚ�����С����ǰ������ں� 
				numble[i]=num;
				m++;  //���������� 
			}
		}
		N--;
	}
	
	//���
	printf("������Ϊ��%d\n",m);  //��������� 
	for(int i=0;i<n;i++)
	{
		printf("numble[%d]=%d\n",i,numble[i]);  //������� 
	}
}

