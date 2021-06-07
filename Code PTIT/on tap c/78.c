#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>1){
		int arr[n];
		int i,j,k;
		for( i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(arr[i]>arr[j]){
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
                    for( k=0;k<n;k++)
                    {
                        printf("%d ",arr[k]);
                        if(k==n-1) printf("\n");
                    }
				}
			}
		}
	}
	return 0;
}
