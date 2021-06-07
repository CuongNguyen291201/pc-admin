#include <stdio.h>
#include <string.h>
	int main(){
		char s[50];
		printf("nhap chuoi: ");
		gets(s);
		
		int i, count=1;
		for(i=0;i<strlen(s);i++){
			if(s[i]== ' ') count++;
		}
		printf("so luong tu trong chuoi la:%d ", count);
		
		return 0;
		
	}
