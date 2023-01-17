#include<stdio.h>
int main() 
{
	int T;
    scanf("%ld", &T);
    for(int i=0;i<T;i++)
	{
        int p,q,n;
        int sum_1=0,sum_2=0;
        scanf("%d %d",&p,&q);
		scanf("%d",&n);
		for(int j=0;j<n;j++)
		{
			int First, Sec;
            scanf("%d %d",&First, &Sec);
			sum_1= sum_1+ p*First + q*Sec;
            sum_2= sum_2+ p*Sec + q*First;

        }
        if((sum_1) < (sum_2) ){
            printf("%d\n",(sum_1));
			}
			else
			{
				printf("%d\n",(sum_2));

        }

    }

}
