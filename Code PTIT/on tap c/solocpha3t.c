#include<stdio.h>

int kts(int n){
	
	while(n>0){
		int du=n%10;
		if(du!=0 && du!=6 && du!=8){
			return 0;
			n/=10;		}
	}
	return 1;
}
   int main(){
   	int n;
   	scanf("%d",&n);
   	
   	if(kts(n)==1){
   		printf("1");
	   }
	   else{
	   	printf("0");
	   }
	   return 0;
   }
