/*#include<stdio.h>
#include<string.h>
int main()
{
	char A[9];
	int i,flag=0;
	scanf("%s",A);
	for(i=0;i<9;i++)
	{
		if(i==2)
		{
			if(A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'||A[i]=='Y')
			printf("Invalid");
			flag=1;
			break;
		}
		else
		{
			if(i==0||i>=3)
			{
			if((A[i]+A[i+1])%2!=0)
			{
				printf("Invalid");
				flag=1;
				break;
			}
		}
	}
}
if(flag==0)
printf("valid");
}*/
#include <stdio.h> 
#include <string.h> 
int main()
{ char str[10]; 
  gets(str); 
  if((((str[0]+str[1])%2)==0) && (((str[3]+str[4])%2)==0) && (((str[4]+str[5])%2)==0) && (((str[7]+str[8])%2)==0) && (str[2]!='A' && str[2]!='E' && str[2]!='I' && str[2]!='O' && str[2]!='U' && str[2]!='Y')) 
  {     
     printf("valid"); 
	 } 
	 else 
	 {     
	 printf("invalid"); 
	 } 
	 return 0; 
	 }
