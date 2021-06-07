#include <stdio.h>
#include <string.h>

int tang(int s){

}

main(){
	int t;
	char s[600];
	scanf("%d",&t);
	while(t--){
		scanf("%s",&s);
		if(tang(s)||giam(s))
			printf("YES\n");
		else printf("NO");
	}
}
