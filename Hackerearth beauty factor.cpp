#include<bits/stdc++.h>

using namespace std;

bool eachdigitpositive(int n )

{

if(n==0)

{

return false;

}

while(n!=0)

{

int rem=n%10;

if(rem==0)

{

return false;

}

 

 

n=n/10;

}

return true;;

 

}

int sumofdigits(int n)

{

int sum=0;

while(n>0)

{

/* if(n%10==0)

{

break;

} */

sum+=n%10;

n=n/10;

}

return sum;

 

}

int beautyfactor(int n)

{

if(n<10)

return n;

else

return beautyfactor(sumofdigits(n)) ;

}


 

bool anyDigitRepeated(int n )

{

int arr[10]={0};

while(n!=0)

{

int rem=n%10;

arr[rem]++;

n=n/10;

}

bool repeated=false;

for(int i=0;i<10;i++)

{

if(arr[i]>1)

{

repeated=true;

break;

}

 

}

return repeated;

}

int main()

{

int b,k;

cin>>b>>k;

bool mila=true;

for(int i=pow(10,k-1);i<=pow(10,k)-1;i++)

{

if( (beautyfactor(i)==b )&&(eachdigitpositive(i )==true)&&(anyDigitRepeated(i)==false) )

{

cout<<i<<endl;

mila=false;

break;

}

 

 

}

if(mila==true)

cout<<-1<<endl;

return 0;

 

 

}
