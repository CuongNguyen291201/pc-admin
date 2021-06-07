#include <stdio.h>
 int main(){
 	int a[10]={1,2,3,4,5,6,7,8,9,10};
 	int i, s=0, t=0;
 	for(i=0;i<=9;i++){
 		s = s + a[i];
	 }
	 t = (float)s / i;
	printf("gia tri trung binh la: %d", t);
	return 0;
 }
