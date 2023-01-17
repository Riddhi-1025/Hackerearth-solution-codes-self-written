#include<stdio.h>

#include<math.h>

int main()

{

int t ;

long long int i = 0;

scanf("%d",&t);

while(t--)

{ i = 0;

     long long int n ;

     scanf("%lld",&n);

     if(n==1)

     {

         printf("1\n");

         continue;

     }

     while(pow(2,i)<=n)

     {

         i++;

     } 

     if(pow(2,i) - 1 == n)

     { printf("%lld\n",n);

         continue;

        }

     long long int res = pow(2,i-1) -1 ;


 

     printf("%lld\n",res);

}

return 0 ;

}
