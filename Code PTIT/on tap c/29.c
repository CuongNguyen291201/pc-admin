#include <stdio.h>
 int main(){
 	int i,a[i];
 	int n; scanf("%d",&n);
 	int chan =0,le=0;
 	
 	
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	for(i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	
	printf("\nso so chan la: ");
	for(i=0;i<n;i++){
		if(a[i]%2==0)
			
			chan++;
	}
   		printf("%d", chan);
   	
   	printf("\nso so le la: ");
   	for(i=0;i<n;i++){
   		if(a[i]%2==1)
   		   le++;
	   }
		printf("%d", le);
	
 }
