#include <stdio.h>
#include <ctype.h>
#include <string.h>

	int main(){
		char s;
		scanf("%c",&s);
		int i;
		
		if(isalpha(s)) printf("day la chu");
		if(isdigit(s)) printf("day la so");
		if(isspace(s)) printf("day la khoang trong");

		return 0;
	}
