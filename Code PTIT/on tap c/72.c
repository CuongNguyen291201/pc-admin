#include <stdio.h>
	int main(){
		int i,a[100];
		int n;
		scanf("%d",&n);
		int chan=0,le=0;
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]%2==0)
				chan++;
				
		}
		printf("\n%d",chan);
		
		for(i=0;i<n;i++){
			if(a[i]%2==0)		
			printf("%5d",a[i]);
		}
		for(i=0;i<n;i++){
			if(a[i]%2 != 0)
			le++;
		}
		printf("\n%d",le);
		
		for(i=0;i<n;i++){
			if(a[i]%2 != 0)
			printf("%5d",a[i]);
		}
			
			
		
		return 0;
	}
