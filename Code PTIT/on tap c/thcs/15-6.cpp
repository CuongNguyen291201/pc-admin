// cho 1 so nguyen duong N, 1 day gom N phan tu, 1 gia tri nguyen x
// su dung thuat toan tim kiem tuyen tinh kiem tra xem x co mat
// trong day khong (co in 1, khong in 0)
// IN: 10
// 0 39 39 3
// out 1


#include <stdio.h>
 int main(void){
 	int N;
 	scanf("%d",&N);
 	int a[N];
 	int i, tmp;
 	for(i=0;i<N;i++)
 	   scanf("%d",&a[i]);
 	   
 	   int isFound=0;
 	   for(i=0;i<N;i++){
 	   	if(a[i] == i){
 	   		isFound = 1;
 	   		break;
 	   		}
 	   		}
 	   		printf("%d", isFound);
 	   		return 0;
 	   		}
 	   		
