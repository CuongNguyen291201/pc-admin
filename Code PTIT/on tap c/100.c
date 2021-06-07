#include <stdio.h>
	
	void to_lower(char s[]){
		int i;
		for(i=0;s[i] != '\0';i++){
			if(s[i]>='A' && s[i]<='Z'){
				s[i] = s[i] + 32;
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
		gets(s);
		int i;
		to_lower(s);
		printf("in ra chu thuong: %s",s);
		to_upper(s);
		printf("\nin ra chu hoa: %s",s);
		
		return 0;
	}
