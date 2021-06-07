#include <stdio.h>
 int main(void){
 	int N;
 	scanf("%d", &N);
 	int i=1;
 	float S=0.0;
 	do{
 		S + (float)1/i;
 		i++;
	 }
	 while(i<=N);
	 printf("%.2f",&N);
	 return 0;
	 }
	 
	 // cho N su dung do-while de tính bieu thuc
	 // lay 2 so sau dau phay
	 // S = 1 + 1/2 + .... + 1/N
	 // In: 2   out: 1.20
