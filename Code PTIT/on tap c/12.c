#include <stdio.h>
 int main(){
 	int a[10]={247777,5,20,11,14,1202,624,355,252,25224};
 	int i, first, second;
 	if(a[0]<a[1]){
 		first = a[1];
 		second = a[0];
	 }
	else{
		first = a[0]; 
		second = a[1];
	}
	
	if(i=2;i<=9;i++){
		if(first < a[i]){
			a[i] = first;
			second = first;
		}
		else if(second < a[i]){
			second = a[i];
		}
	}
	printf("so lon nhat la: %d\n", first);
	printf("so lon thu hai la: %d", second);
	
	return 0; 
 }
