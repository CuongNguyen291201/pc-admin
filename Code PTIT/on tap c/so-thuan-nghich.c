#include<stdio.h>

	int tn(int n){
		int temp = n;
		int b;
		int nd;
		while (n!=0){
			b = n%10;
			nd = nd*10 + b;
			n/=10; 
		}
		if(temp == nd) return nd;
		else return 0;
	}

	int main(){
		int a;
		scanf("%d",&a);
		printf("%d", tn(a));
		return 0;
	}
