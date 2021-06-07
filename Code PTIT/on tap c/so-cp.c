#include <stdio.h>
#include <math.h>

	int cp(int n){
		int i = sprt(n);
		if(i*i == n) return 1;
		else return 0;
	}

	int main(){
		int i;
		int a,b;
		scanf("%d %d",&a,&b);
		int temp;
		
		if(a>b){
			temp = a;
			a = b;
			b = temp;
		}
		for(i=a;i<=b;i++){
			if(cp(i)==1)
			printf("%d ",i);
		}
		
		return 0;
	}
