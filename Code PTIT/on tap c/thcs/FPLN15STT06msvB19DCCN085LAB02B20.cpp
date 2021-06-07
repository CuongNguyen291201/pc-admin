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
void in(int x[],int a){
	for(int i=0;i<a;i++){
		scanf("%d",&x[i]);
		}
	}
void out(int x[],int a){
	for(int i=0;i<a;i++){
		printf("%d",x[i]);
		}
		printf("\n");
	}
void check(int x[],int a){
	int min=90,m,n;
	for(int i=0;i<a;i++){
		for(int j=i+1;j<n;j++){
			if(abs(x[i]-x[j]) < min){
				min=abs(x[i]-x[j]);
				m=x[j];
				n=x[i];
				}
			}
		}
	printf("%d%d%d",min,m,n);
	}
int main(){
	int x[30],a;
	scanf("%d",&a);
	in(x,a);
	check(x,a);
	return 0;
	}
	
