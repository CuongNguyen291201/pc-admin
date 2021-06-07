/*
Nguyen Quoc Cuong
B19DCCN085
15 
06
D19CQCN01-B
Cuong Nguyen
cuongnguyenz2912@gmail.com
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[100];
	gets(a);
	bool test;
	char min[10]="",temp[10]="",max[10]="";
	int maxs=0,mins=0,bac=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]==' '&&isalpha(a[i-1])!=0){
			strcat(max,a+bac,i-bac);
			strcat(min,a+bac,i-bac);
			bac=i+1;
			break;
			}
		}
	for(int i=bac;i<=strlen(a);i++){
		if(a[i]==' '||a[i]=='\0'&&a[i-1]!=' '){
			if(strlen(max)<i-bac){
				strcpy(max,temp);
				strncat(max,a+bac,i-bac);
				}
			if(strlen(min)>i-bac){
				strcpy(min,temp);
				strncat(min,a+bac,i-bac);
				}
			}
		if(a[i]==' '&&a[i+1]!=' '){
			bac=i+1;
			}
	puts(min);
	printf(max," ");
	return 0;
	}
	}
