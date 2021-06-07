#include <stdio.h>
int main(){
	int a,b,x,i;
	scanf("%d%d",&a,&b);
	x = a*b;
	
	while (a!=b){
		if(a>b){
			a = a-b;
			i = x/a;
			}
		else
		{
			b = b-a;
			i = x/b;
		}
			
		}
	printf("%d", i);
	return 0;
	}
	
	/* boi chung nho nhat cua 2 so
	*/
	
