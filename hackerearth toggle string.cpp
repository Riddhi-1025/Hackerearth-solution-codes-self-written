#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
	char S[100],R[100];
	int i;
	cin>>S;
	for(i=0;i<strlen(S);i++)
	{
		if(isupper(S[i]))
		R[i]=tolower(S[i]);
		else
		R[i]=toupper(S[i]);
	}
	cout<<R<<endl;
	return 0;
}
