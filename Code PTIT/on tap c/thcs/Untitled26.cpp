#include<stdio.h>

void hienUoc(int n){
	int i=2;
	int daInra =1;
	while(n>1){
		if(n%i==0){
			if(daInra != 1){
				printf("%d", i);
				daInra =1;
				}
			  n /= i;
			}
		else{
			i++;
		}
	}
}

int main(){
	hienUoc(8);
	return 0;
}
