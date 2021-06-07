#include <stdio.h>
	int dem(int a[],int n, int x){
		int dem,i;
		for(i=0;i<n;i++){
			if(a[i]==x){
				dem++;
			}
		}
		return dem;
	}
	
	int main(){
		int i,a[100];
		int n;
		scanf("%d",&n);
		
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			if(dem(a,n,a[i])==1)
			printf("%d",a[i]);
		}
		
		return 0;	
	}
