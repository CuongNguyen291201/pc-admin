// cho so nguyen duong N và 1 day gom N so nguyen 
// in ra tong, so lon nhat, so be nhat
// IN: 6 
// 1 4 2 7 1 2
// out:
// 17 7 1

#include <stdio.h>
 int main(void){
 	int N;
 	scanf("%d",&N);
 	int a[N];
 	int i,S=0,maxA,minA ;
 	
 	for (i=0;i<N;i++)
 	   scanf("%d",&a[i]);
 	   
 	   maxA=a[i];
 	   minA=a[i];
 	   
 	   for(i=0;i<N;i++){
 	   	S += a[i];
 	   	if(a[i]>maxA)
 	   	   maxA=a[i];
 	   	if(a[i]<minA)
 	   	   minA=a[i];
 	   	   }
 	   	   printf("%d %d %d",S,maxA,minA);
 	   	   return 0;
 	   	   }
 	   	   

