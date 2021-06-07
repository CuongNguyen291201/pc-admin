#include <stdio.h>
#include <ctype.h>
#include<string.h>

	int main(){
		char s[100];
		gets(s);
		int i,n;
		int check =1;
		for(i=0;i<strlen(s);i++){
			if(s[i]==' ') continue;
		if(isalpha(s[i])==0){
			check = 0;
			break;
			}
		}
		if(check==1) printf("1");
		else printf("0");
		return 0;
	}
