#include <stdio.h>

	int UCLN(int a,int b){
		if(a%b!=0) 
		return (b,a%b);
		else 
		return b;
	}
	int BCNN(int a,int b){
		return (a*b)/ UCLN(a,b);
	}
	
	int main(){
		int a,b,ucln,bcnn;
		scanf("%d",&a);
		scanf("%d",&b);
		
		ucln = UCLN(a,b);
		printf("%d",ucln);
		bcnn = BCNN(a,b);
		printf("\n%d",bcnn);
		
		return 0;
	}
