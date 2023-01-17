/*#include<iostream>
using namespace std;
int main()
{
	int i,j,T,N,M;//N is the no of lunch boxes and M is the no of schools
	cin>>T;
	for(i=0;i<T;i++)
	{
		cin>>N>>M;
		int A[M],count=0;
		for(j=0;j<M;j++)
		cin>>A[j];
		for(j=0;j<M;j++)
		{
			if(N>=A[j])
			{
				count++;//j lunch boxes
			    N=N-A[j];
			}
			else
			continue;
		}
		cout<<count<<endl;
	}
	return 0;
}*/
#include<bits/c++.h>
int lunchReceive(int m, int arr[], int k)
{    int sum=0, count=0;

    for(int i=0; i<k; i++)    
	{        
	sum += arr[i];        
	if(sum <= m)        
	{            
	count++;        
	}        
	else        
	{            
	break;        
	}    
	}

    return count;
	}

int main()
{    
   unsigned int a, b, c;    
   std::cin>>a;

    while(a--)    
	{        
	std::cin>>b;        
	std::cin>>c;

        int arr[c];        
		for(unsigned int i=0; i<c; i++)        
		{            
		std::cin>>arr[i];        
		}

        std::sort(arr, arr+c);        
		std::cout<<lunchReceive(b,arr,c)<<"\n";    
		}
		}
