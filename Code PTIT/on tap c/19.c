#include <stdio.h>
  int main(){
  	int a,i; 
  	scanf("%d",&a);
  	int check =1;
  	for(i=2;i<a;i++){
  		if(a%i==0){
  			check = 0;
  			break;
		  }
	  }
	  	if(check ==1)printf("a la so nguyen to ");
			else printf("a la khong la so nguyen to");
	return 0;  
}
