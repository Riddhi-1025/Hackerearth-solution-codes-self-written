#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int T,n,i,j,k;
	char temp;
	cin>>T;
	for(k=0;k<T;k++)
	{
		cin>>n;
		char s[n],t[n];
		cin>>s;
		cin>>t;
		for(i=0;i<n;i++)
		{
			if(s[i]!=t[i])
			{   
			    if(s[i]=!'?')
			    {
				for(j=n;j>i;j--)
				{
				   if(s[j]==t[i])
				   {
				   	temp=s[i];
				   	s[i]=s[j];
				   	s[j]=temp;
					   }
				}
			}
			else
			s[i]=t[i];
		}
	}
	if(strcmp(s,t)==0)
	cout<<"Yes";
	else
	cout<<"No";
}
}
