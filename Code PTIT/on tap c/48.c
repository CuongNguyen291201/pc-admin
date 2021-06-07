#include <stdio.h>
 int main (){
 	int i,k; 
 	for(i=1;i<=50;i++){
 		int check =1;
 		if(i<2) check=0;
 		
 		int j;
 		for(j=2;j<i;j++){
 			if(i%j==0){
 				check =0;
 				break;
			 }
		 }
		if(check==1) printf("%5d",i);
	 } 
	 
	printf("\n");
	int a,b; scanf("%d",&a); scanf("%d",&b);
	for(k=a;k<=b;k++)
		if( k%i==0 & k%(i*i) == 0)
		printf("%5d",k);
	 	
 	return 0;
 }
