#include <stdio.h>
#include <string.h>
	
	void to_lower(char s[]){
		int i;
		for(i=0; s[i] != '\0';i++ ){
			if(s[i]>='A' && s[i]<='Z'){
				s[i] = s[i] +32;
			}
		}
	}
	
	void to_upper(char s[]){
		int i;
		for(i=0;s[i] != '\0';i++){
			if(s[i]>='a' && s[i]<='z'){
				s[i] = s[i] - 32;
			}
		}
	}

	int main(){
		char s[100];
		int i;
		gets(s);
		to_lower(s);
		printf("doi thanh chu thuong: %s",s);
		to_upper(s);
		printf("\ndoi thanh chu hoa: %s",s);
		
		return 0;
		
	}
