#include <stdio.h>
 	int main(){
 		int i,a[100];
 		int n;
 		int b[100];
 		scanf("%d",&n);
 		
 		for(i=0;i<n;i++){
 			scanf("%d",&a[i]);
		 }
 		for(i=0;i<n;i++)
 		{
 			b[a[i]]++;
		 }
		 
		 for(i=0;i<n;i++)
		 {
		 	if(b[a[i]]!=0) 
			 {
				printf("%5d",a[i]);
			 	b[a[i]]=0;
			 }
		 }
 		return 0;
	 }
