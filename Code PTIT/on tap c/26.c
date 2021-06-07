#include <stdio.h>
  int main(){
  	int i,a[10],max;
  	int h; scanf("%d",&h);
  	for(i=0;i<=h;i++){
  		scanf("%d", &a[i]);
	  }
    
    if(max<a[i]){
    	max = a[i];
	}
	printf("gia tri lon nhat cua mang la: %d", max);
	
  	return 0;
  }
