/*
Nguyen Quoc Cuong
Ma SV: B19DCCN085
Nhom: 15
STT: 06
*/ 


#include <stdio.h>
  int main()
  {
  	int a,b,ham[100][100],i,j,s;
  	scanf("%d",&a);
  	for(i=0;i<a;i++)
  	   for(j=0;j<a;j++)
  	scanf("%d",&ham[i][j]);
  	for(i=0;i<a;i++)
  	for(j=0;j<=i;j++)
  	{
  		if(ham[i][j]  % 2 == 0)
  		{
  			s+=ham[i][j];
  			}
  			}
  	printf("%d",s);
  	return 0;
  	}
  	
