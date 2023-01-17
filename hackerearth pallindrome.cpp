#include<stdio.h>
#include<string.h>
int main(){
	char S[100],rev[100];
	int i,length;
	scanf("%s",S);
	strcpy(rev,S);
	strrev(rev);
	printf("%s\n",rev);
	if(strcmp(S,rev)==0)
	printf("Yes");
	else
	printf("No");
	return 0;
}
