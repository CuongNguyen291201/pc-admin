#include <stdio.h>
 int main(){
 	int i,a[i],n; scanf("%d",&n);
 	
 	
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
 	}
 	for(i=0;i<n;i++){
 		printf("%5d",a[i]);
	 }
	
	printf("\ncac so nguyen to la: ");
	for(i=0;i<n;i++){
		int check =1;
		if(a[i]<2) check=0;
		int j;
		
		for(j=2;j<n;j++){
			if(a[i]%j ==0){
				check =0;
				break;
			}
		}
		if(check==1) printf("%2d",a[i]);
	}		 
			
	return 0;		
}
