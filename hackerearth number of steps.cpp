#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp,count=0,flag=0;
	cin>>n;
	int A[n], B[n];
	for(i=0;i<n;i++)
	cin>>A[i];
	for(i=0;i<n;i++)
	cin>>B[i];
	for(i=0;i<n;i++)
	{
		while (A[i]>=B[i])
		{
			A[i]=A[i]-B[i];
			count++;
		}
		
	}
	temp=A[0];
	for(i=0;i<n;i++)
	{
		if(A[i]!=temp){
		flag=-1;
		break;
		}
		else
		flag=count;
	}
	cout<<flag;
	return 0;
}
