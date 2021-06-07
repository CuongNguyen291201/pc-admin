#include <stdio.h>
	int main(){
		int i,n;
		scanf("%d",&n);
		int s1=0,s2=0,s3=0;
		
		for(i=0;i<n;i++){
			s1 += i;
			if(i%2==0){
				s2 += i;
			}
		}
		for(i=0;i<n;i++){
			if(i%2!=0){
				s3 += i;
			}
		}
		
		printf("\n%d",s1);
		printf("\n%d",s2);
		printf("\n%d",s3);
		
		return 0;
	}
