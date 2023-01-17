#include<iostream>
using namespace std;
int main()
{
	int t,i;
	long int n;
	cin>>t;
	for(i=0;i<t;i++)
	{
		long int count=0;
		cin>>n;
		count=n*(n-1)+1;
		cout<<count<<endl;
	}
	return 0;
}
