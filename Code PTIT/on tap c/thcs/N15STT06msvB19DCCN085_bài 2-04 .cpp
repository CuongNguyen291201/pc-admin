/*
Nguyen Quoc Cuong
B19DCCN085
15 
06
*/

#include <stdio.h>

void nhap(int n);

int main(void){
	int N;
	nhap(N);
	printf("%d",N);
	return 0;
}
//
void nhap(int n){
	printf("n = ");
	scanf("%d",&n);
}

       /*
       Chuong trinh in ra ket qua là gia tri cua N
       mà N chua có giá tri khi in ra se bang 0.
       Vì chi khi khai bao khong nhap gia tri thi gia tri n duoc gan là 0 
       */
       
