#include<stdio.h>
int main()
{
	int N,m, fact=1, i;
	scanf("%d",&N);
	m=N;
	for(i=0;i<N;i++)
	{
		fact=fact*(m--);
	}
	printf("%d",fact);
	return 0;
}
