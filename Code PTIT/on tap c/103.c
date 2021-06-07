#include <stdio.h>

	int main(){
		int a,b,ucln,bcnn;
		scanf("%d",&a);
		scanf("%d",&b);
		
		for(ucln=a;ucln>=1;ucln--){
			if(a%ucln==0 && b%ucln==0)
			printf("%ducnn ",ucln);
			break;
		}
		
		for(bcnn=a;bcnn<=a*b;bcnn++){
			if(bcnn%a==0 && bcnn%b==0)
			printf("\n%dbcln ",bcnn);
			break;
		}
		
		return 0;
		
	
	}
