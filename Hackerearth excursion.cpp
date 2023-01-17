#include<stdio.h>
int main()
{
	int T,N,M,K,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		int sum_1=0,sum_2=0,SUM=0;
		scanf("%d",&N);
		scanf("%d",&M);
		scanf("%d",&K);
		sum_1=N/K;
		if(N%K!=0)
		sum_1=sum_1+1;
		else
		sum_1=sum_1;
		sum_2=M/K;
		if(M%K!=0)
		sum_2=sum_2+1;
		else
		sum_2=sum_2;
		SUM=sum_1+sum_2;
		printf("%d\n",SUM);
		
	}
	return 0;
}
