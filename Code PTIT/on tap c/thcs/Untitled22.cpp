#include<stdio.h>

int main(){
	int n;
	printf("nhap n: "); scanf("%d", &n);
	
	if(n<2){
		printf("nhap n>1");
		}
	else{
		int i=2;
		while(n>1){
			if(n%i==0){
				printf("uoc cua n la: %d\n", i);
				if(n!=i){
					printf("-");
					}
				n/=i;
				}
			else{
				i++;
			}
		}
	}
	return 0;
	}
		

