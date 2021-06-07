#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	int sa=0,sb=0,sc=0;
	char a[100],b[100],c[100];
	gets(a);gets(b);gets(c);
	for(int i=0;i<strlen(a);i++){
		if(isalnum(a[i])=='0')
		sa++;
	}
	for(int i=0;i<strlen(b);i++){
		if(isalpha(b[i])=='0')
		sb++;
	}
	for(int i=0;i<strlen(c);i++){
		if(isalnum(c[i])=='1' && isalpha(c[i])=='1')
		sc++;
	}
	if(sa!=0){
	printf("1\n");}
	else printf("0\n");
	if(sb==0){
		printf("1\n");}
	else printf("0\n");
	if(sc==0){
		printf("1");}
	else printf("0");
}
