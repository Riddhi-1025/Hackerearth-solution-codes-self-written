#include<stdio.h> 
int main() 
{     int t;     
      scanf("%d",&t);     
	  while(t--)     
	  {         
		  int n,m,rowmax=0,colmax=0;         
		  scanf("%d%d",&n,&m);         
		  char a[n][m];         
		  for(int i=0;i<n;i++)         
		  {             
			  for(int j=0;j<m;j++)             
			  {                 
				  scanf(" %c",&a[i][j]);             
				  }         
				  }         
				  for(int i=0;i<n;i++)         
				  {             
					  int maxtemp=0,temp=0;             
					  for(int j=0;j<m;j++)             
					  {                 
						  if(a[i][j]=='#')                 
						  {                     
							  temp++;                 
							  }                 
							  else                 
							  {                     
								  if(maxtemp<temp)                     
								  {                         
									  maxtemp=temp;                     
									  }                     
									  temp=0;                 
									  }             
									  }             
									  if(maxtemp<temp)             
									  {                 
										  maxtemp=temp;             
										  }             
										  if(rowmax<maxtemp)             
										  {                 
											  rowmax=maxtemp;             
											  }         
											  }         
											  for(int i=0;i<m;i++)         
											  {             
												  int maxtemp=0,temp=0;             
												  for(int j=0;j<n;j++)             
												  {                 
													  if(a[j][i]=='#')                 
													  {                     
														  temp++;                 
														  }                 
														  else                 
														  {                     
															  if(maxtemp<temp)                     
															  {                         
																  maxtemp=temp;                     
																  }                     
																  temp=0;                 
																  }             }             
																  if(maxtemp<temp)             
																  {                 maxtemp=temp;             
																  }             
																  if(colmax<maxtemp)             
																  {                 
																  colmax=maxtemp;             
																  }         
																  }         
																  printf("%d\n",(rowmax>colmax)?rowmax:colmax);     
																  } 
																  }
