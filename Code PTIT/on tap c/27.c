#include <stdio.h>
 int main(){
 	int i,a[10];
 	int n; scanf("%d",&n);
 	int max= a[0];
 	
 	for(i=0;i<n;i++){
 		scanf("%d",&a[i]);
	 }
	 for(i=0;i<n;i++){
	 
	printf("%5d",a[i]);}
	printf("\n");
	
	for(i=0;i<n;i++){
		if(max<a[i]){
			max = a[i];
		}
	}
	printf("gia tri max la: %d",max); printf("\n");
	printf("cac so chan la: ");
	for(i=0;i<n;i++){
		if(a[i]%2==0)
	printf("%d ", a[i]);
}
	printf("\ncac so le la: ");
	for(i=0;i<n;i++){
		if(a[i]%2==1)
		printf("%d ", a[i]);
	}
	printf("\ncac so nguyen to la: ");
	for(i=0;i<n;i++){
		int check=1;
		if(a[i]<2) check =0;
		int j;
		for(j=2;j<a[i];j++)
		{
			if( a[i]%j==0) 
			{
				check = 0;
				break;
			}
		}
		if(check ==1) printf("%5d",a[i]);
	}
		
		
	
	return 0;
	
 }
