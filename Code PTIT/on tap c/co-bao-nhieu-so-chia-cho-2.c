#include <stdio.h>

int kt(int x){
	int i;
	for(i=0;i<=x;i++){
		if(x%i==0){
			i%2==0;
			return 1;
		}
	}
	return 0;
}

int main(){
	int t,n,kq;
	scanf("%d %d %d",&t,&a,&b);
	int dem1=0;
	int dem2=0;
	int i;
	for(i=0;i<=a;i++){
		if(kt(a)==1)
			dem1++;
		printf("%d\n",dem1);
	}
	for(i=0;i<=b;i++){
		if(kt(b)==1)
			dem2++;
		printf("%d",dem2);
	}
	return 0;
}
