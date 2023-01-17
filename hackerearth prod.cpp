#include<iostream>
using namespace std;
int main()
{
	long long int N, i, prod=1;
	cin>>N;
	long long A[N];
	for(i=0;i<N;i++)
	{
		cin>>A[i];
		prod*=A[i];
	}
	cout<<prod<<endl;
	return 0;
}
