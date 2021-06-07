#include <stdio.h>
 int main(){
 	int i,a[i];
 	int n; scanf("%d",&n);
 	
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	for(i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	
	for(i=0;i<n;i++){
		int temp,j;
		for(j=i+1;j<n;i++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		printf("%5d",a[i]);
	}
	
	int dem =1;
	for(i=0;i<n-1;i++){
		if(a[i]=a[i+1]){
		dem++;
		}
		else printf("\nSo a[%d] xuat hien %d lan \n",a[i],dem);
	}

	return 0;
 }
