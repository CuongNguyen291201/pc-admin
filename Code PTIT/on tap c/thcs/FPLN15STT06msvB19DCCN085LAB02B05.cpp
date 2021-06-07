/*
Nguyen Quoc Cuong
B19DCCN085
15 
06
D19CQCN01-B
Cuong Nguyen
cuongnguyenz2912@gmail.com
*/

#include <stdio.h>
int Sum(int n){
	if(n==0) return 0;
	return n%10 + Sum(n/10);
	}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", Sum(n));
	return 0;
	}
	
