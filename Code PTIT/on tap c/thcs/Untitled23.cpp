#include <stdio.h>

void hienuoc(int n){
	int i=2;
	int dainra=1;
	while(n>1){
		if(n%i == 0){
			if(dainra !=1){
				printf("%d",i);
				dainra =1;
				}
			n /= i;
			}
		else{
			i++;
		}
	}
}

int main(){
 hienuoc(24);
 return 0;
 }
 	
