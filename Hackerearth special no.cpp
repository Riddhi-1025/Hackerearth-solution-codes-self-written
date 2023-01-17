#include<stdio.h>
int main()
{
	int a,n,i,t,rem,sum,m;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a);
		n=a;
		while(n++)
		{
			sum=0;
			m=n;
			while(m>0)
			{
				rem=m%10;
				sum+=rem;
				m/=10;
			}
			if(sum%4==0)
			{
				printf("%d",n);
				break;
			}
		}
		printf("\n");
	}
}
