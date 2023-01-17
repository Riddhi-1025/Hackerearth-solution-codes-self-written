#include<stdio.h>
#include<string.h>
int main(){
	int x=0, y=0;
	char word[20];
	scanf("%s",word);
	for(int i=0;i<strlen(word);i++)
	{
		if(word[i]=='z')
		x++;
		else
		y++;

	}
	if(y==(2*x))
	printf("Yes");
	else
	printf("No");
	
	return 0;
	
}
