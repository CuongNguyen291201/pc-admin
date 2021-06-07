#include <stdio.h>
 int main(){
 	int i,a[i];
 	int n; scanf("%d",&n);
 	
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	for(i=0;i<n;i++) 
	{
	  	printf("%2d",a[i]); 
 	}
 	printf("\ncac so nguyen to la: ");
 	
	for(i=0;i<n;i++){
		int check =1;
		if(a[i]<2) check =0;
		int j;
		
		for(j=2;j<a[i];j++){
			if(a[i]%j==0){
				check =0;
				break;
			}
			
		}
		if(check==1) printf("%5d", a[i]);
	}
	
	return 0;
 }
