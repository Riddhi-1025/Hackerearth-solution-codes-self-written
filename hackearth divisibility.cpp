#include<iostream>
using namespace std;
int main()
{
	long long int N,i,r;
	cin>>N;
	long x=0;
	long A[N];
	for(i=0;i<N;i++)
	cin>>A[i];
	for(i=0;i<N;i++)
	{
		r=A[i]%10;
		x=(x*10) + r;
	}
	cout<<x<<endl;
	if(x%10==0)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	return 0;
	
}
