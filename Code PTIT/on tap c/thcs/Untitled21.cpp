#include <stdio.h>
#include <math.h>
int main(){
	int n;
	
	if(n<2)
	  return 0;
	
	for(int i = 2; i< sqrt((float)n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
	}
	
