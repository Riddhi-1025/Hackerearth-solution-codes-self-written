#include <iostream> 
using namespace std; 
int countOdd(int n) 
{ 
	int coun = 0, m, j, i; 
	for (i = n - 2; i >= 1; i--) 
	{ 
		if (i & 1) 
		{  
			m = (n - i) / 2; 
			j = (i * (i + 1)) / 2; 
			coun += j * m; 
		} 
		else 
		{  
			m = ((n - 1) - i) / 2; 
			j = (i * (i + 1)) / 2; 

			coun += j * m; 
		} 
	} 
	return coun; 
} 
 
int countEven(int n) 
{ 
	int coun = 0, m, j, i; 
	for (i = n - 2; i >= 1; i--) 
	{ 
		if (i & 1) 
		{ 
			m = ((n - 1) - i) / 2; 
			j = (i * (i + 1)) / 2; 
			coun += j * m; 
		} 
		else 
		{ 
			m = (n - i) / 2; 
			j = (i * (i + 1)) / 2; 
			coun += j * m; 
		} 
	} 
	return coun; 
} 

int main() 
{ 
	int n;
	cin>>n; 
	if (n & 1) 
		cout << countOdd(n); 
	else
		cout << countEven(n); 
	return 0; 
} 
