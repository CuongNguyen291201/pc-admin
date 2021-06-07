#include <stdio.h>
 int main (){
 	int a,b,tong,hieu,tich,du; float thuong;
 	scanf("%d",&a);
 	scanf("%d",&b);
 	
 	if(b ==0){
 		printf("0");
 		return;
	 }
 	
 	tong = a + b;
 	hieu = a - b;
 	tich = a * b;
 	thuong = a / b;
 	du = a % b;
    
    printf("%d\n", tong); printf("%d\n",hieu); printf("%d\n",tich);
    printf("%2f\n", thuong);
    printf("%d", du);
    
    return 0;
 }
