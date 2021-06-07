#include <stdio.h>
 int main(void){
 	int N;
 	scanf("%d", &N);
 	
 	int i=0, S=0;
 	for(i=0; i<=N; i++){
 		int a;
 		scanf("%d",&a);
 		S += a;
 		}
 		printf("%d",&N);
 		
 	S=0;
	i=0;
	while(i<=N){
		int a;
		scanf("%d", &a);
		S += a;
		i++;
		}
		printf("%d", &N);
		
	S=0;	
	i=0;
	do{
		int a;
		scanf("%d", &a);
		S += a;
		i++;
	}	
	while(i<N);
	return 0;
	}
	
	// cho so nguyen duong N và mot day gom N so nguyen 
	// su dung cac vong lap for, while, do-while tinh tong va in
	// In: 4 0 3 5 1
	// out: 9 9 9 
	
	
	
	
	
	
	
	
