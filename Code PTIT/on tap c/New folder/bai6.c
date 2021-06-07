#include <stdio.h>
main(){
	int t,n,kq,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		kp=0;
		for(i=2;i*i<n;i++){
			if(n%i==0)
				if(i%2==0) kq++;
				if((n/i)%2==0) kq++;
		}
	}
	if
}
