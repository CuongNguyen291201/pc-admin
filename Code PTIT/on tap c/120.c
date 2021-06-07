#include <stdio.h>
#include <math.h>
	
	int nghichdao(int n)
	{
		int sum;
		int x=0;
		int temp = n;
		while(temp!=0)
		{
			sum+=temp%10;
			x = x*10 + temp%10;
			temp=temp/10;
		}			
		if (x==n && sum%10==0) return 1;
		return 0;
		
	}
	
	int main(){
		
		int n;
		int dem;
		scanf("%d",&n);
		int i;
		for(i=pow(10,n-1);i<pow(10,n);i++)
		{
			if(nghichdao(i)==1) dem++;
		}
		printf("%d",dem);
		return 0;
	}
