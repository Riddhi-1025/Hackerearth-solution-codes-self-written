#include <stdio.h> 
#include<string.h> 
int main() 
{ int i,t,n; 
  char num[100]; 
  int a[10]={6,2,5,5,4,5,6,3,7,6}; 
  scanf("%d", &n); 
  t=n; 
  while(t--) 
  { 
  int sum=0; 
  char s[100]; 
  scanf("%s",s); 
  for (i=0; i<strlen(s); i++) 
  { 
  sum=sum + a[s[i] - 48]; 
  //ascii value of '0' is 48 
  } 
  if (sum%2==1 && sum>2) 
  { printf("7"); 
  //if number of sticks is odd   
  } 
  else 
  { 
  printf("1"); 
  //if number of sticks is even   
  } 
  for(i=1;i<sum/2;i++) 
  { 
  printf("1");   
  } 
  printf("\n");   
  }
  return 0;   
  }
