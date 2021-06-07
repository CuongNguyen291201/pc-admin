#include <stdio.h>

	int ktsnt(int n){
		if(n<2) return 0;
		int i;
		for(i=2;i<n;i++){
			if(n%i==0)
			return 0;
		}
		return 1;
	}
	
	int sapxep(int a[], int n){
		int i,j,temp;
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(a[i]>a[j]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}

	int main(){
		int i,a[100];
		int n;
		scanf("%d",&n);
		
		for(i=0;i<n;i++){
			scanf("%d",&n);
		}
		
		sapxep(a,n);
		
		for(i=0;i<n;i++){
			if(ktsnt(a[i])==1){
			printf("%d ",a[i]);
		
			
			int dem =1;
			while(a[i]=a[i+1]){
				dem++;
				i++;
				}
			printf("%d\n",dem);
			}	
		}
		
		return 0;
	}
