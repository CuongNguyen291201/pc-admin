#include <stdio.h>
 int main(){
 	int a,b,c;
 	scanf("%d",&a); scanf("%d",&b); scanf("%d",&c);
 	if(a+b>c & a+c>b & b+c>a){
 		printf("a,b,c la 3 canh cua 1 tam giac");
	 }
	else{
		printf("a,b,c khong la canh cua tam giac");
	}
	
	return 0;
 }
