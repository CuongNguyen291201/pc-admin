#include <stdio.h>
 int max(int num1, int num2){
 	if(num1>num2) return num1;
 	else return num2;
 	
 }



 int main(){
 	int a=29;
 	int b=12;
 	int c;
 	
 	c = max(a,b);
 	printf("\ngia tri lon nhat la: %d", c);
 	
 	return 0;
 }
