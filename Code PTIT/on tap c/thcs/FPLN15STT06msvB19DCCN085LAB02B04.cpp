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
#include <math.h>
int tinh(int n);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d", tinh(n));
	}
int tinh(int n){
	if(n>0){
		int a;
		a = pow(n,n);
		return a+tinh(n-1);
		}
	}
	
