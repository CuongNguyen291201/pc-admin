#include <stdio.h>

int ucln(int a){
	int t;
	while(b>0){
		t = a%b;
		a = b;
		b = t;
	}
	return a;
}
 main(){
	int t,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&a,&b);
		int x = ucln(a,b);
		printf("%d %d\n",x,((long long)a*b)/x);
	}
	return 0;
}

