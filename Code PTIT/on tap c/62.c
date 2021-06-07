#include <stdio.h>
	int main(){
		int i,a[100];
		int n;
		scanf("%d",&n);
		int dem=0;
		
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		
		for(i=0;i<n;i++){
			int check =1;
			int j;
	
			if(a[i]<2) check =0;
			for(j=2;j<a[i];j++){
				if(a[i]%j==0){
					check =0;
					break;
				}
			}
			if(check==1) 
				printf("%5d",a[i]);
				dem++;
				printf("%d",dem);
			}
		return 0;
	}
