#include <iostream>
using namespace std;
int main()
{     
    int t;     
    cin>>t;    
    char str[t+1];   
    cin>>str;   
    int temp;   
    for(int i=0; i<t; i++)  
{      
    if(str[i]=='H' && (str[i+1]=='H' || str[i-1]=='H'))

        {            
		temp++;      
		break;        

 }  

   }    

 if(temp==0)   

  {     

for(int i=0; i<t; i++)

    {    

     if(str[i]=='.')     

    {            

 str[i]='B';      

   }    

 }    

 }   

  if(temp==0)   

  {         

     cout<<"YES\n";     

    cout<<str;    

 }   

  else   

  {      

   cout<<"NO";  

   }

}
