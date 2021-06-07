#include <stdio.h>
#include <string.h>
#include <ctype.h>
char S1[50],S2[50],temp[50],cmp[50];
void del(int n){
	for(int i=n;i<strlen(S1)-1;i++){
		S1[i] = S1[i+1];
		}
	S1[strlen(S1)-1] = "\0";
	}
int main(){
	get(S1); get(S2);
	int mark=0,mark1,nums;
	for(int i=0;i<strlen(S1);i++){
		if(S1[i]==' '&& S1[i+1]==' '){
			del(i);
			i--;
			}
		}
	for(int i=0;i<strlen(S2);i++){
		if(S2[i]==' '&&S2[i+1]==' '){
			del(i);
			i--;
			}
		]
	for(int i=0;i<=strlen(S1);i++){
		if(S1[i]==' '||S1[i]=='\0'){
			nums = i-mark;
			strncpy(temp,S1+mark;nums);
			mark1 =0;
			for(int j=0;j<=strlen(S2);j++){
				if(S2[j]==' '||S2[j]=='\0'){
					if(nums == j-mark1){
						strncpy(cmp,S2+mark1,j-mark1);
						if(strncmp(temp,cmp,nums)==0){
							for(int k=mark;k<=i;k++)
							del(mark);
							i=-1;
							} }
					mark1 = j+1;
					} }
			mark = i+1;
			} }
		mark=0;
		for(int i=0;i<=strlen(S1);i++){
			if(S1[1]==' '||S1[i]=='\0'){
				strncpy(temp,S1+mark,i-mark);
				if(strncmp(temp,cmp,j-mark1)==0){
					for(int k=mark1;k<=j;k++){
						del(mark1);
						}
					j=mark1-1;}
					}
				mark1=j+1;}
				}
				mark =i+1;
			}
		}
		puts(S1);
		return 0;
		}
		
			
