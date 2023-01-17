#include <iostream> 
using namespace std; 
int gcd(int a, int b)
{     
   int rem=a%b;     
   if(rem==0) 
   return b;     
   a=b;     
   b=rem;     
   return gcd(a,b); 
   } 
   int main() 
   {     
   int tc; 
   cin>>tc;     
   while(tc--)
   {     
   int a,b;    
   cin>>a>>b;     
   int hcf=gcd(a,b);     
   cout<<b/hcf<<" "<<a/hcf<<endl; 
   } 
   }
