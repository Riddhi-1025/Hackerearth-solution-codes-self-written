#include <iostream>
using namespace std;
int main() {
	int n,count=0,i,prod=1,r,m;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		m=i;
        while(m>0)
		{
			r=m%10;
		    if(r==1)
			break;
			prod*=r;
			m/=10;
	
		}
		if(prod==i)
		count++;

	}
	cout<<count;
	return 0;
}
