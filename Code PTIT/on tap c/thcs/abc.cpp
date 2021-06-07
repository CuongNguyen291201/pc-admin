#include <stdio.h>
 int main(void){
 	int i = 0, S = 0;
 	starthere:
 		S += i ;
 		i++ ;
 		if(i<=10){
 			goto starthere;
 			}
 		printf("%d",S);
 		return 0;
 		}
 		
 				
